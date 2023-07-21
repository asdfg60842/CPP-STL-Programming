//
// Created by LJW on 2023/07/21.
//
// for_each() 알고리즘의 사용자 함수류를 함수자(함수 객체)로 구현하면 객체는 상태 변수를 가질 수 있으므로 함수를 사용하는 것보다 더 다양한 작업을 순차열에 적용할 수 있다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Accumulation
{
    int total;

public:
    explicit Accumulation(int init = 0)
        : total(init)
    {

    }

    void operator()(int& r)
    {
        total += r;
        r = total;
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

    // Accumulation(0) 객체는 total 상태 변수를 사용하여 이전 원소의 누적 값을 저장하고 현재 원소(*p)에 이전 원소(*(p - 1))와 누적을 적용한다.
    for_each(v.begin(), v.end(), Accumulation(0));

    cout << "v : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}