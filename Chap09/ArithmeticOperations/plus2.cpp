//
// Created by LJW on 8/2/23.
//
// plus<T> 함수자처럼 구현한 사용자 Plus<T> 함수자이다.
// 이항 함수자이므로 어댑터 적용이 가능하게 binary_function 기본 클래스를 상속받아 구현한 예제이다.
#include <iostream>
#include <functional>
using namespace std;

template<typename T>
struct Plus: public binary_function<T, T, T>
{
    T operator()(const T& left, const T& right) const
    {
        return left + right;
    }
};

int main()
{
    Plus<int> oPlus;

    // 1. oPlus 객체로 10, 20 더하기. 암묵적 호출
    cout << oPlus(10, 20) << endl;
    // 2. oPlus 객체로 10, 20 더하기. 명시적 호출
    cout << oPlus.operator()(10, 20) << endl;
    // 3. 임시 객체로 10, 20 더하기. 암묵적 호출(일반적인 사용)
    cout << Plus<int>()(10, 20) << endl;
    // 4. 임시 객체로 10, 20 더하기. 명시적 호출
    cout << Plus<int>().operator()(10, 20) << endl;

    return 0;
}