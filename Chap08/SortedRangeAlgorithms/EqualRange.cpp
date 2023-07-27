//
// Created by LJW on 2023/07/27.
//
// 정렬된 범위 알고리즘(sorted range algorithms)
// pair(p1, p2) = equal_range(b, e, x) : 구간 [p1, p2)의 순차열은 구간 [b, e)의 순차열에서 x와 같은 원소의 구간(순차열)이다. [lower_bound(), upper_bound())의 순차열과 같다.
// pair(p1, p2) = equal_range(b, e, x, f) : 구간 [p1, p2)의 순차열은 구간 [b, e)의 순차열에서 x와 같은 원소의 구간(순차열)이다. [lower_bound(), upper_bound())의 순차열과 같다. f를 비교에 사용한다.
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

    pair<vector<int>::iterator, vector<int>::iterator> iter_pair;

    iter_pair = equal_range(v.begin(), v.end(), 30);

    cout << "30 원소의 순차열 [iter_pair.first, iter_pair.second) : ";
    for (vector<int>::iterator iter = iter_pair.first; iter != iter_pair.second; ++iter)
        cout << *iter << " ";
    cout << endl;
    
    return 0;
}