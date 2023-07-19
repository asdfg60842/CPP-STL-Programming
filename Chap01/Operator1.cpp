// 연산자 오버로딩
// 기본 타입이 아닌 클래스 타입, 즉 사용자 정의 타입에도 연산자를 사용할 수 있게 하는 문법.
// 연산자 오버로딩을 사용하면 컴파일러 내부에 정의되지 않은 타입의 연산이 가능하여 코드의 '직관성'과 '가독성'을 좋게 할 수 있음.
// 핵심은 클래스 타입의 객체에 연산자를 사용하면 컴파일러가 정의된 함수를 호출하는 데 있다.

// + 연산자 오버로딩 (operator+())
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

    // 값을 반환해야 하므로 상수형 객체를 반환함 (const 선언으로 반환되는 값이 수정하는 것을 방지함)
    // 함수 내에서 멤버 변수를 변경하지 않으므로 const 상수형 메서드 선언
    const Point operator+(const Point& arg) const
    {
        Point pt;
        pt.x = this->x + arg.x;
        pt.y = this->y + arg.y;

        return pt;
    }
};

int main()
{
    Point p1(2, 3), p2(5, 5);
    Point p3;

    // 컴파일러가 p3 = p1.operator+(p2); 로 해석해서 호출함.
    p3 = p1 + p2;
    p3.Print();

    // 직접 호출함
    p3 = p1.operator+(p2);
    p3.Print();

    return 0;
}
