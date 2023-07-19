// 함수 포인터
// 함수의 이름은 함수가 시작하는 주소이며, 함수 포인터는 이 함수의 주소를 저장하는 포인터이다.
// 함수 포인터 선언과 사용
// 함수 포인터는 함수 시그니처(함수의 반환 타입과 매개변수 리스트) 와 같게 선언한다.
// int func(int a, int b) 인 함수의 함수 포인터는
// int (*pf)(int, int) 와 같이 선언한다.
// pf() 와 (*pf)() 는 같은 문장이다.
#include <iostream>
using namespace std;

void Print(int n)
{
    cout << "정수 : " << n << endl;
}

int main()
{
    // void Print(int n) 의 함수 포인터 선언
    void (*pf)(int);

    // 함수의 이름은 함수의 시작 주소이다.
    pf = Print;

    // 1. 함수 호출
    Print(10);
    // 2. 포인터를 이용한 함수 호출, 첫번째 방법
    pf(10);
    // 3. 포인터를 이용한 함수 호출, 두번째 방법
    (*pf)(10);

    cout << endl;
    cout << Print << endl;
    cout << pf << endl;
    cout << (*pf) << endl;

    return 0;
}
