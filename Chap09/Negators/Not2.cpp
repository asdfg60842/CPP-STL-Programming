// 부정자
// 부정자(negator)는 조건자를 반대의 조건자로 변환한다.
// not1 : 단항 조건자를 반대의 조건자로 변환
// not2 : 이항 조건자를 반대의 조건자로 변환
#include <iostream>
#include <functional>
using namespace std;

int main()
{
    less<int> oLess;
    // binary_negate<>는 not2() 부정자로 변환된 반대 이항 조건자 클래스이다.
    binary_negate<less<int>> negate = not2(less<int>());

    // less의 반대인 이항 조건자이므로 negate(5, 10)은 5 >= 연산으로 false이다.
    cout << negate(5, 10) << " : " << not2(oLess)(5, 10) << " : " << not2(less<int>())(5, 10) << endl;
    // negate(10, 10)은 10 >= 10 연산으로 true이다.
    cout << negate(10, 10) << " : " << not2(oLess)(10, 10) << " : " << not2(less<int>())(10, 10) << endl;
    // negate(20, 10)은 20 >= 10 연산으로 true이다.
    cout << negate(20, 10) << " : " << not2(oLess)(20, 10) << " : " << not2(less<int>())(20, 10) << endl;

    return 0;
}
