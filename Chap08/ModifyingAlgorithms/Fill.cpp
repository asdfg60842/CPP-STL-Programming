//
// Created by LJW on 2023/07/21.
//
// 원소를 수정하는 알고리즘 (Modifying Algorithms)
// fill(b, e, x) : 구간 [b, e)의 모든 원소를 x로 채운다.
// fill_n(b, n, x) : 구간 [b, b + n)의 모든 원소를 x로 채운다.
// fill() 알고리즘은 구간 [b, e)의 원소를 x로 채우며, fill_n() 알고리즘은 구간 [b, b + n)의 원소를 x로 채운다.
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

    // 구간 [v.begin(), v.end())의 원소를 모두 0으로 채운다.
    fill(v.begin(), v.end(), 0);
    cout << "v : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    // 구간 [v.begin(), v.begin() + 3)의 원소를 모두 55으로 채운다.
    fill_n(v.begin(), 3, 55);
    cout << "v : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}