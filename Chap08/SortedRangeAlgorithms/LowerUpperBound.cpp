//
// Created by LJW on 2023/07/27.
//
// 정렬된 범위 알고리즘(sorted range algorithms)
// p = lower_bound(b, e, x) : p는 구간 [b, e)의 순차열에서 x와 같은 첫 원소의 반복자이다.
// p = lower_bound(b, e, x, f) : p는 구간 [b, e)의 순차열에서 x와 같은 첫 원소의 반복자이다. f를 비교에 사용한다.
// p = upper_bound(b, e, x) : p는 구간 [b, e)의 순차열에서 x와 같은 마지막 원소의 다음 원소의 반복자이다.
// p = upper_bound(b, e, x, f) : p는 구간 [b, e)의 순차열에서 x와 같은 마지막 원소의 다음 원소의 반복자이다. f를 비교에 사용한다.
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
    v.push_back(30);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    vector<int>::iterator iter_lower, iter_upper;

    iter_lower = lower_bound(v.begin(), v.end(), 30);
    iter_upper = upper_bound(v.begin(), v.end(), 30);

    cout << "30 원소의 순차열 [iter_lower, iter_upper) : ";
    for (vector<int>::iterator iter = iter_lower; iter != iter_upper; ++iter)
        cout << *iter << " ";
    cout << endl;

    return 0;
}