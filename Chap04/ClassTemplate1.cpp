//
// Created by LJW on 2023/06/25.
//
// 클래스 템플릿
// 여러 클래스를 만들어내는 클래스의 틀
// 클래스 템플릿은 클래스를 정의하기 위한 메타 클래스 코드이며, 템플릿 매개변수 인자를 통해 클라이언트가 클래스에 사용될 타입을 결정할 수 있다.
#include <iostream>
#include <string>
using namespace std;

// 클래스 템플릿 Array 정의
// 컴파일러가 생성한 세 클래스 Array<int>, Array<double>, Array<string> 은 클래스 템플릿 Array의 인스턴스이다.
// 컴파일러는 클래스 템플릿을 이용해 실제 클래스를 생성한다.
template<typename T>
class Array
{
    T *buf;
    int size;
    int capacity;
public:
    explicit Array(int cap = 100)
        : buf(0), size(0), capacity(cap)
    {
        buf = new T[capacity];
    }

    ~Array()
    {
        delete [] buf;
    }

    void Add(T data)
    {
        buf[size++] = data;
    }

    T operator[](int idx) const
    {
        return buf[idx];
    }

    int GetSize() const
    {
        return size;
    }
};

int main()
{
    // 정수 (클라이언트가 T 타입 결정) Array 객체
    Array<int> iarr;
    iarr.Add(10);
    iarr.Add(20);
    iarr.Add(30);

    for (int i = 0; i < iarr.GetSize(); ++i)
        cout << iarr[i] << " ";
    cout << endl;

    // 실수 (클라이언트가 T 타입 결정) Array 객체
    Array<double> darr;
    darr.Add(10.12);
    darr.Add(20.12);
    darr.Add(30.12);

    for (int i = 0; i < darr.GetSize(); ++i)
        cout << darr[i] << " ";
    cout << endl;

    // 문자열 (클라이언트가 T 타입 결정) Array 객체
    Array<string> sarr;
    sarr.Add("abc");
    sarr.Add("ABC");
    sarr.Add("Hello!");

    for (int i = 0; i < sarr.GetSize(); ++i)
        cout << sarr[i] << " ";
    cout << endl;

    return 0;
}