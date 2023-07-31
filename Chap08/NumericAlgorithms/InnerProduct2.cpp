//
// Created by LJW on 2023/07/31.
//
// 수치 알고리즘(numeric algorithms)
// x2 = inner_product(b, e, b2, x) : x2는 x를 초깃값으로 시작하 구간 [b, e)와 구간 [b2, b2 + e - b)의 모든 원소끼리 f2 연산 후 f1 연산으로 총 연산한 결과다.
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int Plus(int left, int right)
{
    return left + right;
}

int Minus(int left, int right)
{
    return left - right;
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

    v2.push_back(2);
    v2.push_back(2);
    v2.push_back(2);
    v2.push_back(2);
    v2.push_back(2);

    // 0을 초깃값으로 이항 함수 Plus, Minus를 사용하여 두 순차열의 연산을 수행한다.
    cout << inner_product(v1.begin(), v1.end(), v2.begin(), 0, Plus, Minus) << endl;
    // 0을 초깃값으로 STL 이항 함수자 plus, minus를 사용하여 두 순차열의 연산을 수행한다.
    cout << inner_product(v1.begin(), v1.end(), v2.begin(), 0, plus<int>(), minus<int>()) << endl;

    return 0;
}