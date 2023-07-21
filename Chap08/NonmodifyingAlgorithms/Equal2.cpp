//
// Created by LJW on 2023/07/21.
//
// 원소를 수정하지 않는 알고리즘(Nonmodifying Algorithms)
// equal(b, e, b2, f) : [b, e) 와 [b2, b2 + (e - b))의 모든 원소가 f(*p, *q)가 참인가?
// f는 이항 조건자로 각 순차열의 반복자 p와 q에 대해 f(*p, *q)가 모두 참이면 equal() 알고리즘은 참을 반환한다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Pred(int left, int right)
{
    return abs(right - left) < 5;
}

int main()
{
    vector<int> v1;

    v1.push_back(10);
    v1.push_back(21);
    v1.push_back(30);

    vector<int> v2;

    v2.push_back(10);
    v2.push_back(20);
    v2.push_back(33);

    cout << "v1 : ";
    for (vector<int>::size_type i = 0; i < v1.size(); ++i)
        cout << v1[i] << " ";
    cout << endl;

    cout << "v2 : ";
    for (vector<int>::size_type i = 0; i < v2.size(); ++i)
        cout << v2[i] << " ";
    cout << endl;

    // 구간 [v1.begin(), v1.end()) 와 구간 [v2.begin(), v2.begin() + 3) 을 비교
    if (equal(v1.begin(), v1.end(), v2.begin(), Pred))
        cout << "두 순차열은 같다." << endl;

    return 0;
}