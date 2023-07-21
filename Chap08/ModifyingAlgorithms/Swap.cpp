//
// Created by LJW on 2023/07/21.
//
// 원소를 수정하는 알고리즘 (Modifying Algorithms)
// swap(a, b) : a와 b를 교환한다.
// iter_swap(p, q) : 반복자 p, q가 가리키는 *p와 *q의 원소를 교환한다.
// swap() 알고리즘은 a와 b를 교환한다. iter_swap() 알고리즘은 반복자가 가리키는 *p와 *q를 교환한다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a = 10, b = 20;

    vector<int> v;

    v.push_back(10);
    v.push_back(20);

    cout << "a = " << a << ", " << "b = " << b << endl;
    swap(a, b);
    cout << "a = " << a << ", " << "b = " << b << endl;

    vector<int>::iterator p = v.begin();
    vector<int>::iterator q = v.begin() + 1;

    cout << "v[0] = " << v[0] << ", " << "v[1] = " << v[1] << endl;
    iter_swap(p, q);
    cout << "v[0] = " << v[0] << ", " << "v[1] = " << v[1] << endl;

    return 0;
}