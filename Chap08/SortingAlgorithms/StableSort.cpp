//
// Created by LJW on 2023/07/27.
//
// 정렬 알고리즘(sorting algorithms)
// stable_sort(b, e) : 머지 정렬을 기반으로 정렬한다. 구간 [b, e)를 정렬하되 값이 같은 원소의 상대적인 순서를 유지한다.
// stable_sort(b, e, f) : 머지 정렬을 기반으로 정렬한다. 구간 [b, e)를 정렬하되 값이 같은 원소의 상대적인 순서를 유지한다. f는 조건자로 비교에 사용한다.
// stable_sort() 알고리즘은 머지 정렬을 기반으로 한다. 메모리가 넉넉하다면 O(Nlog2N)의 복잡도를 보장하며 그렇지 않다면 O(Nlog2Nlog2N)의 복잡도를 가진다.
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

    v.push_back(30);
    v.push_back(50);
    v.push_back(30);
    v.push_back(20);
    v.push_back(40);
    v.push_back(10);
    v.push_back(40);

    cout << "v[정렬 전] : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    // 구간 [v.begin(), v.end())의 순차열을 기본 정렬 규칙 less 정렬한다.
    // 순차열의 같은 원소는 30과 40이다. 앞쪽의 30을 30A라 하고 뒤쪽 30을 30B라 하면 항상 30A, 30B 순으로 정렬돼 원소의 상대적인 순서가 유지된다.
    stable_sort(v.begin(), v.end());
    cout << "v[정렬 less] : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    // 구간 [v.begin(), v.end())의 순차열을 Greater 정렬 규칙을 사용하여 내림차순 정렬한다.
    stable_sort(v.begin(), v.end(), Greater);
    // stable_sort(v.begin(), v.end(), Greater<int>());
    cout << "v[정렬 greater] : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}