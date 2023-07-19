//
// Created by LJW on 2023/06/22.
//
// 단항 연산자 오버로딩
// ++ 연산자 오버로딩
// 전위 ++ 연산자 (operator++())
// 후위 ++ 연산자 (operator++(int))
// 전위 ++ 연산자와 후위 ++ 연산자의 구분을 위해 후위 ++ 연산자는 operator 함수 호출시 dummy 정수형 인자 0을 전달함.
// -- 연산자 오버로딩도 ++ 연산자 오버로딩과 방법이 같음.
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

    // 전위 ++ 연산자 오버로딩
    const Point& operator++()
    {
        ++x;
        ++y;

        return *this;
    }

    // 후위 ++ 연산자 오버로딩
    // 중복 코드를 피하는 방법으로 다음과 같은 코드 사용가능
    // const Point operator++(int)
    // {
    //     Point tmp = *this;
    //     ++*this;
    //     return tmp;
    // }
    const Point& operator++(int)
    {

        Point pt(x, y);

        // 내부 구현이므로 멤버 변수는 전위 ++ 연산을 사용해도 무방하다.
        ++x;
        ++y;

        return pt;
    }
};

int main()
{
    Point p1(2, 3), p2(2, 3);
    Point result;

    // result = p1.operator++(); 와 같다.
    result = ++p1;
    p1.Print();
    result.Print();

    // result = p2.operator++(0); 와 같다.
    result = p2++;
    p2.Print();
    // 후위 ++ 연산자이므로 연산 전의 값이 출력됨
    result.Print();

    return 0;
}