//
// Created by LJW on 2023/06/22.
//
// 이항 연산자 오버로딩
// == 연산자 오버로딩
// 비교연산으로 true 혹은 false 결과가 반환되는 bool 타입이다.
// != 연산자 오버로딩
// == 연산자의 부정으로 == 연산의 결과에 not 연산을 하면 된다.
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

    bool operator==(const Point& arg) const
    {
        return x == arg.x && y == arg.y ? true : false;
    }

    bool operator!=(const Point& arg) const
    {
        return !(*this == arg);
    }
};

int main()
{
    Point p1(2, 3), p2(5, 5), p3(2, 3);

    // p1.operator!=(p2) 와 같다.
    if (p1 != p2)
        cout << "p1 != p2" << endl;
    // p1.operator==(p2) 와 같다.
    else if (p1 == p2)
        cout << "p1 == p2" << endl;

    // p1.operator!=(p3) 와 같다.
    if (p1 != p3)
        cout << "p1 != p3" << endl;
    // p1.operator==(p3) 와 같다.
    else if (p1 == p3)
        cout << "p1 == p3" << endl;
}