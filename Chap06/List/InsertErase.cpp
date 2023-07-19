//
// Created by LJW on 2023/07/02.
//
// list 멤버 함수
// q = lt.erase(p) : p가 가리키는 원소를 제거한다. q는 다음 원소를 가리킨다.
// q = lt.erase(b, e) : 반복자 구간 [b, e)의 모든 원소를 제거한다. q는 다음 원소를 가리킨다.
// q = lt.insert(p, x) : p가 가리키는 위치에 x 값을 삽입한다. q는 삽입한 원소를 가리키는 반복자다.
// lt.insert(p, n, x) : p가 가리키는 위치에 n 개의 x 값을 삽입한다.
// lt.insert(p, b, e) : p가 가리키는 위치에 반복자 구간 [b, e)의 원소를 삽입한다.
// list의 가장 큰 특징 중 하나는 순차열 중간에 원소를 삽입, 제거하더라도 상수 시간 복잡도의 수행 성능을 보인다는 점이다. vector나 deque처럼 원소를 밀어내지 않고 노드를 서로 연결하기만 하면 되기 때문이다.
// 노드 기반 컨테이너의 삽입과 제거 동작은 반복자를 무효화시키지 않는다. 반복자가 가리키는 원소 자체가 제거되지 않는 한, 반복자가 가리키는 원소는 그대로 존재한다.
// 배열 기반 컨테이너의 반복자는 원소의 삽입과 제거 동작이 발생하면 메모리가 재할당되거나 원소가 이동할 수 있으므로 반복자가 무효화된다.
#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> lt;

    lt.push_back(10);
    lt.push_back(20);
    lt.push_back(30);
    lt.push_back(40);
    lt.push_back(50);

    list<int>::iterator iter = lt.begin();
    list<int>::iterator iter2;

    // list는 양방향 반복자를 지원하므로 +, - 연산이 불가능하여 ++ 연산으로 원소의 위치 이동
    ++iter;
    ++iter;

    // iter(30) 의 원소를 제거한다.
    iter2 = lt.erase(iter);

    for (iter = lt.begin(); iter != lt.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    cout << "iter2 : " << *iter2 << endl;

    iter = iter2;
    // iter2(40) 이 가리키는 위치에 300을 삽입.
    // 삽입 후에도 반복자 모두 유효(가리키는 원소가 없어지거나 바뀌지 않는다).
    iter2 = lt.insert(iter, 300);

    for (iter = lt.begin(); iter != lt.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    cout << "iter2 : " << *iter2 << endl;

    return 0;
}