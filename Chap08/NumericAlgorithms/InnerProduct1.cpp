//
// Created by LJW on 2023/07/31.
//
// 수치 알고리즘(numeric algorithms)
// x2 = inner_product(b, e, b2, x) : x2는 x를 초깃값으로 시작하 구간 [b, e)와 구간 [b2, b2 + e - b)의 내적(두 순차열의 곱의 합)이다.
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    vector<int> v1;

    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);

    vector<int> v2;

    v2.push_back(2);
    v2.push_back(2);
    v2.push_back(2);
    v2.push_back(2);
    v2.push_back(2);

    // 0을 초깃값으로 두 순차열의 내적을 반환한다.
    cout << inner_product(v1.begin(), v1.end(), v2.begin(), 0) << endl;
    // 100을 초깃값으로 두 순차열의 내적을 반환한다.
    cout << inner_product(v1.begin(), v1.end(), v2.begin(), 100) << endl;

    return 0;
}