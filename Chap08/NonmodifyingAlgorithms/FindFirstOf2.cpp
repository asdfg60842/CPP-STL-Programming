//
// Created by LJW on 2023/07/21.
//
// 원소를 수정하지 않는 알고리즘(Nonmodifying Algorithms)
// p = find_first_of(b, e, b2, e2, f) : p는 구간 [b, e)에서 구간 [b2, e2)의 원소 중 같은 원소가 발견된 첫 원소의 반복자. 이때 비교는 f를 사용
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Pred(int left, int right)
{
    return left > right;
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

    v2.push_back(40);
    v2.push_back(80);
    v2.push_back(20);

    cout << "v1 : ";
    for (vector<int>::size_type i = 0; i < v1.size(); ++i)
        cout << v1[i] << " ";
    cout << endl;

    cout << "v2 : ";
    for (vector<int>::size_type i = 0; i < v2.size(); ++i)
        cout << v2[i] << " ";
    cout << endl;

    vector<int>::iterator iter;
    // 순차열 v1에서 v2의 순차열 원소 40, 80, 20보다 큰 수는 30이 처음이므로 iter는 30원소의 반복자이다.
    iter = find_first_of(v1.begin(), v1.end(), v2.begin(), v2.end(), Pred);
    if (iter != v1.end())
        cout << "iter : " << *iter << endl;

    return 0;
}