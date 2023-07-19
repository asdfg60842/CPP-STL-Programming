//
// Created by LJW on 2023/06/23.
//
// 생성자를 이용한 타입 변환
// 특정 타입을 인자로 받는 생성자가 있다면, 생성자 호출을 통한 타입 변환이 가능하다.
// 단, 생성자를 이용한 형변환을 의도하지 않는다면 인자를 갖는 생성자는 명시적 호출만 가능하도록 모두 explicit 키워드를 지정하는게 좋다.
#include <iostream>
using namespace std;

class A
{

};

class B
{
public:
    B()
    {
        cout << "B() 생성자" << endl;
    }

    B(A& a)
    {
        cout << "B(A _a) 생성자" << endl;
    }

    B(int n)
    {
        cout << "B(int n) 생성자" << endl;
    }

    B(double d)
    {
        cout << "B(double d) 생성자" << endl;
    }
};

int main()
{
    A a;
    int n = 10;
    double d = 5.5;

    // B() 생성자 호출
    B b;

    // b = B(a) 암시적 생성자 호출 후 대입
    b = a;

    // b = B(n) 암시적 생성자 호출 후 대입
    b = n;

    // b = B(d) 암시적 생성자 호출 후 대입
    b = d;

    return 0;
}