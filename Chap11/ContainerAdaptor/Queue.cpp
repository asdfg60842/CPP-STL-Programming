//
// Created by LJW on 8/9/23.
//
// Queue
// FIFO(First-In First-Out) 방식의 컨테이너를 구현한 템플릿 클래스. deque가 기본 컨테이너이다.
// queue의 Container 템플릿 인자로 받는 컨테이너는 empty(), size(), push_back(), pop_front(), front() 등의 인터페이스를 제공해야 한다.
// 따라서 queue의 Container는 vector를 사용할 수 없으며, deque, list와 이 인터페이스를 지원하는 사용자 컨테이너를 사용할 수 있다.

// bool empty() const : 원소가 없는가?
// size_type size() const : 원소의 개수
// void push(const value_type& x) : 원소를 추가한다.
// void pop() : 원소를 제거한다.
// value_type& front() : 첫 원소의 참조이다.
// const value_type& front() const : const 객체 첫 원소의 참조이다.
// value_type& back() : 마지막 원소의 참조이다.
// const value_type& back() const : const 객체 마지막 원소의 참조이다.
#include <iostream>
#include <queue>
#include <list>
using namespace std;

int main()
{
    // queue의 컨테이너 형식으로 list<int>를 사용하고 int 형식의 원소를 저장하는 queue를 생성한다.
    queue<int, list<int>> q;

    q.push(10);
    q.push(20);
    q.push(30);

    while(!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}