//
// Created by LJW on 2023/06/25.
//
// 정적 함수 호출
// 정적 함수는 함수 시그니처만 알면 쉽게 선언할 수 있다.
// 함수 호출 규약은 함수 호출 시 전달되는 인자의 순서나 함수가 종료될 때 함수의 스택을 정리하는 시점 등을 약속한 것이다.
// 정적 함수 기본 함수 호출 규약은 cdecl이다.
// 멤버 함수의 호출 규약은 thiscall이다.
// 따라서 정적 함수 포인터와 멤버 함수 포인터를 각기 다르게 선언한다.
#include <iostream>
using namespace std;

void Print(int n)
{
    cout << "전역 함수 : " << n << endl;
}

namespace A
{
    void Print(int n)
    {
        cout << "namespace A 전역 함수 : " << n << endl;
    }
}

class Point
{
public:
    static void Print(int n)
    {
        cout << "Point 클래스의 정적 멤버 함수 : " << n << endl;
    }
};

int main()
{
    // 정적 함수 포인터 선언
    void (*pf)(int);

    // 1. 전역 함수 호출
    Print(10);
    // 2. namespace A 의 전역 함수 호출
    A::Print(10);
    // 3. Point 클래스의 정적 멤버 함수 호출
    Point::Print(10);

    // 1. 함수 포인터로 전역 함수 호출
    pf = Print;
    pf(10);
    // pf(10) 과 같은 문장
    // (*pf)(10);

    // 2. 함수 포인터로 namespace A 의 전역 함수 호출
    pf = A::Print;
    pf(10);
    // pf(10) 과 같은 문장
    // (*pf)(10);

    // 3. 함수 포인터로 Point 클래스의 정적 멤버 함수 호출
    pf = Point::Print;
    pf(10);
    // pf(10) 과 같은 문장
    // (*pf)(10);

    return 0;
}