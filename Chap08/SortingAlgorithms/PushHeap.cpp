//
// Created by LJW on 2023/07/27.
//
// 정렬 알고리즘(sorting algorithms)
// push_heap(b, e) : 힙에 원소를 추가한다. 보통 push_back() 멤버 함수와 같이 사용되며, 구간 [b, e)의 순차열을 다시 힙 구조가 되게 한다.
// push_heap(b, e, f) : 힙에 원소를 추가한다. 보통 push_back() 멤버 함수와 같이 사용되며, 구간 [b, e)의 순차열을 다시 힙 구조가 되게 한다. f는 조건자로 비교에 사용된다.
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

    // 60, 50, 30, 40, 20, 10
    make_heap(v.begin(), v.end());
    cout << "v[힙 생성] : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    // 60, 50, 30, 40, 20, 10, 35
    v.push_back(35);
    cout << "v 순차열에 35 추가 : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    // 60, 50, 35, 40, 20, 10, 30
    push_heap(v.begin(), v.end());
    cout << "v[힙 추가] 연산 수행 : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}