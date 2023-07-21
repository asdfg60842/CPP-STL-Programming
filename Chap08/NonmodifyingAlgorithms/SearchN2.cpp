//
// Created by LJW on 2023/07/21.
//
// 원소를 수정하지 않는 알고리즘(Nonmodifying Algorithms)
// p = search_n(b, e, n, x, f) : p는 구간 [b, e)의 원소 중 f(*p, x)가 참인 값이 n개 연속한 첫 원소의 반복자
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Pred(int left, int right)
{
    return abs(right - left) <= 5;
}

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(32);
    v.push_back(28);
    v.push_back(33);
    v.push_back(40);
    v.push_back(50);

    vector<int>::iterator iter;
    // iter는 구간 [v.begin(), v.end()) 순차열에 30과의 차가 5이하(Pred(*p, 30))인 원소가 3번 이상 연속한 첫 원소의 반복자이다.
    iter = search_n(v.begin(), v.end(), 3, 30, Pred);

    if (iter != v.end())
    {
        cout << "iter : " << *iter << endl;
        cout << "iter - 1 : " << *(iter - 1) << endl;
        cout << "iter + 1 : " << *(iter + 1) << endl;
    }

    return 0;
}