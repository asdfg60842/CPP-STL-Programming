//
// Created by LJW on 2023/07/19.
//
// adjacent_find() 알고리즘이 찾는 원소를 발견하지 못했을 때의 반환 반복자를 확인하는 예제
// 찾기 관련 알고리즘은 찾는 원소를 발견하지 못하면 찾는 구간의 끝 반복자를 반환한다.
// 컨터이너의 끝 표시(past-the-end) 반복자가 아니다.
#include <iostream>
#include <vector>
#include <algorithm>
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

    vector<int>::iterator iter;
    vector<int>::iterator iter_b = v.begin();
    vector<int>::iterator iter_e = v.begin() + 2;

    // 구간 [iter_b, iter_e) 의 순차열은 10, 20 이므로 찾는 원소가 없어 구간의 끝인 iter_e가 반환된다.
    // 따라서 iter는 iter_e 이다.
    iter = adjacent_find(iter_b, iter_e);

    // 찾는 원소가 없는지 확인 <<맞는 표현>>
    if (iter != iter_e)
        cout << *iter << endl;

    cout << "==============" << endl;

    // 찾는 원소가 없는지 확인 <<틀린 표현>>
    if (iter != v.end())
        cout << *iter << endl;

    iter_b = v.begin();
    iter_e = v.end();
    iter = adjacent_find(iter_b, iter_e);

    if (iter != iter_e)
        cout << *iter << endl;

    if (iter != v.end())
        cout << *iter << endl;

    return 0;
}