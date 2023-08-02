//
// Created by LJW on 8/2/23.
//
#include <iostream>
#include <functional>
using namespace std;

int main()
{
    binder2nd<less<int>> binder = bind2nd(less<int>(),  10);
    unary_negate<binder2nd<less<int>>> negate = not1(binder);

    // negate(5)는 5 < 10의 반대인 5 >= 10이 되어 false이다.
    cout << negate(5) << " : " << not1(binder)(5) << " : " << not1(bind2nd(less<int>(), 10))(5) << endl;
    // negate(10)는 10 < 10의 반대인 10 >= 10이 되어  true이다.
    cout << negate(10) << " : " << not1(binder)(10) << " : " << not1(bind2nd(less<int>(), 10))(10) << endl;
    // negate(20)는 20 < 10의 반대인 20 >= 10이 되어 true이다.
    cout << negate(20) << " : " << not1(binder)(20) << " : " << not1(bind2nd(less<int>(), 10))(20) << endl;

    return 0;
}