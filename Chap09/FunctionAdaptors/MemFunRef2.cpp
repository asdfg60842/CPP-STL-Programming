//
// Created by LJW on 8/2/23.
//
// 사용자 mem_fun_ref() 어댑터 구현한 예제
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

///////////////////////////////// Server /////////////////////////////////
// 객체의 멤버 함수를 호출할 수 있는 함수 객체 클래스
template<typename RType, typename CType>
class Mem_fun_ref_class: public unary_function<CType, RType>
{
    RType (CType::*pf)() const;
public:
    Mem_fun_ref_class(RType (CType::*_pf)() const)
        : pf(_pf)
    {

    }

    // Point 객체를 받아와 Print() 함수를 호출함.
    RType operator()(const CType& o) const
    {
        return (o.*pf)();
    }
};

// 어댑터 함수 : 멤버 함수를 주소를 저장하는 함수 객체 반환
template<typename RType, typename CType>
Mem_fun_ref_class<RType, CType> Mem_fun_ref(RType (CType::*pf)() const)
{
    return Mem_fun_ref_class<RType, CType>(pf);
}

///////////////////////////////// Client /////////////////////////////////
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

    // for_each() 알고리즘의 fun(*p)는 fun이 Mem_fun_ref_class 객체이므로 fun.operator()(*p)를 호출하며, *p가 Point 객체이므로 ((*p).*pf)()를 호출해
    // 실제 (*p).Print()를 호출한다.
    for_each(v.begin(), v.end(), Mem_fun_ref(&Point::Print));

    return 0;
}