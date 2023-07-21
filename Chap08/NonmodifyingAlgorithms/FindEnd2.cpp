//
// Created by LJW on 2023/07/21.
//
// 원소를 수정하지 않는 알고리즘(Nonmodifying Algorithms)
// p = v.find_end(b, e, b2, e2, f) : p는 구간 [b, e)의 순차열 중 구간 [b2, e2)의 순차열과 일치하는 순차열 첫 원소의 반복자. 단, [b2, e2)와 일치하는 순차열이 여러 개라면 마지막 순차열의 첫 원소의 반복자. 이때 비교는 f를 사용
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Pred(int left, int right)
{
    return left <= right;
}

int main()
{
    vector<int> v1;

    v1.push_back(10);
    v1.push_back(15);
    v1.push_back(20);
    v1.push_back(40);
    v1.push_back(50);
    v1.push_back(60);
    v1.push_back(10);
    v1.push_back(11);
    v1.push_back(12);
    v1.push_back(80);

    vector<int> v2;

    v2.push_back(10);
    v2.push_back(15);
    v2.push_back(25);

    vector<int>::iterator iter;
    // 구간 [v1.begin(), v1.end())의 순차열과 구간 [v2.begin(), v2.end())의 순차열이 일치하는지 판단하고 일치하는 구간이 여러 개라면 마지막 순차열의 첫 원소 반복자를 반환한다.
    // 단, 비교는 Pred(*p, *q)를 사용한다. p는 v1의 순차열 반복자이며, q는 v2의 순차열 반복자이다.
    iter = find_end(v1.begin(), v1.end(), v2.begin(), v2.end(), Pred);

    if (iter != v1.end())
    {
        cout << "iter : " << *iter << endl;
        cout << "iter - 1 : " << *(iter - 1) << endl;
        cout << "iter + 1 : " << *(iter + 1) << endl;
    }

    return 0;
}