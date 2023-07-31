//
// Created by LJW on 2023/07/31.
//
// Q4. 알고리즘을 사용하여 vector를 정렬하고 모든 원소가 유일하게 코드를 작성하세요.
// 70, 20, 32, 40, 33, 60, 32, 33, 90, 50
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(70);
    v.push_back(20);
    v.push_back(32);
    v.push_back(40);
    v.push_back(33);
    v.push_back(60);
    v.push_back(32);
    v.push_back(33);
    v.push_back(90);
    v.push_back(50);

    cout << "v[전] : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    sort(v.begin(), v.end());

    cout << "v[정렬 후] : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    v.erase(unique(v.begin(), v.end()), v.end());

    cout << "v[중복 제거 후] : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}