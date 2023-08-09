//
// Created by LJW on 8/9/23.
//
// Priority_Queue
// priority_queue 컨테이너는 우선순위 queue를 구현한 템플릿 클래스이다. vector가 기본 컨테이너이다.
// priority_queue는 내부적으로 STL의 힙 알고리즘인 make_heap(), push_heap(), pop_heap()을 사용하여 구현돼 있으므로 priority_queue의 Container 템플릿 인자로 받는 컨테이너는 임의 접근 반복자를 제공하는 컨테이너이다.
// 또한, empty(), size(), push_back(), pop_back(), front() 등의 인터페이스를 제공해야 한다. 따라서 priority_queue는 vector와 deque 컨테이너를 사용할 수 있다.

// bool empty() const : 원소가 없는가?
// size_type size() const : 원소의 개수
// void push(const value_type& x) : 원소를 추가한다.
// void pop() : 원소를 제거한다.
// value_type& top() : Top 원소의 참조이다.
// const value_type& top() const : const 객체 Top 원소의 참조이다.
#include <iostream>
#include <queue>
#include <deque>
using namespace std;

int main()
{
    priority_queue<int> pq1;

    pq1.push(40);
    pq1.push(20);
    pq1.push(30);
    pq1.push(50);
    pq1.push(10);

    cout << "priority_queue[less] : " << endl;
    while(!pq1.empty())
    {
        cout << pq1.top() << endl;
        pq1.pop();
    }

    cout << "========================" << endl;

    priority_queue<int, deque<int>, greater<int>> pq2;

    pq2.push(40);
    pq2.push(20);
    pq2.push(30);
    pq2.push(50);
    pq2.push(10);

    cout << "priority_queue[greater] : " << endl;
    while(!pq2.empty())
    {
        cout << pq2.top() << endl;
        pq2.pop();
    }

    return 0;
}