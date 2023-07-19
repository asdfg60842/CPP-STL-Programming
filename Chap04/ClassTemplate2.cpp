//
// Created by LJW on 2023/06/25.
//
// 클래스 템플릿의 매개변수도 함수의 매개변수처럼 디폴트 매개변수 값을 지정할 수 있다.
#include <iostream>
#include <string>
using namespace std;

// int, 100 디폴트 매개변수 값 지정
template<typename T = int, int capT = 100>
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
    // 디폴트 매개변수 값 int, 100 사용
    Array<> iarr;
    iarr.Add(10);
    iarr.Add(20);
    iarr.Add(30);

    for (int i = 0; i < iarr.GetSize(); ++i)
        cout << iarr[i] << " ";
    cout << endl;

    // 디폴트 매개변수 값 100 사용
    Array<double> darr;
    darr.Add(10.12);
    darr.Add(20.12);
    darr.Add(30.12);

    for (int i = 0; i < darr.GetSize(); ++i)
        cout << darr[i] << " ";
    cout << endl;

    // 디폴트 매개변수 값을 사용하지 않음
    Array<string, 10> sarr;
    sarr.Add("abc");
    sarr.Add("ABC");
    sarr.Add("Hello!");

    for (int i = 0; i < sarr.GetSize(); ++i)
        cout << sarr[i] << " ";
    cout << endl;

    return 0;
}