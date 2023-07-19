//
// Created by LJW on 2023/06/25.
//
// 템플릿 특수화
// 특수화 된 버전의 함수 템플릿을 제공하는 것.
// 컴파일러가 함수 템플릿의 인스턴스를 만들려면 템플릿의 매개변수 타입 객체가 템플릿 함수 정의의 연산을 지원해야 한다.
#include <iostream>
using namespace std;

class Point
{
    int x;
    int y;
public:
    explicit Point(int _x, int _y)
        : x(_x), y(_y)
    {

    }

    void Print() const
    {
        cout << x << ',' << y << endl;
    }
};

// 일반화 함수 템플릿
template<typename T>
void Print(T a)
{
    cout << a << endl;
}

// 특수화 함수 템플릿
template< >
// 명시적인 코드 : void Print<Point>(Point a)
void Print(Point a)
{
    cout << "Print 특수화 버전 : ";
    a.Print();
}

int main()
{
    int n = 10;
    double d = 2.5;

    // Point 객체 pt는 cout 의 << 연산이 불가능하므로  컴파일러가 함수 템플릿 인스턴스를 생성하지 못함.
    // 따라서 << 연산자 오버로딩을 하거나, 특수화 함수 템플릿의 지원하는 것이 가능하다.
    Point pt(2, 3);

    // 일반화 버전 호출
    Print(n);
    Print(d);

    // 특수화 버전 호출
    Print(pt);

    return 0;
}