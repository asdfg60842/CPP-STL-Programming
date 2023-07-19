//
// Created by LJW on 2023/07/19.
//
// map의 insert() 멤버 함수는 set처럼 저장한 원소의 위치를 가리키는 반복자와 삽입 성공 여부를 나타내는 bool 값을 pair 객체로 반환한다.
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, int> m;
    // insert() 결과 pair 객체
    pair<map<int, int>::iterator, bool> pr;

    m.insert(pair<int, int>(5, 100));
    m.insert(pair<int, int>(3, 100));
    m.insert(pair<int, int>(8, 30));
    m.insert(pair<int, int>(4, 40));
    m.insert(pair<int, int>(1, 70));
    m.insert(pair<int, int>(7, 100));

    // insert() 성공
    // pr.second = true
    pr = m.insert(pair<int, int>(9, 50));
    if (true == pr.second)
        cout << "key : " << pr.first->first << ", value : " << pr.first->second << " 저장 완료" << endl;
    else
        cout << "key 9가 이미 m에 있습니다." << endl;

    // insert() 실패(이미 존재하는 값)
    // pr.second = false
    pr = m.insert(pair<int, int>(9, 50));
    if (true == pr.second)
        cout << "key : " << pr.first->first << ", value : " << pr.first->second << " 저장 완료" << endl;
    else
        cout << "key 9가 이미 m에 있습니다." << endl;

    return 0;
}