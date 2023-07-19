//
// Created by LJW on 2023/06/28.
//
// vector 멤버 함수
// v.insert(p, n, x) : p가 가리키는 위치에 n개의 x값을 삽입한다.
// v.insert(p, b, e) : p가 가리키는 위치에 반복자 구간 [b, e)의 원소를 삽입한다.
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

    vector<int>::iterator iter = v.begin() + 2;

    // iter가 가리키는 위치에 정수 100을 3개 삽입
    // v.begin() + 2의 위치를 가리키고 있으므로, v[3]에 값이 저장되고, 나머지는 뒤로 밀린다.
    v.insert(iter, 3, 100);

    for (iter = v.begin(); iter != v.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    vector<int> v2;

    v2.push_back(100);
    v2.push_back(200);
    v2.push_back(300);

    iter = v2.begin() + 1;

    // iter가 가리키는 위치에 [v.begin(), v.end()) 구간의 원소를 삽입
    v2.insert(iter, v.begin(), v.end());

    for (iter = v2.begin(); iter != v2.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    return 0;
}