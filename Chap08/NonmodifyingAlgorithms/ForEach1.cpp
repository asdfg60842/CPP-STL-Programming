//
// Created by LJW on 2023/07/21.
//
// 원소를 수정하지 않는 알고리즘(Nonmodifying Algorithms)
// f = for_each(b, e, f) : 구간 [b, e)에 f(*p)의 동작을 적용한다. f를 다시 되돌려준다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Print(int n)
{
    cout << n << " ";
}

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    for_each(v.begin(), v.begin() + 2, Print);
    cout << endl;

    for_each(v.begin(), v.begin() + 4, Print);
    cout << endl;
    // [v.begin(), v.end()) 구간의 원소 출력
    for_each(v.begin(), v.end(), Print);

    return 0;
}