// 산술 연산 함수 객체
// plus<T> : 이항 연산 함수자로 + 연산
// minus<T> : 이항 연산 함수자로 - 연산
// multiplies<T> : 이항 연산 함수자로 * 연산
// divides<T> : 이항 연산 함수자로 / 연산
// modulus<T> : 이항 연산 함수자로 % 연산
// negate<T> : 단항 연산 함수자로 - 연산
#include <iostream>
#include <functional>
using namespace std;

int main()
{
    plus<int> oPlus;

    // 1. oPlus 객체로 10, 20 더하기. 암묵적 호출
    cout << oPlus(10, 20) << endl;
    // 2. oPlus 객체로 10, 20 더하기. 명시적 호출
    cout << oPlus.operator()(10, 20) << endl;
    // 3. 임시 객체로 10, 20 더하기. 암묵적 호출(일반적인 사용)
    cout << plus<int>()(10, 20) << endl;
    // 4. 임시 객체로 10, 20 더하기. 명시적 호출
    cout << plus<int>().operator()(10, 20) << endl;

    return 0;
}
