//
// Created by LJW on 2023/07/27.
//
// 정렬 알고리즘(sorting algorithms)
// partial_sort(b, m, e) : 힙 정렬을 기반으로 정렬한다. 구간 [b, e)의 원소 중 m - b개 만큼의 상위 원소를 정렬하여 [b, m) 순차열에 놓는다.
// partial_sort(b, m, e, f) : 힙 정렬을 기반으로 정렬한다. 구간 [b, e)의 원소 중 m - b개 만큼의 상위 원소를 정렬하여 [b, m) 순차열에 놓는다. f는 조건자로 비교에 사용한다.
// partial_sort() 알고리즘은 힙 정렬을 기반으로 하며 언제든지 O(Nlog2N)의 복잡도를 보장한다. 하지만, 매번 다운힙을 실행해야하기 때문에 일반적으로 퀵 정렬보다 성능이 떨어진다.
// partial_sort() 알고리즘에서 m을 e와 같게 한다면 순차열의 모든 원소를 정렬할 수 있다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;

    for (int i = 0; i < 100; ++i)
        v.push_back(rand() % 1000);

    partial_sort(v.begin(), v.begin() + 20, v.end());

    cout << "v[상위 20개] : ";
    for (vector<int>::size_type i = 0; i < 20; ++i)
        cout << v[i] << " ";
    cout << endl;

    cout << "v[하위 80개] : ";
    for (vector<int>::size_type i = 20; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}