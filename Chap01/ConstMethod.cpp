//
// Created by LJW on 2023/06/22.
//
// const 멤버함수
// const 멤버함수는 멤버 함수 내에서 객체의 멤버 변수를 변경하지 않는다는 것을 보장하는 함수이다.
// 따라서, const 객체는 const 멤버 함수만 호출할 수 있다.
// 단, mutable, const_cast 예약어를 사용하여 예외처리를 할 수 있다.
// 자신의 멤버를 변경하지 않는 멤버 함수는 모두 const 예약어를 사용하는게 좋다.
#include <iostream>
using namespace std;

class Point
{
    int x;
    int y;
public:
    Point(int _x = 0, int _y = 0)
        : x(_x), y(_y)
    {

    }

    // const 메서드 : 멤버 변수의 값을 변경하지 않음
    int GetX() const
    {
        return x;
    }

    // const 메서드 : 멤버 변수의 값을 변경하지 않음
    int GetY() const
    {
        return y;
    }

    // 비 const 메서드 : 멤버 변수의 값을 변경함
    void SetX(int _x)
    {
        x = _x;
    }

    // 비 const 메서드 : 멤버 변수의 값을 변경함
    void SetY(int _y)
    {
        y = _y;
    }

    // const 메서드 : 멤버 변수의 값을 변경하지 않음
    void Print() const
    {
        cout << x << ',' << y << endl;
    }
};

int main()
{
    // const 객체 : 모든 멤버 변경 불가 -> SetX(), SetY() 함수 사용 불가
    const Point p1(0, 0);

    // 비 const 객체 : 멤버 변경 가능
    Point p2(2, 3);

    p1.Print();
    p2.Print();

    cout << "p1 : " << p1.GetX() << ',' << p1.GetY() << endl;
    cout << "p2 : " << p2.GetX() << ',' << p2.GetY() << endl;

    // 컴파일 에러 - const 객체는 const 멤버 함수만 호출 가능함.
    // p1.SetX(5);
    // p1.SetY(5);

    p2.SetX(5);
    p2.SetY(5);

    return 0;
}