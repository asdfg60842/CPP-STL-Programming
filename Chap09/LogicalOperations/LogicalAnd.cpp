// 논리 연산 조건자
// logical_and<T> : 이항 조건자로 && 연산
// logical_or<T> : 이항 조건자로 || 연산
// logical_not<T> : 단항 조건자로 ! 연산
// 논리 조건자는 일반적으로 T에 bool 형식을 지정한다. 일반적으로 피연산자의 논리 조건을 비교하기 때문이다.
#include <iostream>
#include <functional>
using namespace std;

template<typename T>
struct Logical_and: public binary_function<T, T, bool>
{
    bool operator()(const T& left, const T& right)
    {
        return left && right;
    }
};

int main()
{
    int n = 30;
    logical_and<bool> oAnd;

    // 10 < n을 표현하려 greater<int>()(n, 10) 사용
    // n < 50을 표현하려 less<int>()(n, 50) 사용
    // 1. oAnd 객체로 10 < n < 50인가? true. 암묵적 호출
    cout << oAnd(greater<int>()(n, 10), less<int>()(n, 50)) << endl;
    // 2. oAnd 객체로 10 < n < 50인가? true. 명시적 호출
    cout << oAnd.operator()(greater<int>()(n, 10), less<int>()(n, 50)) << endl;
    // 3. 임시 객체로 10 < n < 50인가? true. 암묵적 호출(일반적인 사용)
    cout << logical_and<bool>()(greater<int>()(n, 10), less<int>()(n, 50)) << endl;
    // 4. 임시 객체로 10 < n < 50인가? true. 명시적 호출
    cout << logical_and<bool>().operator()(greater<int>()(n, 10), less<int>()(n, 50)) << endl;

    return 0;
}
