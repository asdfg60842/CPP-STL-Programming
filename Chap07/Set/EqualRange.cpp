//
// Created by LJW on 2023/07/03.
//
// set 멤버 함수
// pr = s.equal_range(k) : pr은 k원소의 반복자 구간인 pair 객체다(const, 비 const 버전이 있음).
// equal_range()는 lower_bound(), upper_bound()의 반복자 쌍을 pair 객체로 반환한다.
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

    // 반복자 쌍의 pair 객체
    pair<set<int>::iterator, set<int>::iterator> iter_pair;

    iter_pair = s.equal_range(30);
    cout << *iter_pair.first << endl;
    cout << *iter_pair.second << endl;

    iter_pair = s.equal_range(55);

    if (iter_pair.first != iter_pair.second)
        cout << "55가 s에 있음" << endl;
    else
        cout << "55가 s에 없음" << endl;

    return 0;
}