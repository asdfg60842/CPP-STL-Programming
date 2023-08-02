//
// Created by LJW on 8/2/23.
//
// 조건자 less<T> 처럼 구현한 사용자 Less<T> 조건자이다.
// 이항 조건자이므로 어댑터 적용이 가능하게 binary_function 기본 클래스를 상속받아 구현한 예제이다.
#include <iostream>
#include <functional>
using namespace std;

template<typename T>
struct Less: public binary_function<T, T, T>
{
    // 조건자는 상태가 변경될 수 없으므로 bool 형식을 반환하는 operator() 연산자 함수를 꼭 const 함수로 구현해야 한다.
    bool operator()(const T& left, const T& right)
    {
        return left < right;
    }
};

int main()
{
    Less<int> oLess;

    // 1. oLess 객체로 10, 20을 비교 true. 암묵적 호출
    cout << oLess(10, 20) << endl;
    // 2. oLess 객체로 10, 20을 비교 true. 명시적 호출
    cout << oLess.operator()(10, 20) << endl;
    // 3. 임시 객체로 10, 20을 비교 true. 암묵적 호출(일반적인 사용)
    cout << Less<int>()(10, 20) << endl;
    // 4. 임시 객체로 10, 20을 비교 true. 명시적 호출
    cout << Less<int>().operator()(10, 20) << endl;

    return 0;
}