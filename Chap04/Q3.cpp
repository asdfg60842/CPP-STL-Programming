//
// Created by LJW on 2023/06/26.
//
// Q2. 다음은 Push(), Pop(), Empty() 인터페이스를 갖는 Queue 객체의 사용 코드입니다. 최소한의 qack 클래스를 작성하세요.
#include <iostream>
using namespace std;

template<typename T>
class Queue
{
    enum { CAP = 100};
    T buf[CAP];
    int front = 0;
    int rear = 0;
public:
    void Push(const T& data)
    {
        // 배열이 다 찼을때, 배열의 크기로 나누어 순환하게 한다.
        buf[rear = (rear + 1) % CAP] = data;
    }

    bool Empty() const
    {
        return rear == front;
    }

    const T& Pop()
    {
        // 배열이 다 찼을때, 배열의 크기로 나누어 순환하게 한다.
        return buf[front = (front + 1) % CAP];
    }
};

int main()
{
    Queue<int> q;

    q.Push(10);
    q.Push(20);
    q.Push(30);

    if (!q.Empty())
        cout << q.Pop() << endl;
    if (!q.Empty())
        cout << q.Pop() << endl;
    if (!q.Empty())
        cout << q.Pop() << endl;

    return 0;
}