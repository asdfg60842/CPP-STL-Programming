//
// Created by LJW on 8/9/23.
//
// Q3. bind1st()와 bind2nd()의 차이점을 간단한 예제 코드로 비교하세요.
#include <iostream>
#include <functional>
using namespace std;

int main()
{
    binder1st<less<int>> binder1 = bind1st(less<int>(), 10);
    binder2nd<less<int>> binder2 = bind2nd(less<int>(), 10);

    cout << "bind1st() " << "5 > 10 : " << binder1(5) << ", ";
    cout << "bind2nd() " << "10 < 5 : " << binder2(5) << endl;

    cout << "bind1st() " << "10 > 10 : " << binder1(10) <<", ";
    cout << "bind2nd() " << "10 < 10 : " << binder2(10) << endl;

    cout << "bind1st() " << "20 > 10 : " << binder1(20) << ", ";
    cout << "bind2nd() " << "20 < 10 : " << binder2(20) << endl;

    return 0;
}