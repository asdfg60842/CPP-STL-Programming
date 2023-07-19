//
// Created by LJW on 2023/06/25.
//
// STL 함수 객체
// less<> : < 연산자 함수 객체
// greater<> : > 연산자 함수 객체
#include <iostream>
// less<>, greater<> 헤더
#include <functional>
using namespace std;

struct Less
{
    bool operator()(int a, int b)
    {
        return a < b;
    }
};

struct Greater
{
    bool operator()(int a, int b)
    {
        return a > b;
    }
};

int main()
{
    // 사용자 Less, Greater 사용
    cout << Less()(10, 20) << endl;
    cout << Less()(20, 10) << endl;
    cout << Greater()(10, 20) << endl;
    cout << Greater()(20, 10) << endl;

    cout << endl;

    // STL의 less, greater 사용
    // 템플릿 클래스이므로 임시 객체를 less<int>(), greater<int>() 와 같이 생성함.
    cout << less<int>()(10, 20) << endl;
    cout << less<int>()(20, 10) << endl;
    cout << greater<int>()(10, 20) << endl;
    cout << greater<int>()(20, 10) << endl;

    return 0;
}