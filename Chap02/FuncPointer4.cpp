//
// Created by LJW on 2023/06/25.
//
// 객체와 주소로 멤버 함수 호출
// 멤버 함수 포인터는 함수 포인터 선언에 어떤 클래스의 멤버 함수를 가리킬 것인지 클래스 이름을 지정해야 한다.
// * 객체로 멤버 함수 호출 시에는 .* 연산자를 이용한다. (객체.*pf)(10)
// * 주소로 멤버 함수 호출 시에는 ->* 연산자를 이용한다. (주소->*pf)(10)
// 또한, 함수 호출 시 연산자 우선순위로 인해 객체와 .*, ->* 연산자 사이에 () 연산자를 사용해야 한다.
#include <iostream>
using namespace std;

class Point
{
    int x;
    int y;
public:
    explicit Point(int _x = 0, int _y = 0)
        : x(_x), y(_y)
    {

    }

    void Print() const
    {
        cout << x << ',' << y << endl;
    }

    void PrintInt(int n)
    {
        cout << "테스트 정수 : " << n << endl;
    }
};

int main()
{
    Point pt(2, 3);
    Point *p = &pt;

    // 멤버 함수 포인터 선언
    void (Point::*pf1)() const;
    // Point 클래스의 void 형 반환 타입과 인자가 없는 const 멤버 함수 포인터
    pf1 = &Point::Print;

    // 멤버 함수 포인터 선언
    void (Point::*pf2)(int);
    // Point 클래스의 void 형 반환 타입과 int 형 인자를 갖는 멤버 함수 포인터
    pf2 = &Point::PrintInt;

    pt.Print();
    pt.PrintInt(10);
    cout << endl;

    // 객체로 멤버 함수 포인터를 이용한 호출
    (pt.*pf1)();
    (pt.*pf2)(10);
    cout << endl;

    // 주소로 멤버 함수 포인터를 이용한 호출
    (p->*pf1)();
    (p->*pf2)(10);

    return 0;
}