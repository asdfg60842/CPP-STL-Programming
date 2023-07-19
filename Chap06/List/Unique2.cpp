//
// Created by LJW on 2023/07/02.
//
// list 멤버 함수
// lt.unique(pred) : 인접한 원소가 pred(이항 조건자)의 기준에 맞다면 유일한 원소의 순차열로 만든다.
#include <iostream>
#include <list>
using namespace std;

bool Predicate(int first, int second)
{
    return second - first <= 0;
}

int main()
{
    list<int> lt;

    lt.push_back(10);
    lt.push_back(10);
    lt.push_back(20);
    lt.push_back(30);
    lt.push_back(30);
    lt.push_back(30);
    lt.push_back(40);
    lt.push_back(50);
    lt.push_back(10);

    list<int>::iterator iter;
    for (iter = lt.begin(); iter != lt.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    // 이항 조건자가 참이면 원소를 제거한다.
    lt.unique(Predicate);
    for (iter = lt.begin(); iter != lt.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    return 0;
}