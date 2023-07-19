//
// Created by LJW on 2023/06/28.
//
// vector<int>::iterator 와 vector<int>::const_iterator
// 반복자가 가리키는 원소의 값을 변경하지 않는다면, 상수 반복자를 사용하는게 좋다.
// 일반 반복자는 포인터와 비슷하고, 상수 반복자는 상수 포인터와 비슷하다.
// 상수 반복자를 사용하면 const 포인터처럼 데이터를 읽기 전용으로 안전하게 사용할 수 있다.
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

    // 일반 반복자
    vector<int>::iterator iter = v.begin();
    // 상수 반복자
    vector<int>::const_iterator citer = v.begin();

    // 가리키는 원소의 참조
    cout << *iter << endl;
    // 가리키는 원소의 상수 참조
    cout << *citer << endl;

    // 다음 원소로 이동한 원소의 참조
    cout << *++iter << endl;
    // 다음 원소로 이동한 원소의 상수 참조
    cout << *++citer << endl;

    // 일반 반복자는 가리키는 원소를 변경할 수 있음
    *iter = 100;

    // 상수 반복자는 가리키는 원소를 변경할 수 없음
    // *citer = 100;
}