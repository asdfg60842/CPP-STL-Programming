//
// Created by LJW on 2023/07/02.
//
// list 멤버 함수
// lt.splice(p, lt2) : p가 가리키는 위치에 lt2의 모든 원소를 잘라 붙인다.
// splice()는 다른 list 컨테이너의 순차열을 잘라붙일 수 있다.
// splice()는 lt1과 lt2의 노드를 단지 연결하기 때문에 상수 시간의 실행 동작을 보인다.
#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> lt1;
    list<int> lt2;

    lt1.push_back(10);
    lt1.push_back(20);
    lt1.push_back(30);
    lt1.push_back(40);
    lt1.push_back(50);

    lt2.push_back(100);
    lt2.push_back(200);
    lt2.push_back(300);
    lt2.push_back(400);
    lt2.push_back(500);

    list<int>::iterator iter;
    cout << "lt1 : ";
    for (iter = lt1.begin(); iter != lt1.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    cout << "lt2 : ";
    for (iter = lt2.begin(); iter != lt2.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    iter = lt1.begin();
    ++iter;
    // 30 원소의 위치를 가리킴
    ++iter;

    // iter가 가리키는 위치에 lt2의 모든 원소를 잘라 붙임.
    lt1.splice(iter, lt2);

    cout << "lt1 : ";
    for (iter = lt1.begin(); iter != lt1.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    cout << "lt2 : ";
    for (iter = lt2.begin(); iter != lt2.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    return 0;
}