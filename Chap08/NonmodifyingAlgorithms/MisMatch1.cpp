//
// Created by LJW on 2023/07/21.
//
// 원소를 수정하지 않는 알고리즘(Nonmodifying Algorithms)
// pair(p, q) = mismatch(b, e, b2) : (p, q)는 구간 [b, e)와 [b2, b2 + (e - b))에서 !(*p == *q)인 첫 원소를 가리키는 반복자의 쌍
// mismatch() 알고리즘은 구간 [b, e) 와 구간 [b2, b2 + (e - b)) 의 모든 원소를 하나씩 비교하여 원소 값이 서로 다른 첫 원소의 반복자 쌍을 반환한다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v1;

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    vector<int> v2;

    v2.push_back(10);
    v2.push_back(20);
    v2.push_back(30);
    v2.push_back(80);
    v2.push_back(90);

    // mismatch() 알고리즘은 서로 다른 원소가 발견되는 첫 원소의 반복자 쌍을 반환하므로 pair 객체는 first와 second 모두 vector의 반복자로 구성된다.
    pair<vector<int>::iterator, vector<int>::iterator> iter_pair;
    iter_pair = mismatch(v1.begin(), v1.end(), v2.begin());

    cout << "v1 : " << *iter_pair.first << ", " << "v2 : " << *iter_pair.second << endl;

    return 0;
}