//
// Created by LJW on 2023/07/27.
//
// 정렬된 범위 알고리즘(sorted range algorithms)
// includes(b, e, b2, e2) : 구간 [b2, e2)의 모든 원소가 구간 [b, e)에도 있는가?
// includes(b, e, b2, e2, f) : 구간 [b2, e2)의 모든 원소가 구간 [b, e)에도 있는가? f를 비교에 사용한다.
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
    v2.push_back(40);

    vector<int> v3;

    v3.push_back(10);
    v3.push_back(20);
    v3.push_back(60);

    if (includes(v1.begin(), v1.end(), v2.begin(), v2.end()))
        cout << "v2는 v1의 부분 집합" << endl;
    else
        cout << "v2는 v1의 부분 집합 아님" << endl;

    if (includes(v1.begin(), v1.end(), v3.begin(), v3.end()))
        cout << "v3는 v1의 부분 집합" << endl;
    else
        cout << "v3는 v1의 부분 집합 아님" << endl;

    // 정렬 기준을 greater<int>로 설정
    sort(v1.begin(), v1.end(), greater<int>());
    sort(v2.begin(), v2.end(), greater<int>());

    if (includes(v1.begin(), v1.end(), v2.begin(), v2.end(), greater<int>()))
        cout << "greater 정렬 순차열 : v2는 v1의 부분 집합" << endl;

    return 0;
}