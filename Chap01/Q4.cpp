//
// Created by LJW on 2023/06/25.
//
// Q4. 다음이 컴파일될 수 있게 최소한의 String 클래스를 작성하세요.
// String s("Hello!");
// const char* sz = s;
#include <iostream>
using namespace std;

class String
{
public:
    String(const char* sz)
    {
        strcpy(buf, sz);
    }

    void Print()
    {
        cout << buf << endl;
    }

    // const char* 타입 형변환 연산자 오버로딩
    operator const char*() const
    {
        return buf;
    }

private:
    char buf[100];
};

int main()
{
    String s("Hello!");
    const char* sz = s;

    s.Print();
    cout << sz << endl;

    return 0;
}