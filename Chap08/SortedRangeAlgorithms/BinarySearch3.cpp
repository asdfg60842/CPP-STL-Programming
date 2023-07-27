//
// Created by LJW on 2023/07/27.
//
// 순차열 정렬 기준에 따라 binary_search() 알고리즘의 비교 조건자를 지정하는 예제
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(20);

    cout << "v[원본] : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    // 기본 정렬 기준 less 사용
    sort(v.begin(), v.end());
    cout << "v[정렬 less] : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    // 비교 조건자 less 지정
    cout << "비교 less 찾기 : " << binary_search(v.begin(), v.end(), 20, less<int>()) << endl;

    // 정렬 기준 greater 지정
    sort(v.begin(), v.end(), greater<int>());
    cout << "v[정렬 greater] : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    // 비교 조건자 greater 지정
    cout << "비교 greater 찾기 : " << binary_search(v.begin(), v.end(), 20, greater<int>()) << endl;

    retrun 0;
}