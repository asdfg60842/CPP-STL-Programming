//
// Created by LJW on 2023/07/31.
//
// Q3. 알고리즘을 사용하여 vector의 일부 원소를 뒤집는 코드를 작성하세요.
// 전 10, 20, 30, 40, 50, 60, 70, 80, 90, 100
// 후 50, 40, 30, 20, 10, 60, 70, 80, 90, 100
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
    v.push_back(70);
    v.push_back(80);
    v.push_back(90);
    v.push_back(100);

    cout << "v[전] : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    reverse(v.begin(), v.begin() + 5);

    cout << "v[후]}} : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}