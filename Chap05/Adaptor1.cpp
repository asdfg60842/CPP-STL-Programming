//
// Created by LJW on 2023/06/26.
//
// 어댑터(Adaptor)
// 구성 요소의 인터페이스를 변경해 새로운 인터페이스를 갖는 구성 요소로 변경한다(새로운 구성 요소처럼 보인다).
// 컨테이너 어댑터(container adaptor) : stack, queue, priority_queue
// 반복자 어댑터(iterator adaptor) : reverse_iterator, back_insert_iterator, front_insert_iterator, insert_iterator
// 함수 어댑터(function adaptor) : 바인더(binder), 부정자(negator), 함수 포인터 어댑터(adaptor for pointers to function

// 대표적인 컨테이너 어댑터는 stack 이다.
// stack 컨테이너 어댑터는 일반 컨테이너를 LIFO(Last-In First-Out) 방식의 스택 컨테이너로 변환한다.
// 시퀀스 컨테이너는 empty, size, push_back, pop_back, back 인터페이스를 지원하므로 stack 컨테이너 어댑터로 이용할 수 있다.
// stack 컨테이너의 디폴트 컨테이너는 deque 컨테이너이다.
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // stack 컨테이너 어댑터의 컨테이너로 vector 를 다음과 같이 적용할 수 있다.
    // stack<int, vector<int>> st; -> vector 컨테이너를 적용한 정수를 저장하는 stack 컨테이너를 생성함.
    // stack 컨테이너 생성
    stack<int> st;

    // 데이터 추가(입력)
    st.push(10);
    st.push(20);
    st.push(30);

    // top 데이터 출력
    cout << st.top() << endl;
    // top 데이터 삭제
    st.pop();

    // top 데이터 출력
    cout << st.top() << endl;
    // top 데이터 삭제
    st.pop();

    // top 데이터 출력
    cout << st.top() << endl;
    // top 데이터 삭제
    st.pop();

    if (st.empty())
        cout << "stack에 데이터 없음" << endl;

    return 0;
}