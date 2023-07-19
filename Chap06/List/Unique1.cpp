//
// Created by LJW on 2023/07/02.
//
// list 멤버 함수
// lt.unique() : 인접한 원소의 값이 같다면 유일한 원소의 순차열로 만든다.
// 인접한 원소를 하나만 남기므로 연속하지 않는 원소는 중복될 수 있다.
// unique() 멤버 함수로 모든 원소를 유일하게 만들고자 한다면 원소를 정렬한 후 unique() 수행하면 된다.
#include <iostream>
#include <list>
using namespace std;

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

    // 인접한 같은 원소를 유일하게 만든다.
    lt.unique();
    for (iter = lt.begin(); iter != lt.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    return 0;
}