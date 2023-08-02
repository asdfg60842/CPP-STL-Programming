//
// Created by LJW on 8/2/23.
//
// bind1st 와 bind2nd는 첫 번째 항을 고정할 것인지 두 번째 항을 고정할 것인지만 다를 뿐 사용 방법은 같다.
#include <iostream>
#include <functional>
using namespace std;

int main()
{
    // less의 첫 인자를 10으로 고정한 단항 조건자 binder 생성
    // bind2nd()는 이항 함수자를 단항 함수자로 변환하는 함수이며 실제 단항 함수자 클래스는 binder2nd이다.
    binder2nd<less<int>> binder = bind2nd(less<int>(), 10);

    // binder는 첫 번째 인자를 10으로 고정한 less
    cout << binder(5) << " : " << less<int>()(5, 10) << endl;
    cout << binder(10) << " : " << less<int>()(10, 10) << endl;
    cout << binder(20) << " : " << less<int>()(20, 10) << endl;

    cout << "=====위와 같음=====" << endl;

    // 임시 객체 사용
    cout << bind2nd(less<int>(), 10)(5) << " : " << less<int>()(5, 10) << endl;
    cout << bind2nd(less<int>(), 10)(10) << " : " << less<int>()(10, 10) << endl;
    cout << bind2nd(less<int>(), 10)(20) << " : " << less<int>()(20, 10) << endl;

    return 0;
}