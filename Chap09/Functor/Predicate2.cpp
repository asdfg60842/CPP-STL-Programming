//
// Created by LJW on 8/2/23.
//
// STL에서 제공하는 조건자는 모두 함수 객체 조건자이다.
// bool 형식을 반환하는 함수 객체라고 해서 모두 함수 객체 조건자는 아니며, 조건자는 객체의 상태값을 변경할 수 없다는 요구조건을 만족해야 한다.
// 그래서 함수 객체 조건자의 operator() 연산자 오버로딩 함수는 모두 const 함수이다.
// 조건자를 사용하는 많은 알고리즘에서 조건자가 변경되지 않는다는 전제 하에 조건자를 내부적으로 복사하며, 이때 조건자의 상태값이 변경되면 예기치 못한 동작이 발생하기 떄문이다.
// 또한, 어댑터의 인자로 사용되는 함수 객체는 모두 다음 요구사항을 지켜야 한다.
// - 단항 함수 객체는 반드시 argument_type, result_type 이 정의되어 있어야 한다. (함수 인자 형식, 리턴 형식)
// - 이항 함수 객체는 반드시 first_argument_type, second_argument_type, result_type 이 정의되어 있어야 한다. (첫번째 인자 형식, 두번째 인자 형식, 리턴 형식)
// 어댑터는 함수 객체를 다른 함수 객체로 변환할때 위 정의 형식을 이용해 변환을 수행한다. 이러한 형식 정의를 쉽게 하려고 STL은 기본 클래스 unary_function과 binary_function을 제공한다.
// 위 형식을 직접 정의할 필요가 없고, 함수 객체는 위 기본 클래스를 상속받아 만들면 된다.
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

template<typename T>
struct Plus
{
    T operator()(const T& left, const T& right) const
    {
        return left + right;
    }
};

int main()
{
    vector<int> v1;

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);

    vector<int> v2;

    v2.push_back(1);
    v2.push_back(2);
    v2.push_back(3);

    vector<int> v3(3);

    // 이항 함수자(함수 객체)를 사용하는 transform() 알고리즘
    transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), Plus<int>());

    cout << "v1 : ";
    for (vector<int>::size_type i = 0; i < v1.size(); ++i)
        cout << v1[i] << " ";
    cout << endl;

    cout << "v2 : ";
    for (vector<int>::size_type i = 0; i < v2.size(); ++i)
        cout << v2[i] << " ";
    cout << endl;

    cout << "v3 : ";
    for (vector<int>::size_type i = 0; i < v3.size(); ++i)
        cout << v3[i] << " ";
    cout << endl;

    return 0;
}