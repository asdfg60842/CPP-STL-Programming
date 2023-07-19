//
// Created by LJW on 2023/06/28.
//
// vector 멤버 함수
// v.assign(b, e) : v를 반복자 구간 [b, e)로 할당한다.
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

    vector<int> v2;
    // v2에 순차열 [v.begin(), v.end()) 을 할당
    v2.assign(v.begin(), v.end());

    for (iter = v2.begin(); iter != v2.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    return 0;
}