//
// Created by LJW on 2023/07/02.
//
// list 멤버 함수
// lt.sort(pred) : lt의 모든 원소를 pred(조건자) 기준으로 정렬한다. pred(조건자)는 이항 조건자다.
// 이항 조건자가 참이면 두 원소를 바꾸지 않고, 거짓이면 두 원소를 바꿔가며 정렬한다.
#include <iostream>
#include <list>
using namespace std;

struct Greater
{
    bool operator()(int left, int right) const
    {
        return left > right;
    }
};

int main()
{
    list<int> lt;

    lt.push_back(20);
    lt.push_back(10);
    lt.push_back(50);
    lt.push_back(30);
    lt.push_back(40);

    list<int>::iterator iter;
    for (iter = lt.begin(); iter != lt.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    // 조건자 greater를 사용하여 내림차순 정렬
    lt.sort(greater<int>());
    for (iter = lt.begin(); iter != lt.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    // 조건자 less를 사용하여 다시 오름차순 정렬
    lt.sort(less<int>());
    for (iter = lt.begin(); iter != lt.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    // 사용자 정의 조건자를 사용하여 내림차순 정렬
    lt.sort(Greater());
    for (iter = lt.begin(); iter != lt.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    return 0;
}