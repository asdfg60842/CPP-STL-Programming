//
// Created by LJW on 8/2/23.
//
// for_each() 알고리즘의 원소가 객체가 아닌 객체의 주소라면 mem_fun_ref() 어댑터가 아닌 mem_fun() 어댑터를 사용한다.
// 객체로 멤버 함수 포인터를 호출할 때는 (o.*pf)()로 호출하지만, 객체의 주소로 멤버 함수 포인터를 호출할 때는 (p->*pf)()로 호출하기 때문이다.
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

///////////////////////////////// Server /////////////////////////////////
// 객체의 멤버 함수를 호출할 수 있는 함수 객체 클래스
template<typename RType, typename CType>
class Mem_fun_class: public unary_function<CType, RType>
{
    RType (CType::*pf)() const;
public:
    Mem_fun_class(RType (CType::*_pf)() const)
        : pf(_pf)
    {

    }

    // 매개변수가 Point의 포인터이며 Point의 멤버 함수를 호출하기 위해 (p->*pf)() 사용
    RType operator()(const CType* p) const
    {
        return (p->*pf)();
    }
};

// 어댑터 함수 : 멤버 함수를 주소를 저장하는 함수 객체 반환
template<typename RType, typename CType>
Mem_fun_class<RType, CType> Mem_fun(RType (CType::*pf)() const)
{
    return Mem_fun_class<RType, CType>(pf);
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
    vector<Point*> v;
    // 순차열에 저장된 원소가 객체가 아닌 객체의 주소이다.
    v.push_back(new Point(1, 1));
    v.push_back(new Point(2, 2));
    v.push_back(new Point(3, 3));
    v.push_back(new Point(4, 4));
    v.push_back(new Point(5, 5));

    // for_each() 알고리즘의 fun(*p) 는 fun이 Mem_fun_class 객체이므로 fun.operator()(*p)를 호출하며,
    // *p 가 Point 객체 주소이므로 ((*p)->*pf)()를 호출해 실제 (*p)->Print()를 호출한다.
    // STL 버전
    for_each(v.begin(), v.end(), mem_fun(&Point::Print));
    // 사용자 버전
    for_each(v.begin(), v.end(), Mem_fun(&Point::Print));

    return 0;
}