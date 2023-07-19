//
// Created by LJW on 2023/06/25.
//
// 템플릿의 매개변수와 함수 객체를 결합하면 반환 타입과 함수 매개변수 타입을 클라이언트가 결정하는 유연한 함수 객체를 만들 수 있다.
#include <iostream>
#include <string>
using namespace std;

template<typename RetType, typename ArgType>
class Functor
{
public:
    RetType operator()(ArgType data)
    {
        cout << data << endl;
        return RetType();
    }
};

int main()
{
    Functor<void, int> functor1;
    functor1(10);

    Functor<bool, string> functor2;
    functor2("Hello!");

    return 0;
}