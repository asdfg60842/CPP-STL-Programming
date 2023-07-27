//
// Created by LJW on 2023/07/27.
//
// 정렬 알고리즘(sorting algorithms)
// sort_heap(b, e) : 힙을 정렬한다. 구간 [b, e)의 순차열을 힙 구조를 이용해 정렬한다.
// sort_heap(b, e, f) : 힙을 정렬한다. 구간 [b, e)의 순차열을 힙 구조를 이용해 정렬한다. f는 조건자로 비교에 사용한다.
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

    sort_heap(v.begin(), v.end());
    cout << "v[힙 정렬] : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}
