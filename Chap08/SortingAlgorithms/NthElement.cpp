//
// Created by LJW on 2023/07/27.
//
// 정렬 알고리즘(sorting algorithms)
// nth_element(b, m, e) : 구간 [b, e)의 원소 주 m - b개 만큼 선별된 원소를 [b, m) 순차열에 놓이게 한다.
// nth_element(b, m, e, f) : 구간 [b, e)의 원소 주 m - b개 만큼 선별된 원소를 [b, m) 순차열에 놓이게 한다. f는 조건자로 비교에 사용한다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;

    for (int i = 0; i < 100; ++i)
        v.push_back(rand() % 1000);

    // 구간 [v.begin(), v.end())의 원소 중 상위 20개 ((v.begin() + 20) - v.begin())를 [v.begin(), v.begin() + 20)의 순차열에 놓이게 한다.
    nth_element(v.begin(), v.begin() + 20, v.end());

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