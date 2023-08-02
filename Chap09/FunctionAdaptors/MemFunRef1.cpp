//
// Created by LJW on 8/2/23.
//
// 멤버 함수 포인터 어댑터
// 멤버 함수 포인터 어댑터는 멤버 함수를 함수 객체로 변환하여 알고리즘이 객체 원소의 멤버 함수를 호출할 수 있게 한다.
// mem_fun_ref() : 객체로 멤버 함수를 호출한다.
// mem_fun() : 객체의 주소로 멤버 함수를 호출한다.
#include <iostream>
#include <vector>
#include <algorithm>
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

    int GetX() const
    {
        return x;
    }

    int GetY() const
    {
        return y;
    }
};

int main()
{
    vector<Point> v;

    v.push_back(Point(1, 1));
    v.push_back(Point(2, 2));
    v.push_back(Point(3, 3));
    v.push_back(Point(4, 4));
    v.push_back(Point(5, 5));

    // for_each() 알고리즘이 함수 fun(Point 객체) 와 같이 호출하기 때문에 실행할 수 없음.
    // 멤버 함수는 Point 객체.Print() 처럼 호출되어야 함.
    // for_each(v.begin(), v.end(), &Point::Print);
    for_each(v.begin(), v.end(), mem_fun_ref(&Point::Print));

    return 0;
}