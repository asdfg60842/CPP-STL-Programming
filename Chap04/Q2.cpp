//
// Created by LJW on 2023/06/26.
//
// Q2. 다음은 Push(), Pop(), Empty() 인터페이스를 갖는 Stack 객체의 사용 코드입니다. 최소한의 Stack 클래스를 작성하세요.
#include <iostream>
using namespace std;

template<typename T>
class Stack
{
    T buf[100];
    int top = 0;
public:
    void Push(const T& data)
    {
        buf[top++] = data;
    }

    bool Empty(void) const
    {
        return top <= 0;
    }

    const T& Pop(void)
    {
        return buf[--top];
    }
};

int main()
{
    Stack<int> st;

    st.Push(10);
    st.Push(20);
    st.Push(30);

    if (!st.Empty())
        cout << st.Pop() << endl;
    if (!st.Empty())
        cout << st.Pop() << endl;
    if (!st.Empty())
        cout << st.Pop() << endl;

    return 0;
}