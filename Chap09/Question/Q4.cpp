//
// Created by LJW on 8/9/23.
//
// Q4. not1 과 not2의 차이점을 간단한 예제 코드로 비교하세요.
#include <iostream>
#include <functional>
using namespace std;

struct Unary:public unary_function<int, bool>
{
    bool operator()(int arg) const
    {
        return arg < 50;
    }
};

struct Binary:public binary_function<int, int, bool>
{
    bool operator()(int first, int second) const
    {
        return first < second;
    }
};
int main()
{
    binder2nd<less<int>> binder = bind2nd(less<int>(), 50);
    unary_negate<binder2nd<less<int>>> negate1 = not1(binder);

    binary_negate<less<int>> negate2 = not2(less<int>());

    cout << Unary()(10) << endl;
    cout << negate1(10) << endl;

    cout << Binary()(10, 50) << endl;
    cout << negate2(10, 50) << endl;

    return 0;
}