// Stack
// LIFO(Last-In First-Out) 방식의 컨테이너를 구현한 템플릿 클래스. deque 컨테이너가 기본 컨테이너이다.
// stack의 Container 템플릿 인자로 받는 컨테이너는 empty(), size(), push_back(), pop_back(), back() 등의 인터페이스를 제공해야 한다.
// 따라서 stack의 Container는 vector, deque, list를 사용할 수 있으며, 이 인터페이스를 지원한다면 사용자 컨테이너를 사용할 수 있다.

// bool empty() const : 원소가 없는가?
// size_type size() const : 원소의 개수
// void push(const value_type& x) : 원소를 추가한다.
// void pop() : 원소를 제거한다.
// value_type& top() : Top의 원소를 참조한다.
// const value_type& top() const : const 객체 Top 원소를 참조한다.]
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;

    // 원소 추가
    st.push(10);
    st.push(20);
    st.push(30);

    while(!st.empty())
    {
        // top의 원소 참조
        cout << st.top() << endl;
        // 원소 제거
        st.pop();
    }

    return 0;
}
