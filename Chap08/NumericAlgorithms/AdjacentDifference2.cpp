//
// Created by LJW on 2023/07/31.
//
// 수치 알고리즘(numeric algorithms)
// p = adjacent_difference(b, e, t, f) : 구간 [b, e)의 인접 원소와의 차를 순차열 [t, p)에 저장한다. f를 연산에 사용한다.
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int Plus(int left, int right)
{
    return left + right;
}

int main()
{
    vector<int> v1;

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    cout << "v1 : ";
    for (vector<int>::size_type i = 0; i < v1.size(); ++i)
        cout << v1[i] << " ";
    cout << endl;

    vector<int> v2(5);
    vector<int>::iterator iter_end;
    // 구간 [v1.begin(), v1.end())의 인접 원소의 합(Plus(*p, *(p-1))을 목적지 순차열 [v2.begin(), iter_end)에 저장한다.
    iter_end = adjacent_difference(v1.begin(), v1.end(), v2.begin(), Plus);

    cout << "v2 : ";
    for (vector<int>::size_type i = 0; i < v2.size(); ++i)
        cout << v2[i] << " ";
    cout << endl;

    return 0;
}