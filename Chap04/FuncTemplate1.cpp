// 템플릿 함수
// 여러 함수를 만들어내는 함수의 틀
// 템플리 함수를 사용하면 컴파일러는 클라이언트(호출 측)의 함수 호출 인자 타입을 보고 템플릿 함수의 매개변수 타입을 결정하여 실제 함수인 템플릿 인스턴스 함수를 만들어 낸다.
#include <iostream>
using namespace std;

// 컴파일러가 생성한 세 함수 Print<int>(), Print<double>(), Print<const char*>() 은 template<typename T> Print<T>() 템플릿의 인스턴스이다.
template<typename T>
void Print(T a, T b)
{
    cout << a << ", " << b << endl;
}

int main()
{
    // 정수 출력
    // Print<int>(10, 20); 와 같다.
    Print(10, 20);

    // 실수 출력
    // Print<double>(0.123, 1.123); 와 같다.
    Print(0.123, 1.123);

    // 문자열 출력
    // Print<const char*>("ABC", "abcde"); 와 같다.
    Print("ABC", "abcde");

    return 0;
}
