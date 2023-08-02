// 비교 연산 조건자
// equal_to<T> : 이항 조건자로 == 연산
// not_equal_to<T> : 이항 조건자로 != 연산
// less<T> : 이항 조건자로 < 연산
// less_equal<T> : 이항 조건자로 <= 연산
// greater<T> : 이항 조건자로 > 연산
// greater_equal<T> : 이항 조건자로 >= 연산
// 조건자는 조건을 판단해야 하는 대부분의 알고리즘에 사용된다. 특정 정렬 기준으로 정렬되어야 하는 연관 컨테이너 set, map, multiset, multimap 에도 사용된다.
// STL 구성 요소의 기본 조건자는 less<T> 이다.
#include <iostream>
#include <functional>
using namespace std;

int main()
{
    less<int> oLess;

    // 1. oLess 객체로 10, 20을 비교 true. 암묵적 호출
    cout << oLess(10, 20) << endl;
    // 2. oLess 객체로 10, 20을 비교 true. 명시적 호출
    cout << oLess.operator()(10, 20) << endl;
    // 3. 임시 객체로 10, 20을 비교 true. 암묵적 호출(일반적인 사용)
    cout << less<int>()(10, 20) << endl;
    // 4. 임시 객체로 10, 20을 비교 true. 명시적 호출
    cout << less<int>().operator()(10, 20) << endl;

    return 0;
}
