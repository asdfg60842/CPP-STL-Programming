//
// Created by LJW on 2023/07/23.
//
// remove() 알고리즘 + erase() 멤버 함수 사용하여 실제 컨테이너의 size 변경
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
    v.push_back(30);
    v.push_back(50);

    cout << "v : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    vector<int>::iterator iter_end;
    iter_end = remove(v.begin(), v.end(), 30);

    cout << "v : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    // 구간 [iter_end, v.end())의 원소를 v에서 제거한다. 실제 size는 4가 된다.
    v.erase(iter_end, v.end());
    cout << "v : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}