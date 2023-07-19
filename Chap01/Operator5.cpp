//
// Created by LJW on 2023/06/23.
//
// 함수 호출 연산자 오버로딩
// Print(10); 이라는 호출 문장은 세 가지로 해석할수 있다.
// 1. 함수 호출 : Print가 함수 이름인 경우
// 2. 함수 포인터 : Print가 함수 포인터인 경우
// 3. 함수 객체 : Print가 함수 객체인 경우
#include <iostream>
using namespace std;

struct FuncObject
{
public:
    // () 연산자 오버로딩
    void operator()(int arg) const
    {
        cout << "정수 : " << arg << endl;
    }
};

void Print1(int arg)
{
    cout << "정수 : " << arg << endl;
}

int main()
{
    void (*Print2)(int) = Print1;
    FuncObject Print3;

    // 첫째, '함수'를 사용한 정수 출력
    Print1(10);

    // 둘째, '함수 포인터'를 사용한 정수 출력
    Print2(10);

    // 셋째, '함수 객체'를 사용한 정수 출력
    // Print3.operator(10) 와 같음
    Print3(10);

    return 0;
}