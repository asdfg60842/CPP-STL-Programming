//
// Created by LJW on 2023/06/26.
//
// 순차열을 정렬하는 sort 알고리즘은 임의 접근 반복자를 요구하므로 vector 와 deque는 수행이 가능하지만, 그 외의 다른 컨테이너는 불가능하다.
// 연관 컨테이너는 컨테이너만의 정렬 기준을 가지고 있기 때문에 sort 알고리즘 적용 자체가 말이 안된다.
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    list<int> lt;

    lt.push_back(10);
    lt.push_back(20);
    lt.push_back(30);
    lt.push_back(40);
    lt.push_back(50);

    // 정렬 가능(vector 는 임의 접근 반복자)
    sort(v.begin(), v.end());

    // 정렬 불가능(list 는 양방향 반복자)
    // sort(lt.begin(), lt.end());

    return 0;
}