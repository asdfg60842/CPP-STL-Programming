//
// Created by LJW on 2023/06/26.
//
// 함수 객체(Function Object)
// 함수처럼 동작하는 객체로 operator() 연산자를 오버로딩한 객체이다. 컨테이너와 알고리즘 등에 클라이언트 정책을 반영하게 한다.
// 함수 객체를 사용하면 STL 구성 요소를 더욱 유연하게 사용할 수 있다.
// STL 알고리즘이 함수 객체, 함수, 함수 포인터 등의 함수류를 인자로 받아 알고리즘을 유연하게 동작시킨다.
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

    // sort(b, e, f) 는 sort(b, e)과 버전이 다른 알고리즘으로 f를 정렬 기준으로 정렬한다. sort(b, e)는 기본 정렬 기준인 less를 기준으로 정렬한다.
    // 오름차순 정렬
    // less(< 연산) 기준으로 정렬한다.
    sort(v.begin(), v.end(), less<int>());

    for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    // 내림차순 정렬
    // greater(> 연산) 기준으로 정렬한다.
    sort(v.begin(), v.end(), greater<int>());

    for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    return 0;
}