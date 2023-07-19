//
// Created by LJW on 2023/07/02.
//
// deque 멤버 형식
// iterator : 반복자 형식
// deque와 vector는 배열 기반 컨테이너로서 임의 접근 반복자를 지원한다.
// deque의 반복자는 vector의 반복자와 동일하게 작동한다.
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

    deque<int>::iterator iter;

    for (iter = dq.begin(); iter != dq.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    // 반복자에 +2
    iter = dq.begin() + 2;
    cout << *iter << endl;

    // 반복자에 +2
    iter += 2;
    cout << *iter << endl;

    // 반복자에 -3
    iter -= 3;
    cout << *iter << endl;

    return 0;
}