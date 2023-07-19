//
// Created by LJW on 2023/06/23.
//
// 타입 변환 연산자 오버로딩을 이용한 타입 변환
// 타입 변환 연산자는 생성자나 소멸자처럼 반환 타입을 지정하지 않는다.
#include <iostream>
using namespace std;

class A
{

};

class B
{
public:
    operator A()
    {
        cout << "operator A() 호출" << endl;
        return A();
    }

    operator int()
    {
        cout << "operator int() 호출" << endl;
        return 10;
    }

    operator double()
    {
        cout << "operator double() 호출" << endl;
        return 5.5;
    }
};

int main()
{
    A a;
    int n;
    double d;

    B b;

    // b.operator A() 암시적 호출
    a = b;

    // b.operator int() 암시적 호출
    n = b;

    // b.operator double() 암시적 호출
    d = b;

    cout << endl;

    // 명시적 호출
    a = b.operator A();
    n = b.operator int();
    d = b.operator double();

    return 0;
}