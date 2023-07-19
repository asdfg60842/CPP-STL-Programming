//
// Created by LJW on 2023/07/02.
//
// list 멤버 함수
// lt.remove_if(pred) : pred(단항 조건자)가 '참'인 모든 원소를 제거한다.
#include <iostream>
#include <list>
using namespace std;

// 단항 조건자
// 10 이상 30 이하이면 '참' 반환
bool Predicate(int n)
{
    return 10 <= n && n <= 30;
}

int main()
{
    list<int> lt;

    lt.push_back(10);
    lt.push_back(20);
    lt.push_back(30);
    lt.push_back(40);
    lt.push_back(50);
    lt.push_back(10);

    list<int>::iterator iter;
    for (iter = lt.begin(); iter != lt.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    // 조건자가 참인 모든 원소를 제거
    lt.remove_if(Predicate);
    for (iter = lt.begin(); iter != lt.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    return 0;
}