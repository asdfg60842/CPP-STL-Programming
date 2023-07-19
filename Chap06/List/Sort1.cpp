//
// Created by LJW on 2023/07/02.
//
// list 멤버 함수
// lt.sort() : lt의 모든 원소를 오름차 순으로 정렬한다.
// 정렬을 수행할 수 있는 컨테이너는 시퀀스 컨테이너이다. 연관 컨테이너는 자체 정렬 기준에 의해 자동 정렬된다.
// vector와 deque는 sort() 알고리즘을 사용하여 빠르게 정렬이 가능하지만, list는 sort() 알고리즘을 수행할 수 없다. sort() 알고리즘은 임의 접근 반복자를 지원하는 컨테이너만 사용할 수 있기 때문이다.
// 따라서 list는 자체 정렬 멤버 함수 sort()를 제공한다.
#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> lt;

    lt.push_back(20);
    lt.push_back(10);
    lt.push_back(50);
    lt.push_back(30);
    lt.push_back(40);

    list<int>::iterator iter;
    for (iter = lt.begin(); iter != lt.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    // 오름차순 정렬
    lt.sort();
    for (iter = lt.begin(); iter != lt.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    return 0;
}