//
// Created by LJW on 8/2/23.
//
// 다음은 실제 ptr_fun() 어댑터가 어떻게 구현되어 있는지 사용자 버전 Ptr_fun()를 구현한 예제이다.
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Ptr_fun_class 는 일반 함수(Pred)의 주소를 저장하는 함수 포인터 멤버 변수를 가진다.
// 이 클래스는 unary_function 클래스를 상속받아 이 클래스의 객체는 어댑터 적용이 가능해진다.
///////////////////////////////// Server /////////////////////////////////
// 클래스 : ptr_fun()의 함수 객체 클랫. 일반 함수의 함수 객체 클래스
// 여러가지 기능을 제공할 수 있다. argument_type, result_type 등...
template<typename RType, typename AType>
class Ptr_fun_class:public unary_function<AType, RType>
{
    RType (*pf)(AType);
public:
    Ptr_fun_class(RType (*_pf)(AType))
        : pf(_pf)
    {

    }

    RType operator()(AType n) const
    {
        return pf(n);
    }
};

// Ptr_fun() 함수로 일반 함수의 주소(Pred)를 인자로 받아 Ptr_fun_class 함수 객체를 생성하고 반환한다.
template<typename RType, typename AType>
Ptr_fun_class<RType, AType> Ptr_fun(RType (*pf)(AType))
{
    return Ptr_fun_class<RType, AType>(pf);
}

///////////////////////////////// Client /////////////////////////////////
bool Pred(int n)
{
    return 30 <= n && n <= 40;
}

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    cout << "v : ";
    for (vector<int>::size_type i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    cout << "30이상 40이하의 원소 개수 : " << count_if(v.begin(), v.end(), Pred) << endl;
    cout << "30이상 40이하가 아닌 원소 개수 : " << count_if(v.begin(), v.end(), not1(Ptr_fun(Pred))) << endl;

    return 0;
}