//
// Created by LJW on 2023/07/27.
//
// 정렬 알고리즘(sorting algorithms)
// partial_sort_copy(b, e, b2, e2) : 힙 정렬을 기반으로 정렬한다. 구간 [b, e)의 원소 중 사위 e2 - b2개의 원소 정도만 정렬하여 [b2, e2)에 복사한다.
// partial_sort_copy(b, e, b2, e2, f) : 힙 정렬을 기반으로 정렬한다. 구간 [b, e)의 원소 중 사위 e2 - b2개의 원소 정도만 정렬하여 [b2, e2)에 복사한다. f는 조건자로 비교에 사용한다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v1;

    for (int i = 0; i < 100; ++i)
        v1.push_back(rand() % 1000);

    cout << "v1[정렬 전] : ";
    for (vector<int>::size_type i = 0; i < v1.size(); ++i)
        cout << v1[i] << " ";
    cout << endl;

    vector<int> v2(20);

    // 구간 [v1.begin(), v1.end())의 원소 중 상위 20개(v2.end() - v2.begin())를 정렬하여 [v2.begin(), v2.end())의 순차열로 복사한다.
    partial_sort_copy(v1.begin(), v1.end(), v2.begin(), v2.end());
    cout << "v2[정렬 less] : ";
    for (vector<int>::size_type i = 0; i < v2.size(); ++i)
        cout << v2[i] << " ";
    cout << endl;

    // 위와 같고 원소 비교에 사용되는 정렬 규칙만 greater<int>를 사용하여 내림차순으로 정렬한다.
    partial_sort_copy(v1.begin(), v1.end(), v2.begin(), v2.end(), greater<int>());
    partial_sort_copy(v1.begin(), v1.end(), v2.begin(), v2.end());
    cout << "v2[정렬 greater] : ";
    for (vector<int>::size_type i = 0; i < v2.size(); ++i)
        cout << v2[i] << " ";
    cout << endl;

    return 0;
}