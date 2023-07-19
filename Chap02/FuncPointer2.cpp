//
// Created by LJW on 2023/06/25.
//
// 함수 포인터의 종류
// C++ 에서 함수는 정적 함수와 멤버 함수로 나눌 수 있다.
// 정적 함수는 전역 함수, namespace 함수, static 멤버 함수가 해당된다.
// 멤버 함수는 객체와 주소로 각각 호출할 수 있으므로 총 세가지의 함수 호출이 있다.
#include <iostream>
using namespace std;

void Print()
{
    cout << "정적 함수 Print()" << endl;
}

class Point
{
public:
    void Print()
    {
        cout << "멤버 함수 Print()" << endl;
    }
};

int main()
{
    Point pt;
    Point *p = &pt;

    // 1. 정적 함수 호출
    Print();
    // 2. 객체로 멤버 함수 호출
    pt.Print();
    // 3. 주소로 멤버 함수 호출
    p->Print();

    return 0;
}