//
// Created by LJW on 2023/07/21.
//
// 원소를 수정하지 않는 알고리즘(Nonmodifying Algorithms)
// pair(p, q) = mismatch(b, e, b2, f) : (p, q)는 구간 [b, e)와 [b2, b2 + (e - b))에서 !f(*p, *q)가 참인 첫 원소를 가리키는 반복자의 쌍
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
    vector<int> v1;

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    vector<int> v2;

    v2.push_back(11);
    v2.push_back(25);
    v2.push_back(33);
    v2.push_back(46);
    v2.push_back(50);

    pair<vector<int>::iterator , vector<int>::iterator> iter_pair;
    iter_pair = mismatch(v1.begin(), v1.end(), v2.begin(), Pred);

    cout << "v1 : " << *iter_pair.first << ", " << "v2 : " << *iter_pair.second << endl;

    return 0;
}