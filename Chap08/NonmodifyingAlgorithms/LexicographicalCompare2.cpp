//
// Created by LJW on 2023/07/21.
//
// 원소를 수정하지 않는 알고리즘(Nonmodifying Algorithms)
// lexicographical_compare(b, e, b2, e2, f) : 구간 [b, e)의 순차열이 구간 [b2, e2)의 순차열보다 작다면(less) true, 아니면 false를 반환한다.
// 이때 작음은 [b, e)의 반복자 p와 [b2, e2)의 반복자 q에 대해 f(*p, *q)가 참이다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<typename T>
struct Less
{
    bool operator()(const T& left, const T& right) const
    {
        return left < right;
    }
};

int main()
{
    vector<int> v1;

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);

    vector<int> v2;

    v2.push_back(10);
    v2.push_back(25);
    v2.push_back(30);

    if (lexicographical_compare(v1.begin(), v1.end(), v2.begin(), v2.end(), less<int>()))
        cout << "기준 less v1과 v2의 비교 : true" << endl;
    else
        cout << "기준 less v1과 v2의 비교 : false" << endl;

    if (lexicographical_compare(v1.begin(), v1.end(), v2.begin(), v2.end(), greater<int>()))
        cout << "기준 greater v1과 v2의 비교 : true" << endl;
    else
        cout << "기준 greater v1과 v2의 비교 : false" << endl;

    if (lexicographical_compare(v1.begin(), v1.end(), v2.begin(), v2.end(), Less<int>()))
        cout << "사용자 기준 less v1과 v2의 비교 : true" << endl;
    else
        cout << "사용자 기준 less v1과 v2의 비교 : false" << endl;

    return 0;
}