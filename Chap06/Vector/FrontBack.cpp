//
// Created by LJW on 2023/06/28.
//
// vector 멤버 함수
// v.front() : v의 첫 번째 원소를 참조한다(const, 비 const 버전이 있음).
// v.back() : v의 마지막 원소를 참조한다(const, 비 const 버전이 있음).
// front() 와 back()은 원소의 '참조'이므로 이 멤버 함수를 이용해 원소의 값을 변경할 수 있다.
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

    // 첫 번째 원소 참조
    cout << v[0] << ", " << v.front() << endl;
    // 마지막 원소 참조
    cout << v[4] << ", " << v.back() << endl;
    cout << endl;

    // 첫 번째 원소의 값 100으로 변경
    v.front() = 100;
    // 마지막 원소의 값 500으로 변경
    v.back() = 500;

    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}