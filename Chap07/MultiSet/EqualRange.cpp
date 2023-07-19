//
// Created by LJW on 2023/07/19.
//
// pr = ms.equal_range(k) : pr은 k 원소의 반복자 구간인 pair 객체이다.
#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> ms;

    ms.insert(50);
    ms.insert(30);
    ms.insert(80);
    // 80 중복
    ms.insert(80);
    // 30 중복
    ms.insert(30);
    ms.insert(70);
    ms.insert(10);

    multiset<int>::iterator iter;
    for (iter = ms.begin(); iter != ms.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    // multiset의 반복자 쌍(pair) 객체 생성
    pair<multiset<int>::iterator, multiset<int>::iterator> iter_pair;
    // 만약 iter_pair.first와 iter_pair.second가 같다면 찾는 원소가 없다.
    iter_pair = ms.equal_range(30);

    // [iter_pair.first, iter_pair.second) 구간의 순차열
    for (iter = iter_pair.first; iter != iter_pair.second; ++iter)
        cout << *iter << " ";
    cout << endl;

    return 0;
}