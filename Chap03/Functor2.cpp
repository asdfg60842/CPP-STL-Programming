//
// Created by LJW on 2023/06/25.
//
#include <iostream>
// for_each() 알고리즘을 이용하기 위한 헤더
#include <algorithm>
using namespace std;

struct Functor1
{
    // 공백을 이용해 원소 출력
    void operator()(int n)
    {
        cout << n << " ";
    }
};

struct Functor2
{
    // 각 원소를 제곱해 출력
    void operator()(int n)
    {
        cout << n * n << " ";
    }
};

struct Functor3
{
    // 문자열과 endl을 이용해 원소 출력
    void operator()(int n)
    {
        cout << "정수 : " << n << endl;
    }
};

int main()
{
    int arr[5] = { 10, 20, 30, 40, 50 };

    // for_each() 알고리즘의 세번째 인자에 함수가 아닌 함수 객체를 전달했는데, 이는 템플릿을 사용해 사용자 정의 타입까지 받을 수 있다.
    // 임시 함수 객체(Functor1()) 를 만들어 함수로 전달
    for_each(arr, arr + 5, Functor1());
    cout << endl << endl;

    // 임시 함수 객체(Functor2()) 를 만들어 함수로 전달
    for_each(arr, arr + 5, Functor2());
    cout << endl << endl;

    // 임시 함수 객체(Functor3()) 를 만들어 함수로 전달
    for_each(arr, arr + 5, Functor3());

    return 0;
}