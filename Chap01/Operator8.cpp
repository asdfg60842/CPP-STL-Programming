//
// Created by LJW on 2023/06/23.
//
// 메모리 접근, 클래스 멤버 접근 연산자 오버로딩
// *, -> 연산자는 스마트 포인터나 반복자 등의 특수한 개체에 사용되는데, 반복자가 STL의 핵심 구성 요소이므로 *, -> 연산자 오버로딩이 아주 중요하다.
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
};

class PointPtr
{
    Point *ptr;
public:
    // PointPtr 클래스 객체 생성시 초기화 리스트를 통해 Point 객체 초기화
    // Point 클래스의 생성자가 호출됨
    PointPtr(Point *p)
        : ptr(p)
    {

    }

    ~PointPtr()
    {
        delete ptr;
    }

    // 클래스 멤버 접근 연산자 오버로딩
    // 객체의 내부에 보관된 실제 포인터인 'ptr'을 반환한다.
    Point* operator->() const
    {
        return ptr;
    }

    // 메모리 접근 연산자 오버로딩
    // 포인터가 가리키는 객체 자체를 반환
    Point& operator*() const
    {
        return *ptr;
    }
};

int main()
{
    // 일반 포인터
    Point* p1 = new Point(2, 3);

    // 스마트 포인터
    PointPtr p2 = new Point(5, 5);

    // 멤버 접근 연산자 '->'로 함수 호출
    p1->Print();

    // Point 클래스의 멤버에 접근할 수 있도록 '->' 연산자 오버로딩
    // p2.operator->()->Print() 와 같음
    // 반환받은 포인터를 이용해 Print() 함수 호출
    p2->Print();
    cout << endl;

    // (*p1).Print() 호충
    (*p1).Print();

    // p2.operator*().Print() 와 같음
    // 반환받은 객체 자체로 Print() 함수 호출
    (*p2).Print();

    // 일반 포인터인 p1 객체는 메모리 해제를 해줘야함
    delete p1;

    // 스마트 포인터인 p2 객체는 소멸자를 통해 자동으로 메모리에서 제거된다.

    return 0;
}