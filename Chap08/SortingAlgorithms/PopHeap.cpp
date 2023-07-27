//
// Created by LJW on 2023/07/27.
//
// 정렬 알고리즘(sorting algorithms)
// pop_heap(b, e) : 힙에서 원소를 제거한다. 구간 [b, e)의 순차열의 가장 큰 원소(첫 원소)를 제거한다.
// pop_heap(b, e, f) : 힙에서 원소를 제거한다. 구간 [b, e)의 순차열의 가장 큰 원소(첫 원소)를 제거한다. f는 조건자로 비교에 사용한다.
// 루트 원소가 가장 끝으로 이동하며, 나머지 원소는 힙을 유지한다.
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
    v.push_back(60);

    make_heap(v.begin(), v.end());
    cout << "v[힙 생성] : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    pop_heap(v.begin(), v.end());
    cout << "v[힙 삭제] 연산 수행 : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}