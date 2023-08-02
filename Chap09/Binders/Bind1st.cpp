// 바인더
// 바인더(binder)는 이항 함수자를 단항 함수자로 변환한다.
// bind1st : 이항 함수자의 첫번째 인자를 고정하여 단항 함수자로 변환
// bind2nd : 이항 함수자의 두번째 인자를 고정하여 단항 함수자로 변환
#include <iostream>
#include <functional>
using namespace std;

int main()
{
    // less의 첫 인자를 10으로 고정한 단항 조건자 binder 생성
    binder1st<less<int>> binder = bind1st(less<int>(), 10);

    // binder는 첫 번째 인자를 10으로 고정한 less
    cout << binder(5) << " : " << less<int>()(10, 5) << endl;
    cout << binder(10) << " : " << less<int>()(10, 10) << endl;
    cout << binder(20) << " : " << less<int>()(10, 20) << endl;

    cout << "=====위와 같음=====" << endl;

    // 임시 객체 사용
    cout << bind1st(less<int>(), 10)(5) << " : " << less<int>()(10, 5) << endl;
    cout << bind1st(less<int>(), 10)(10) << " : " << less<int>()(10, 10) << endl;
    cout << bind1st(less<int>(), 10)(20) << " : " << less<int>()(10, 20) << endl;

    return 0;
}
