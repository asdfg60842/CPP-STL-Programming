//
// Created by LJW on 2023/07/27.
//
// 정렬 알고리즘(sorting algorithms)
// 힙 알고리즘(make_heap, push_heap, sort_heap)의 조건자 버전
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(40);
    v.push_back(10);
    v.push_back(50);
    v.push_back(30);
    v.push_back(20);
    v.push_back(60);

    // 부모 노드가 모든 자식 노드보다 작은 힙 생성
    make_heap(v.begin(), v.end(), greater<int>());
    cout << "v[힙 생성] : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    v.push_back(35);
    push_heap(v.begin(), v.end(), greater<int>());
    cout << "v[힙 추가] : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    sort_heap(v.begin(), v.end(), greater<int>());
    cout << "v[힙 정렬] : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}