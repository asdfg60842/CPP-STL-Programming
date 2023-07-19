//
// Created by LJW on 2023/07/02.
//
// deque 멤버 함수
// q = dq.insert(p, x) : p가 가리키는 위치에 x 값을 삽입한다. q는 삽입한 원소를 가리키는 반복자다.
// dq.insert(p, n, x) : p가 가리키는 위치에 n개의 x 값을 삽입한다.
// dq.insert(p, b, e) : p가 가리키는 위치에 반복자 구간 [b, e)의 원소를 삽입한다.
// deque의 insert() 멤버 함수는 vector 보다 효율적으로 동작한다.
// vector는 새로운 원소를 삽입할 때 할당된 메모리가 부족하면 이전 메모리 블록을 삭제하고 새로운 메모리 블록을 할당하고 원소를 삽입한다.
// deque는 새로운 단위의 메모리 블록을 할당하고 원소를 삽입한다. 또한, 새로운 원소를 순차열 중간에 삽입, 제거하더라도 원소의 개수가 작은쪽으로 밀어낸다.
#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq;

    for (int i = 0; i < 10; i++)
        dq.push_back((i + 1) * 10);

    deque<int>::iterator iter;
    deque<int>::iterator iter2;

    for (iter = dq.begin(); iter != dq.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    iter = dq.begin() + 2;
    iter2 = dq.insert(iter, 500);
    cout << *iter2 << endl;

    for (iter = dq.begin(); iter != dq.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    return 0;
}