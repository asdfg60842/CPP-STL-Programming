//
// Created by LJW on 2023/07/03.
//
// set 멤버 함수
// q = s.insert(p, k) : p가 가리키는 위치부터 빠르게 k를 삽입한다. q는 삽입한 원소를 가리키는 반복자이다.
// 원소의 위치를 지정하는 버전은 삽입 탐색을 시작할 위치로 삽입 위치가 정렬 순서와 맞는다면 바로 삽입되지만 아니라면 로그 시간이 걸린다.
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    pair<set<int>::iterator, bool> pr;

    s.insert(50);
    s.insert(30);
    s.insert(80);
    s.insert(40);
    s.insert(10);
    s.insert(70);
    // pr.first는 90 원소의 반복자
    pr = s.insert(90);

    set<int>::iterator iter;

    for (iter = s.begin(); iter != s.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    // 90 원소의 반복자에서 검색 시작 후 삽입
    s.insert(pr.first, 85);

    for (iter = s.begin(); iter != s.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    return 0;
}