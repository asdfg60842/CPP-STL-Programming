//
// Created by LJW on 2023/07/19.
//
// 원소를 수정하지 않는 알고리즘(Nonmodifying Algorithms)
// n = count(b, e, x) : n은 구간 [b, e)의 원소 중 x 원소의 개수
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
    v.push_back(50);

    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    // 구간 [v.begin(), v.end()) 에서 30 원소의 개수 반환
    int n = count(v.begin(), v.end(), 30);
    cout << "30의 개수 : " << n << endl;

    return 0;
}