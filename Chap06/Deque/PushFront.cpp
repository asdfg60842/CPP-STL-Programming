//
// Created by LJW on 2023/07/02.
//
// deque 멤버 함수
// dq.push_front(x) : dq의 앞쪽에 x를 추가한다.
// 원소를 앞쪽에 추가하면 새로운 메모리 블록을 할당하고 원소를 저장해 간다.
#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_back(50);

    for (deque<int>::size_type i = 0; i < dq.size(); ++i)
        cout << dq[i] << " ";
    cout << endl;

    // dq 앞쪽에 원소를 추가한다.
    dq.push_front(100);
    dq.push_front(200);

    for (deque<int>::size_type i = 0; i < dq.size(); ++i)
        cout << dq[i] << " ";
    cout << endl;

    return 0;
}