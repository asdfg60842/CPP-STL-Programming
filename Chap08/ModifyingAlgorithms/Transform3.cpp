//
// Created by LJW on 2023/07/21.
//
// 원소를 수정하는 알고리즘 (Modifying Algorithms)
// p = transform(b, e, b2, t, f) : 구간 [b, e)와 [b2, b2 + (e - b))의 두 순차열의 반복자가 p, q 일때 모든 원소를 f(*p, *q)하여 [t, t + (e - b))에 저장한다.
// p는 저장된 마지막 원소의 반복자(t + (e - b))다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Plus(int left, int right)
{
    return left + right;
}

int main()
{
    vector<int> v1;

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    vector<int> v2;

    v2.push_back(1);
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
    v2.push_back(5);

    // size 5인 vector 생성
    vector<int> v3(5);

    vector<int>::iterator iter_end;
    // STL plus 사용
    // iter_end = transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), plus<int>());

    // 구간 [v1.begin(), v1.end())의 순차열과 [v2.begin(), v2.begin() + (v1.end() - v1.begin()))의 순차열의 합을 [v3.begin(), v3.begin() + (v1.end() - v1.begin()))의 순차열에 저장한다.
    // 이때 iter_end는 목적지 순차열의 끝 반복자이므로 [v3.begin(), iter_end) 순차열이 목적지 순차열이 된다.
    iter_end = transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), Plus);

    cout << "v1 : ";
    for (vector<int>::size_type i = 0; i < v1.size(); ++i)
        cout << v1[i] << " ";
    cout << endl;

    cout << "v2 : ";
    for (vector<int>::size_type i = 0; i < v2.size(); ++i)
        cout << v2[i] << " ";
    cout << endl;

    cout << "v3 : ";
    for (vector<int>::size_type i = 0; i < v3.size(); ++i)
        cout << v3[i] << " ";
    cout << endl;

    cout << "[v3.begin(), iter_end) 순차열 : ";
    for (vector<int>::iterator iter = v3.begin(); iter != iter_end; ++iter)
        cout << *iter << " ";
    cout << endl;
}