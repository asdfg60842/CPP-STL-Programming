//
// Created by LJW on 2023/07/21.
//
// 원소를 수정하지 않는 알고리즘(Nonmodifying Algorithms)
// p = max_element(b, e, f) : p는 구간 [b, e)에서 가장 큰 원소의 반복자. 이때 비교는 f를 사용
// p = min_element(b, e, f) : p는 구간 [b, e)에서 가장 작은 원소의 반복자. 이때 비교는 f를 사용
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

bool Compare(const Point& left, const Point& right)
{
    if (left.GetX() < right.GetX())
        return true;
    else if (left.GetX() > right.GetX())
        return false;
    else
        return left.GetY() < right.GetY();
}

int main()
{
    vector<Point> v;

    v.push_back(Point(3, 2));
    v.push_back(Point(2, 5));
    v.push_back(Point(1, 5));
    v.push_back(Point(3, 3));
    v.push_back(Point(3, 2));

    vector<Point>::iterator iter;

    iter = max_element(v.begin(), v.end(), Compare);

    // 반복자가 가리키는 객체의 멤버는 -> 연산자로 접근
    cout << "max : ";
    iter->Print();

    // 위와 같음
    cout << "max : ";
    (*iter).Print();
}