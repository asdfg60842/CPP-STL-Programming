//
// Created by LJW on 2023/07/23.
//
// 변경 알고리즘(mutating algorithms)
// rotate(b, m, e) : 구간 [b, e)의 순차열을 왼쪽으로 회전시킨다. 첫 원소와 마지막 원소가 연결된 것처럼 모든 원소가 왼쪽으로(m - b)만큼씩 이동한다.
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

    vector<int>::iterator middle = v.begin() + 2;
    // 구간 [v.begin(), v.end())의 순차열을 왼쪽으로 middle - v.begin() 만큼 회전한다.
    rotate(v.begin(), middle, v.end());

    cout << "v : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}