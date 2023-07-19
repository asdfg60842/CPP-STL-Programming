//
// Created by LJW on 2023/07/03.
//
// insert() 멤버 함수의 실패 시 반환값(pair 객체)에 대한 예제
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    pair<set<int>::iterator, bool> pr;

    // 50 원소의 첫 번째 삽입
    pr = s.insert(50);
    s.insert(40);
    s.insert(80);

    // pr.second가 성공이면 pr.first는 삽입한 원소를 가리키는 반복자이다.
    if (true == pr.second)
        cout << *pr.first << " 삽입 성공" << endl;
    else
        // pr.second가 실패면 pr.first는 이미 삽입된 원소를 가리키는 반복자이다.
        cout << *pr.first << "가 이미 있습니다. 삽입 실패" << endl;

    set<int>::iterator iter;

    for (iter = s.begin(); iter != s.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    // 50 원소의 두 번째 삽입
    // 실패
    pr = s.insert(50);

    // pr.second가 성공이면 pr.first는 삽입한 원소를 가리키는 반복자이다.
    if (true == pr.second)
        cout << *pr.first << " 삽입 성공" << endl;
    else
        // pr.second가 실패면 pr.first는 이미 삽입된 원소를 가리키는 반복자이다.
        cout << *pr.first << " 가 이미 있습니다. 삽입 실패" << endl;

    for (iter = s.begin(); iter != s.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    return 0;
}