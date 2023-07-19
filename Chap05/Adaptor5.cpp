//
// Created by LJW on 2023/06/26.
//
// 대표적인 함수 어댑터가 부정자 not2 이다.
// not2는 조건자 함수 객체를 NOT으로 변환한다.
// 조건자 함수 객체를 반대 의미의 조건자 함수 객체로 변경하는 어댑터이다.
#include <iostream>
#include <functional>
using namespace std;

int main()
{
    // 임시 less 객체로 비교
    cout << less<int>()(10, 20) << endl;
    cout << less<int>()(20, 20) << endl;
    cout << less<int>()(20, 10) << endl;
    cout << "========================" << endl;

    // 임시 객체 less에 not2 어댑터 적용
    cout << not2(less<int>())(10, 20) << endl;
    cout << not2(less<int>())(20, 20) << endl;
    cout << not2(less<int>())(20, 10) << endl;
    cout << endl;

    // less 객체 l 로 비교
    less<int> l;
    cout << l(10, 20) << endl;
    cout << l(20, 20) << endl;
    cout << l(20, 10) << endl;
    cout << "========================" << endl;

    // less 객체 l에 not2 어댑터 적용
    cout << not2(l)(10, 20) << endl;
    cout << not2(l)(20, 20) << endl;
    cout << not2(l)(20, 10) << endl;

    return 0;
}