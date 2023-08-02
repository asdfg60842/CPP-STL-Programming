//
// Created by LJW on 8/2/23.
//
// ptr_fun에 부정자 어댑터 not1을 사용한 count_if() 알고리즘
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

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
    // Pred를 ptr_fun() 어댑터를 사용하여 함수 객체로 변환하고 not1() 어댑터를 적용한 count_if() 알고리즘이다.
    cout << "30이상 40이하가 아닌 원소 개수 : " << count_if(v.begin(), v.end(), not1(ptr_fun(Pred))) << endl;

    return 0;
}