//
// Created by LJW on 2023/07/19.
//
// 원소를 수정하지 않는 알고리즘(Nonmodifying Algorithms)
// p = adjacent_find(b, e, f) : p는 구간 [b, e)의 원소 중 f(*p, *(p + 1))이 참인 첫 원소를 가리키는 반복자
// f 는 이항 조건자이며, 현재 원소와 다음 원소를 가리키는 반복자 p와 p + 1에 대해 f(*p. *(p + 1))가 참인 첫 원소의 반복자를 반환한다.
// 조건자는 bool 형식을 반환하는 함수류(함수객체, 함수, 함수 포인터)이다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 이항 조건자
bool Pred(int a, int b)
{
    // 절댓값 함수 abs
    return abs(b - a) > 10;
}

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(50);
    v.push_back(90);

    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    vector<int>::iterator iter;
    // iter 는 두 인접 원소를 가리키는 반복자 p와 p + 1에 대해 이항 조건자 Pred(*p, *(p + 1))가 참인 첫 원소의 반복자이다.
    iter = adjacent_find(v.begin(), v.end(), Pred);

    // 찾는 원소가 없다면, v.end()를 반환한다.
    if (iter != v.end())
        cout << *iter << endl;

    for (; iter != v.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    return 0;
}