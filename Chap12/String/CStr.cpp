//
// Created by LJW on 8/9/23.
//
// s.c_str() : C 스타일(널문자를 포함한)의 문자열 주소 반환
// s.data() : 문자열의 배열 주소를 반환
// 두 함수 모두 const char* 형식을 반환한다.
// 대부분의 컴파일러는 c_str()과 data() 멤버 함수의 구현이 같다.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s("Hello!");
    const char *sz;
    const char *buf;

    sz = s.c_str();
    buf = s.data();

    cout << "'\\0' 문자로 끝나는 문자열(C-style) : " << sz << endl;
    cout << "'\\0' 문자 포함하지 않은 문자열 배열 : ";
    for (int i = 0; i < 6; ++i)
        cout << buf[i];
    cout << endl;

    return 0;
}