//
// Created by LJW on 2023/06/25.
//
// 클라이언트 코드와 서버 코드
// 서버 코드 : 어떤 기능이나 서비스를 제공하는 코드
// 클라이언트 코드 : 그 기능을 제공받는 코드
// call : 클라이언트가 서버를 호출함.
// callback : 서버가 클라이언트를 호출함.
// callback 메커니즘을 이용하면 알고리즘 정책을 클라이언트에서 유연하게 바꿀 수 있게 서버를 더욱 추상화 할 수 있다.
// callback 메커니즘을 구현하려면 클라이언트가 서버를 호출할 때 서버에 클라이언트의 정보를 제공해야 한다.
// 대표적인 방법으로는 함수 포인터 매개변수를 이용해 콜백 함수의 주소를 전달하는 방법이다(그 외 함수 객체, 대리자, 전략 패턴 등을 사용한다).
#include <iostream>
using namespace std;

//////// 서버 ////////
// 배열의 모든 원소에 반복적인 작업을 수행하게 추상화 됨. (구체적인 작업은 없음)
void For_each(int *begin, int *end, void (*pf)(int))
{
    while (begin != end)
    {
        // 클라이언트 함수 호출(콜백)
        pf(*begin++);
    }
}

//////// 클라이언트 ////////
// 공백을 이용해 원소 출력
void Print1(int n)
{
    cout << n << ' ';
}

// 각 원소를 제곱해 출력
void Print2(int n)
{
    cout << n * n << " ";
}

// 문자열과 endl을 이용해 원소를 출력
void Print3(int n)
{
    cout << "정수 : " << n << endl;
}

int main()
{
    int arr[5] = { 10, 20, 30, 40, 50 };

    // STL 의 for_each 알고리즘을 사용하면 다음과 같음
    // for_each(arr, arr + 5, Print1);

    // Print1() 콜백 함수의 주소를 전달
    For_each(arr, arr + 5, Print1);
    cout << endl << endl;

    // Print2() 콜백 함수의 주소를 전달
    For_each(arr, arr + 5, Print2);
    cout << endl << endl;

    // Print3() 콜백 함수의 주소를 전달
    For_each(arr, arr + 5, Print3);

    return 0;
}