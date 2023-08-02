//
// Created by LJW on 8/2/23.
//
// v1과 v2의 순차열을 더하지 않고 v1의 모든 원소에 100을 더하고자 한다.
// 사용자가 정의한 함수 객체 Plus<int>를 이용하려면 이항 함수 객체인 Plus<int>의 한 인자를 100으로 고정하고, 또한 다른 인자는 v1의 원소를 인자로 받게 한다.
// 한마디로 이항 함수 객체 Plus<int>를 단항 함수 객체로 변환하면 된다.
// 이때 어댑터 binder1st<int>를 사용할 수 있다.
// 단, binder1st<int> 는 C++ 11부터 사용 가능 C++ 17에서 삭제됨
#include <iostream>
#include <functional>
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

    vector<int> v3(3);

    // STL 조건자 plus<int> 사용
    transform(v1.begin(), v1.end(), v3.begin(), binder1st<plus<int>>(plus<int>(), 100));
    // 사용자 정의 조건자 Plus<int> 사용시 Error 발생
    // 어댑터 binder1st<int>가 이항 함수자를 단항 함수자로 변환하기 위해 first_argument_type, second_argument_type, result_type 형식 정의를 필요로 하기 때문이다.
    // transform(v1.begin(), v1.end(), v3.begin(), binder1st<Plus<int>>(Plus<int>(), 100));

    cout << "v1 : ";
    for (vector<int>::size_type i = 0; i < v1.size(); ++i)
        cout << v1[i] << " ";
    cout << endl;

    cout << "v3 : ";
    for (vector<int>::size_type i = 0; i < v3.size(); ++i)
        cout << v3[i] << " ";
    cout << endl;

    return 0;
}