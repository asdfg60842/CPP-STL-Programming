//
// Created by LJW on 2023/07/03.
//
// set 멤버 함수
// n = s.count(k) : 원소 k의 개수를 반환한다.
// 원소 k가 s에 없을 경우 0을 반환한다.
// 찾기 관련 멤버 함수는 정렬 기준으로 트리의 루트 노드부터 자식 노드로 검색을 진행하므로 로그 시간 복잡도에 실행되며 count(), find(), lower_bound(), upper_bound(), equal_range() 멤버 함수이다.
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(50);
    s.insert(30);
    s.insert(80);
    s.insert(40);
    s.insert(10);
    s.insert(70);
    s.insert(90);

    set<int>::iterator iter;

    for (iter = s.begin(); iter != s.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    cout << "원소 50의 개수 : " << s.count(50) << endl;
    cout << "원소 100의 개수 : " << s.count(100) << endl;

    return 0;
}