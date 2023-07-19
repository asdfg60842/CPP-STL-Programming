//
// Created by LJW on 2023/06/28.
//
// vector 멤버 함수
// v.at(i) : v의 i번째 원소를 참조한다(const, 비 const 버전이 있으며, 범위 점검을 포함)
// vector 연산자
// v[i] : v의 i번째 원소를 참조한다(const, 비 const 버전이 있으며, 범위 점검이 없음)
// vector 와 deque는 일반 배열처럼 임의 위치의 원소를 참조하는 [] 연산자와 at() 멤버함수 인터페이스를 제공한다.
// [] 연산자는 범위 점검을 하지 않아 속도가 빠르다.
// at() 멤버함수는 범위를 점검하므로 속도는 느리지만 안전하다. v.at(i) 는 i가 0 <= i < size 이면 i index의 참조를 반환하며, 아니면 out_of_range 예외가 발생한다.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    // 범위 점검이 없는 index 원소 참조
    v[0] = 100;
    v[4] = 500;

    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    // 범위 점검이 있는 index 원소 참조
    v.at(0) = 1000;
    v.at(4) = 5000;

    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;
    cout << endl;

    try
    {
        cout << v.at(1) << endl;
        cout << v.at(3) << endl;
        // throw out_of_range 예외 발생
        // at() 멤버 함수를 [] 연산자로 바꾼다면 메모리 접근 오류 발생
        cout << v.at(6) << endl;
    }
    catch (out_of_range &e)
    {
        cout << e.what() << endl;
    }

    return 0;
}