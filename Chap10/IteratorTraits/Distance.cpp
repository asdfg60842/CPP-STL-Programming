//
// Created by LJW on 8/5/23.
//
// n = distance(p1, p2) : n은 p2 - p1 이다.
// 대부분 distance() 함수의 반환 형식은 unsigned int 혹은 int 이지만 반복자마다 다르다.
// iterator_traits<vector<int>::iterator>::difference_type n = distance(v.begin(), v.end());
#include <iostream>
#include <vector>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    list<int> lt;

    lt.push_back(10);
    lt.push_back(20);
    lt.push_back(30);

    // v.end() - v.begin()
    cout << "[v.begin(), v.end()) 의 원소 개수 : " << distance(v.begin(), v.end()) << endl;
    // list는 양방향 반복자를 제공하므로 lt.end() - lt.begin()은 불가능하다.
    // lt.end() - lt.begin()
    cout << "[lt.begin(), lt.end()) 의 원소 개수 : " << distance(lt.begin(), lt.end()) << endl;

    return 0;
}