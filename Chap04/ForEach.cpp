//
// Created by LJW on 2023/06/25.
//
// STL for_each()
// For_each() 함수 템플릿 작성
// PrintInt() 와 PrintString() 을 함수 템플릿 하나로 작성
// 출력 함수 Print() 를 함수 객체로 변환하여 작성
#include <iostream>
#include <string>
using namespace std;

template<typename IterT, typename Func>
void For_each(IterT begin, IterT end, Func pf)
{
    while (begin != end)
    {
        pf(*begin++);
    }
}

// 함수 객체는 부가정보를 가질 수 있음.
template<typename T>
struct PrintFunctor
{
            string sep;

            explicit PrintFunctor(const string& s = " ")
                : sep(s)
            {

            }

            void operator()(T data) const
            {
                cout << data << sep;
            }
};

int main()
{
    int arr[5] = { 10, 20, 30, 40, 50 };
    For_each(arr, arr + 5, PrintFunctor<int>());
    cout << endl;

    string sarr[3] = { "abc", "ABC", "Hello!" };
    For_each(sarr, sarr + 3, PrintFunctor<string>("*\n"));
    cout << endl;

    return 0;
}