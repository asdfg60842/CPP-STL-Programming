//
// Created by LJW on 2023/07/27.
//
// 정렬 알고리즘(sorting algorithms)
// sort(b, e) : 퀵 정렬을 기반으로 정렬한다. 구간 [b, e)를 정렬한다.
// sort(b, e, f) : 퀵 정렬을 기반으로 정렬한다. 구간 [b, e)를 조건자 f를 사용해 정렬한다.
// sort() 알고리즘은 퀵 정렬을 기반으로 하며 평균적으로 O(Nlog2N)의 복잡도를 보장하며, 최악의 경우 O(N2)의 복잡도를 가진다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Greater(int left, int right)
{
    return left > right;
}

int main()
{
    vector<int> v;

    for (int i = 0; i < 100; ++i)
        v.push_back(rand() % 1000);

    cout << "v[정렬 전] : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    // 구간 [v.begin(), v.end())의 순차열을 기본 정렬 규칙 less 정렬한다.
    sort(v.begin(), v.end());
    cout << "v[정렬 less] : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    // 구간 [v.begin(), v.end())의 순차열을 Greater 정렬 규칙을 사용하여 내림차순 정렬한다.
    sort(v.begin(), v.end(), Greater);
    // sort(v.begin(), v.end(), Greater<int>());
    cout << "v[정렬 greater] : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}
