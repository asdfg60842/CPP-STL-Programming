//
// Created by LJW on 2023/07/03.
//
// set 멤버 함수
// p = s.lower_bound(k) : p는 k의 시작 구간을 가리키는 반복자다(const, 비 const 버전이 있음).
// p = s.upper_bound(k) : p는 k의 끝 구간을 가리키는 반복자다(const, 비 const 버전이 있음).
// lower_bound() 와 upper_bound()는 찾은 key(원소)를 순차열 구간(반복자 쌍)으로 반환하는 멤버 함수이다.
// lower_bound()는 찾은 원소의 시작 반복자를 반환하며, upper_bound()는 찾은 원소의 다음 원소를 가리키는 반복자이다.
// 따라서, 찾은 원소는 구간 [lower_bound(), upper_bound()) 로 표현할 수 있으며, lower_bound() 와 upper_bound()가 같다면 찾는 원소가 없다.
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(50);
    s.insert(30);
    s.insert(80);
    s.insert(40);
    s.insert(10);
    s.insert(70);
    s.insert(90);

    set<int>::iterator iter;

    for (iter = s.begin(); iter != s.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    set<int>::iterator iter_lower;
    set<int>::iterator iter_upper;

    // iter_lower는 30이 시작하는 구간의 반복자이다.
    iter_lower = s.lower_bound(30);
    // iter_upper는 30이 끝나는 구간의 반복자이다.
    iter_upper = s.upper_bound(30);

    cout << *iter_lower << endl;
    cout << *iter_upper << endl;

    iter_lower = s.lower_bound(55);
    iter_upper = s.upper_bound(55);

    if (iter_lower != iter_upper)
        cout << "55가 s에 있음" << endl;
    else
        cout << "55가 s에 없음" << endl;

    return 0;
}