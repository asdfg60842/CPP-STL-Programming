//
// Created by LJW on 2023/06/28.
//
// vector 멤버 함수
// q = v.erase(p) : p가 가리키는 원소를 제거한다. q는 다음 원소를 가리킨다.
// q = v.erase(b, e) : 반복자 구간 [b, e)의 모든 원소를 제거한다. q는 다음 원소를 가리킨다.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    vector<int>::iterator iter;
    vector<int>::iterator iter2;

    for (iter = v.begin(); iter != v.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    iter = v.begin() + 2;

    // iter가 가리키는 위치의 원소를 제거. iter2는 다음 원소인 40을 가리킨다.
    iter2 = v.erase(iter);

    for (iter = v.begin(); iter != v.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    // [v.begin() + 1, v.end()) 구간의 원소를 제거
    iter2 = v.erase(v.begin() + 1, v.end());

    for (iter = v.begin(); iter != v.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    return 0;
}