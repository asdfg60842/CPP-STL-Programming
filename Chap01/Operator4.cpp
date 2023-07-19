//
// Created by LJW on 2023/06/22.
//
// 멤버 함수를 이용한 연산자 오버로딩
// p1.operator==(p2);로 해석하며, p1의 operator==() 멤버 함수를 호출해 p2를 인자로 전달함.

// 전역 함수를 이용한 연산자 오버로딩
// 이항 연산의 왼쪽 항이 연산자 오버로딩 객체가 아니면 멤버 함수를 이용한 연산자 오버로딩을 이용할 수 없다. (왼쪽 객체 기준으로 오버로딩 함수 호출하기 때문)
// 전역 함수 연산자 오버로딩을 사용해야 함.
// operator==(p1, p2);로 해석하며, 전역 함수 operator==()의 인자로 p1 와 p2 객체를 각각 전달함.
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

    void Print() const
    {
        cout << x << ',' << y << endl;
    }

    int GetX() const
    {
        return x;
    }

    int GetY() const
    {
        return y;
    }

    // 멤버 함수를 이용한 연산자 오버로딩
    // 매개변수로 p2의 전달 인자를 받음.
    // const Point operator-(const Point& arg) const
    // {
    //     return Point(x - arg.x, y - arg.y);
    // }
};

// 전역 함수를 이용한 연산자 오버로딩
// 매개변수로 p1, p2의 전달 인자를 받음.
// 전역 함수를 이용하면, 클래스의 Private 멤버인 x, y에 접근 불가능하므로 getter를 이용하거나 프렌트 함수를 사용함.
const Point operator-(const Point& argL, const Point& argR)
{
    return Point(argL.GetX() - argR.GetX(), argL.GetY() - argR.GetY());
}

int main()
{
    Point p1(2, 3), p2(5, 5);
    Point p3;

    p3 = p1 - p2;

    p3.Print();

    return 0;
}

