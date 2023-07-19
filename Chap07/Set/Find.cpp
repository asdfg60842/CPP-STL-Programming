//
// Created by LJW on 2023/07/03.
//
// set 멤버 함수
// p = s.find(k) : p는 k 원소의 위치를 가리키는 반복자다(const, 비 const 버전이 있음).
// find()는 key(원소)를 검색하여 key를 가리키는 반복자를 반환한다.
// 만약 key(원소)가 없으면 끝 표시(past-the-end) 반복자를 반환한다.
// end() 멤버 함수가 끝 표시 반복자를 반환하므로 end() 멤버 함수와 비교해 검색에 성공했는지 못했는지 판단한다.
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

    // key(30)의 반복자를 반환. 30이 없으면 s.end()와 같은 반복자를 반환.
    iter = s.find(30);

    if (iter != s.end())
        cout << *iter << "가 s에 있다." << endl;
    else
        cout << "30이 s에 없다." << endl;

    return 0;
}