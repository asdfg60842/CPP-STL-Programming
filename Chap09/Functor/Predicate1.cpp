// 함수 객체(function object)는 함수자(functor)라는 애칭으로 더 많이 사용되며, operator() 연산자를 오버로딩한 클래스 객체이다.
// STL의 함수 객체는 다음 두가지로 나뉜다.
// @ 일반 함수 객체 : 특정 기능으 수행하는 함수 객체
// - 산술 연산 함수 객체 : 산술 연산 기능을 수행(plus, minus, multiplies, divides, modulus, negate)
// - 비교 연산 함수 객체 조건자 : 비교 조건자(equal_to, not_equal_to, less, greater, greater_equal, less_equal)
// - 논리 연산 함수 객체 조건자 : 논리 조건자(logical_and, logical_or, logical_not)
// @ 함수 어댑터(function adaptor) : 함수류(함수 객체, 함수, 함수 포인터)를 인자로 받아 다른 함수 객체로 변환
// - 바인더(binder) : 이항 함수 객체를 단항 함수 객체로 변환(bind1st, bind2nd)
// - 부정자(negator) : 함수 객체 조건자를 반대로 변환(not1, not2)
// - 함수 포인터 어댑터 : 함수 포인터를 STL이 요구하는 함수 객체로 변환(ptr_fun)
// - 멤버 함수 포인터 어댑터 : 멤버 함수 포인터를 STL이 요구하는 함수 객체로 변환(mem_fun, mem_fun_ref)
// 조건자는 bool 형식을 반환하는 함수류(함수 객체, 함수, 함수 포인터)이다.
// 많은 알고리즘에 이런 함수류를 사용자 조건으로 지정하여 알고리즘이 유연하게 동작하도록 한다.
#include <iostream>
using namespace std;

// 함수 객체 조건자
struct LessFunctor
{
    bool operator()(int left, int right) const
    {
        return left < right;
    }
};

// 함수 조건자
bool LessFun(int left, int right)
{
    return left < right;
}

int main()
{
    // 함수 포인터 조건자
    bool (*LessPtr)(int, int) = LessFun;
    LessFunctor lessFunctor;

    // 함수 객체로 10과 20을 비교
    cout << lessFunctor(10, 20) << endl;
    // 함수로 10과 20을 비교
    cout << LessFun(10, 20) << endl;
    // 함수 포인터로 10과 20을 비교
    cout << LessPtr(10, 20) << endl;

    return 0;
}
