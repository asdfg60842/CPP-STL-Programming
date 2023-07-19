//
// Created by LJW on 2023/06/25.
//
// 템플릿도 함수처럼 여러 매개변수를 가질 수 있다.
// 템플릿의 매개변수 타입은 템플릿 함수 정의의 연산이 가능한 객체. 즉, 인터페이스를 지원하는 객체라면 모두 올 수 있다.
// 단, 템플릿 매개변수 인자를 클라이언트 코드만으로 컴파일러가 추론할 수 없기 때문에 명시적으로 호출해 컴파일러가 함수 템플릿 인스턴스를 생성하게 해야 한다.
#include <iostream>
using namespace std;

template<typename T, int size>
void PrintArray(T* arr)
{
    for (int i = 0; i < size; ++i)
        cout << "[" << i << "] : " << arr[i] << endl;

    cout << endl;
}

int main()
{
    int arr1[5] = { 10, 20, 30, 40, 50 };
    // 명시적 호출
    PrintArray<int, 5>(arr1);

    double arr2[3] = { 1.1, 2.2, 3.3 };
    // 명시적 호출
    PrintArray<double, 3>(arr2);

    return 0;
}