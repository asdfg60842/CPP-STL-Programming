//
// Created by LJW on 2023/07/23.
//
// 변경 알고리즘(mutating algorithms)
// p = partition(b, e, f) : 구간 [b, e)의 순차열 중 f(*p)가 참인 원소는 [b, p)의 순차열에 거짓인 원소는 [p, e)의 순차열로 분류한다.
// partition() 알고리즘은 퀵소트에서 pivot 값을 기준으로 큰 값과 작은 값을 분류하듯 f(*p)값을 기준으로 참인 원소와 거짓인 원소를 분류한다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Pred(int n)
{
    return n < 40;
}

int main()
{
    vector<int> v;

    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(10);
    v.push_back(20);
    v.push_back(60);

    cout << "v : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    vector<int>::iterator iter_sep;
    // 구간 [v.begin(), v.end())의 순차열을 Pred(*p)가 참인 원소는 [v.begin(), iter_sep) 순차열에 거짓인 원소는 [iter_sep, v.end())의 순차열로 분류한다.
    iter_sep = partition(v.begin(), v.end(), Pred);

    cout << "40미만의 순차열 : ";
    for (vector<int>::iterator iter = v.begin(); iter != iter_sep; ++iter)
        cout << *iter << " ";
    cout << endl;

    cout << "40이상의 순차열 : ";
    for (vector<int>::iterator iter = iter_sep; iter != v.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    return 0;
}