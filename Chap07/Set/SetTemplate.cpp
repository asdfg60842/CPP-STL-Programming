//
// Created by LJW on 2023/07/03.
//
// set 템플릿 형식
// Key는 set 컨테이너 원소의 형식이며, Pred는 set의 정렬 기준인 조건자이다. 기본 조건자는 less이다.
// template<
//  typename Key,
//  typename Pred = less<Key>,
//  typename Allocator = allocator<Key>
// >
// class set
#include <iostream>
#include <set>
using namespace std;

int main()
{
    // 정렬 기준은 greater 조건자를 사용하고 int형 원소를 저장하는 컨테이너 s
    // greater 조건자는 > 연산의 결과로 모든 노드의 부모 노드가 왼쪽 자식 노드보다 작고, 오른쪽 자식 노드보다 큰 노드이다.
    set<int, greater<int>> s;

    s.insert(50);
    s.insert(30);
    s.insert(80);
    s.insert(40);
    s.insert(10);
    s.insert(70);
    s.insert(90);

    // greater<int> 조건자를 사용하는 반복자 생성
    set<int, greater<int>>::iterator iter;

    for (iter = s.begin(); iter != s.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    return 0;
}