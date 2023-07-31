//
// Created by LJW on 2023/07/31.
//
// Q8. 다음 v1 + v2의 합 집합을 v3에 출력하는 코드를 작성하세요.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v1;

    v1.push_back(50);
    v1.push_back(10);
    v1.push_back(30);
    v1.push_back(80);
    v1.push_back(60);

    vector<int> v2;

    v2.push_back(20);
    v2.push_back(70);
    v2.push_back(40);

    vector<int> v3(10);
    vector<int>::iterator iter;

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
    cout << endl;

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    iter = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

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
    cout << endl;

    return 0;
}