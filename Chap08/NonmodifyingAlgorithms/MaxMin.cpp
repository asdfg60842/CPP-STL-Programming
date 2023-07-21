//
// Created by LJW on 2023/07/21.
//
// 원소를 수정하지 않는 알고리즘(Nonmodifying Algorithms)
// k = max(a, b) : k는 a와 b 중 더 큰 것
// k = max(a, b, f) : k는 a와 b 중 더 큰 것. 이때 큰 것은 f(a, b)를 사용
// k = min(a, b) : k는 a와 b 중 더 작은 것
// k = min(a, b, f) : k는 a와 b 중 더 작은 것. 이때 작은 것은 f(a, b)를 사용
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Point
{
    int x, y;

public:
    explicit Point(int _x = 0, int _y = 0)
        : x(_x), y(_y)
    {

    }

    int GetX() const
    {
        return x;
    }

    int GetY() const
    {
        return y;
    }

    void Print() const
    {
        cout << '(' << x << ',' << y << ')' << endl;
    }
};

bool XCompare(const Point& left, const Point& right)
{
    return left.GetX() < right.GetX();
}

bool YCompare(const Point& left, const Point& right)
{
    return left.GetY() < right.GetY();
}

int main()
{
    int a = 10, b = 20;
    int r;

    r = max(a, b);
    cout << "max : " << r << endl;

    r = min(a, b);
    cout << "min : " << r << endl;

    Point pt1(5, 8), pt2(3, 9);
    Point pt3;

    // pt1과 pt2는 Point 객체로 비교 연산자가 없어 크기 비교가 불가능하다. 따라서 XCompare라는 이항 조건자를 사용하여 Point 객체의 x값으로 크기를 비교한다.
    // 조건자가 참인 Point 객체를 반환한다.
    pt3 = max(pt1, pt2, XCompare);
    cout << "x max : ";
    pt3.Print();

    // 조건자가 YCompare로 Point 객체의 y값으로 크기를 비교한다.
    pt3 = max(pt1, pt2, YCompare);
    cout << "y max : ";
    pt3.Print();

    return 0;
}