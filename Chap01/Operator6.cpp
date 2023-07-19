//
// Created by LJW on 2023/06/23.
//
// 여러 인자를 받는 함수 호출 연산자 중복 예제
#include <iostream>
using namespace std;

struct FuncObject
{
public:
    void operator()(int arg) const
    {
        cout << "정수 : " << arg << endl;
    }

    void operator()(int arg1, int arg2) const
    {
        cout << "정수 : " << arg1 << ',' << arg2 << endl;
    }

    void operator()(int arg1, int arg2, int arg3) const
    {
        cout << "정수 : " << arg1 << ',' << arg2 << ',' << arg3 << endl;
    }
};

int main()
{
    FuncObject print;

    // 객체 생성 후 호출(암시적)
    print(10);
    print(10, 20);
    print(10, 20, 30);
    cout << endl;

    // 객체 생성 후 호출(명시적)
    print.operator()(10);
    print.operator()(10, 20);
    print.operator()(10, 20, 30);
    cout << endl;

    // 임시 객체로 호출(암시적)
    FuncObject()(10);
    FuncObject()(10, 20);
    FuncObject()(10, 20, 30);
    cout << endl;

    // 임시 객체로 호출(명시적)
    FuncObject().operator()(10);
    FuncObject().operator()(10, 20);
    FuncObject().operator()(10, 20, 30);

    return 0;
}