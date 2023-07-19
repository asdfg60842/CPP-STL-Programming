//
// Created by LJW on 2023/07/02.
//
// list 멤버 함수
// lt.remove(x) : x 원소를 모두 제거한다.
// remove() 멤버 함수는 컨테이너의 모든 원소를 순차적으로 검색하며 해당 원소를 제거한다.
// remove()는 erase() 처럼 해당 값의 노드만을 제거하므로 속도가 빠르며 유일하게 list만이 remove() 멤버 함수를 가지므로 반복자가 아닌 원소의 값으로 컨테이너의 원소를 제거해야 한다면 list 컨테이너를 선택하는 것이 좋다.
#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> lt;

    lt.push_back(10);
    lt.push_back(20);
    lt.push_back(30);
    lt.push_back(10);
    lt.push_back(40);
    lt.push_back(50);
    lt.push_back(10);
    lt.push_back(10);

    list<int>::iterator iter;

    for (iter = lt.begin(); iter != lt.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    // 10 원소의 노드를 모두 제거
    lt.remove(10);
    for (iter = lt.begin(); iter != lt.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    return 0;
}