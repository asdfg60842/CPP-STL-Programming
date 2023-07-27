//
// Created by LJW on 2023/07/27.
//
// 정렬된 범위 알고리즘(sorted range algorithms)
// p = set_union(b, e, b2, e2, t) : 구간 [b, e)의 순차열과 [b2, e2)의 순차열을 정렬된 합집합으로 [t, p)에 저장한다.
// p = set_union(b, e, b2, e2, t, f) : 구간 [b, e)의 순차열과 [b2, e2)의 순차열을 정렬된 합집합으로 [t, p)에 저장한다. f를 비교에 사용한다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    vector<int> v2;

    v2.push_back(20);
    v2.push_back(30);
    v2.push_back(60);

    vector<int> v3(10);
    vector<int>::iterator iter_end;

    // [v1.begin(), v1.end())의 순차열과 [v2.begin(), v2.end())의 순차열을 [v3.begin(), iter_end)의 순차열로 합집합하여 저장한다.
    iter_end = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

    cout << "[v3.begin(), iter_end) : ";
    for (vector<int>::iterator iter = v3.begin(); iter != iter_end; ++iter)
        cout << *iter << " ";
    cout << endl;

    cout << "v3 : ";
    for (vector<int>::size_type i = 0; i < v3.size(); ++i)
        cout << v3[i] << " ";
    cout << endl;

    return 0;
}