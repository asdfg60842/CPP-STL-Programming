//
// Created by LJW on 2023/06/28.
//
// vector 연산자
// v1 == v2 : v1과 v2의 모든 원소가 같은가?
// v1 != v2 : v1과 v2의 모든 원소중 하나라도 다른 원소가 있는가?
// v1 < v2 : 문자열 비교처럼 v2가 v1보다 큰가?
// v1 <= v2 : 문자열 비교처럼 v2가 v1보다 크거나 같은가?
// v1 > v2 : 문자열 비교처럼 v1이 v2보다 큰가?
// v1 >= v2 : 문자열 비교처럼 v1이 v2보다 크거나 같은가?
#include <iostream>
#include <vector>
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

    v2.push_back(10);
    v2.push_back(20);
    v2.push_back(50);

    if (v1 == v2)
        cout << "v1 == v2" << endl;

    if (v1 != v2)
        cout << "v1 != v2" << endl;

    // v1과 v2의 순차열의 원소를 하나씩 순서대로 비교하여 v2의 원소가 크다면 참, 아니면 거짓이다.
    if (v1 < v2)
        cout << "v1 < v2" << endl;

    return 0;
}