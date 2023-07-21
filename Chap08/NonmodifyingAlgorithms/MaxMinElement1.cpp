//
// Created by LJW on 2023/07/21.
//
// 원소를 수정하지 않는 알고리즘(Nonmodifying Algorithms)
// p = max_element(b, e) : p는 구간 [b, e)에서 가장 큰 원소의 반복자
// p = min_element(b, e) : p는 구간 [b, e)에서 가장 작은 원소의 반복자
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(30);
    v.push_back(10);
    v.push_back(20);
    v.push_back(50);
    v.push_back(40);

    vector<int>::iterator iter;
    iter = max_element(v.begin(), v.end());
    cout << *iter << endl;

    iter = min_element(v.begin(), v.end());
    cout << *iter << endl;

    return 0;
}