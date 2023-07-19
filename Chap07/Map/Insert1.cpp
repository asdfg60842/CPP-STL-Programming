//
// Created by LJW on 2023/07/19.
//
// map의 원소는 pair 객체로 저장되며 pair 객체의 first 멤버 변수는 key로 second 멤버 변수는 value 이다.
// 원소를 저장하는 insert() 함수는 pair 객체를 인자로 받아 map의 원소인 key와 value의 쌍을 저장한다.
#include <iostream>
#include <map>
using namespace std;

int main()
{
    // key, value 모두 정수형인 컨테이너 생성
    // 기본 정렬 기준 less
    map<int, int> m;

    m.insert(pair<int, int>(5, 100));
    m.insert(pair<int, int>(3, 100));
    m.insert(pair<int, int>(8, 30));
    m.insert(pair<int, int>(4, 40));
    m.insert(pair<int, int>(1, 70));
    m.insert(pair<int, int>(7, 100));

    pair<int, int> pr(9, 50);
    // pr 객체 생성 후 저장
    m.insert(pr);

    map<int, int>::iterator iter;
    for (iter = m.begin(); iter != m.end(); ++iter)
        cout << "(" << (*iter).first << ',' << (*iter).second << ")" << " ";
    cout << endl;

    // 반복자는 -> 연산자가 오버로딩되어 있으므로
    // 포인터처럼 멤버를 -> 연산자로 접근할 수 있다.
    for (iter = m.begin(); iter != m.end(); ++iter)
        cout << "(" << iter->first << ',' << iter->second << ")" << " ";
    cout << endl;

    return 0;
}