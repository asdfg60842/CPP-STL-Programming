//
// Created by LJW on 2023/07/23.
//
// 변경 알고리즘(mutating algorithms)
// random_shuffle(b, e) : 구간 [b, e)의 순차열을 랜덤(기본 랜덤기)으로 뒤섞는다.
// random_shuffle(b, e, f) : 구간 [b, e)의 순차열을 f를 랜덤기로 사용하여 뒤섞는다.
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    cout << "v : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    srand((unsigned)time(NULL));
    // 원소를 뒤섞는다.
    random_shuffle(v.begin(), v.end());

    cout << "v : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;
    // 원소를 뒤섞는다.
    random_shuffle(v.begin(), v.end());

    cout << "v : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}