//
// Created by LJW on 2023/06/25.
//
// Q5. 다음이 컴파일될 수 있게 최소한의 String 클래스를 작성하세요.
// const char* sz = "Hello!";
// String s("Hi~!");
// s = sz;
#include <iostream>
using namespace std;

class String
{
public:
    String(const char* sz)
    {
        buf = new char[strlen(sz) + 1];
        strcpy(buf, sz);
    }

    ~String()
    {
        delete [] buf;
    }

    void Print()
    {
        cout << buf << endl;
    }

    // 깊은 복사
    // String 객체를 참조하는 매개변수를 받아 호출 객체의 메모리 재할당 후 복사
    const String& operator=(const String& arg)
    {
        delete [] buf;
        buf = new char[strlen(arg.buf) + 1];
        strcpy(buf, arg.buf);

        return *this;
    }

private:
    char* buf;
};

int main()
{
    const char* sz = "Hello!";
    String s("Hi~!");

    s.Print();

    // 암시적 호출
    // s = String(sz);
    s = sz;

    s.Print();

    return 0;
}