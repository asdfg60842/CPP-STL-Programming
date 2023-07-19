//
// Created by LJW on 2023/07/19.
//
// 원소를 수정하지 않는 알고리즘(Nonmodifying Algorithms)
// n = count_if(b, e, f) : n은 구간 [b, e)의 원소 중 f(*p)가 참인 원소의 개수
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 단항 조건자
bool Pred(int n)
{
    return 25 < n;
}

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    // 구간 [v.begin(), v.end())의 원소가 가리키는 반복자 p에 대해 단항 조건자 Pred(*p)가 참인 모든 원소의 개수를 반환한다.
    int n = count_if(v.begin(), v.end(), Pred);
    cout << "25보다 큰 원소의 개수 : " << n << endl;

    return 0;
}