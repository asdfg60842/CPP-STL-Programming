//
// Created by LJW on 2023/07/31.
//
// 수치 알고리즘(numeric algorithms)
// x2 = accumulate(b, e, x, f) : x2는 x를 초깃값으로 시작한 구간 [b, e) 순차열 원소의 누적이다. f를 누적에 사용한다.
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

template<typename T>
struct Plus
{
    T operator()(const T& left, const T& right)
    {
        return left + right;
    }
};

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout << "v : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    // 사용자 함수자 합 연산
    cout << accumulate(v.begin(), v.end(), 0, Plus<int>()) << endl;
    // plus 합 연산
    cout << accumulate(v.begin(), v.end(), 0, plus<int>()) << endl;
    // multiplies 곱 연산
    cout << accumulate(v.begin(), v.end(), 1, multiplies<int>()) << endl;

    return 0;
}