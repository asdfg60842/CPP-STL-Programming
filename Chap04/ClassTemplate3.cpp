//
// Created by LJW on 2023/06/25.
//
// 클래스 템플릿 특수화
// 함수 템플릿 특수화 처럼 일반 버전의 템플릿을 사용할 수 없는 경우나 성능 개선, 특수한 기능 등을 위해 특수화 버전을 별도로 제공하고자 할 때 사용한다.
#include <iostream>
#include <string>
using namespace std;

template<typename T>
class ObjectInfo
{
    T data;
public:
    ObjectInfo(const T& d)
        : data(d)
    {

    }

    void Print()
    {
        cout << "타입 : " << typeid(data).name() << endl;
        cout << "크기 : " << sizeof(data) << endl;
        cout << "값 : " << data << endl;
        cout << endl;
    }
};

// T를 string으로 특수화(클래스 템플릿 특수화)
template<>
class ObjectInfo<string>
{
    string data;
public:
    ObjectInfo(const string& d)
        : data(d)
    {

    }

    void Print()
    {
        // 타입 정보 수정
        // cout << "타입 : " << typeid(data).name() << endl;
        cout << "타입 : " << "string" << endl;

        // 길이 정보 수정
        // cout << "크기 : " << sizeof(data) << endl;
        cout << "문자열 길이 : " << data.size() << endl;

        cout << "값 : " << data << endl;
        cout << endl;
    }
};

int main()
{
    ObjectInfo<int> d1(10);
    d1.Print();

    ObjectInfo<double> d2(5.5);
    d2.Print();

    ObjectInfo<string> d3("Hello!");
    d3.Print();

    return 0;
}