//
// Created by LJW on 2023/07/21.
//
// 원소를 수정하는 알고리즘 (Modifying Algorithms)
// replace(b, e, x, x2) : 구간 [b, e)의 x인 원소를 x2로 수정한다.
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
    v.push_back(30);
    v.push_back(30);
    v.push_back(50);

    cout << "v : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    replace(v.begin(),v.end(), 30, 0);

    cout << "v : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}