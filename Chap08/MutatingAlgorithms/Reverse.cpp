//
// Created by LJW on 2023/07/23.
//
// 변경 알고리즘(mutating algorithms)
// reverse(b, e) : 구간 [b, e)의 순차열을 뒤집는다.
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

    cout << "v : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    // 구간 [v.begin(), v.end())의 순차열을 역순으로 뒤집는다.
    reverse(v.begin(), v.end());

    cout << "v : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}