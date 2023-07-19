//
// Created by LJW on 2023/07/19.
//
// map은 연관 컨테이너이므로 삽입, 제거, 찾기 관련 멤버 함수를 제공한다.
// 이 멤버 함수는 모두 로그 시간에 수행된다.
// 다음은 찾기 관련 멤버 함수 find(), lower_bound(), upper_bound(), equal_range()의 사용 예제이다.
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, int> m;

    m[5] = 100;
    m[3] = 100;
    m[8] = 30;
    m[4] = 40;
    m[1] = 70;
    m[7] = 100;
    m[9] = 50;

    map<int, int>::iterator iter;
    for (iter = m.begin(); iter != m.end(); ++iter)
        cout << "(" << iter->first << ',' << iter->second << ")" << " ";
    cout << endl;

    // p = m.find(k) : p는 k 원소의 위치를 가리키는 반복자이다.
    iter = m.find(5);
    if (iter != m.end())
        cout << "key 5에 매핑된 value : " << iter->second << endl;

    map<int, int>::iterator lower_iter;
    map<int, int>::iterator upper_iter;

    // p = m.lower_bound(k) : p는 k의 시작 구간을 가리키는 반복자이다.
    lower_iter = m.lower_bound(5);
    // p = m.upper_bound(k) : p는 k의 끝 구간을 가리키는 반복자이다.
    upper_iter = m.upper_bound(5);

    cout << "구간 [lower_iter, upper_iter) 의 순차열 : ";
    for (iter = lower_iter; iter != upper_iter; ++iter)
        cout << "(" << iter->first << ',' << iter->second << ")" << " ";
    cout << endl;

    pair<map<int, int>::iterator, map<int, int>::iterator> iter_pair;
    // pr = m.equal_range(k) : pr은 k 원소의 반복자 구간인 pair 객체이다.
    iter_pair = m.equal_range(5);

    cout << "구간 [iter_pair.first, iter_pair.second) 의 순차열 : ";
    for (iter  = iter_pair.first; iter != iter_pair.second; ++iter)
        cout << "(" << iter->first << ',' << iter->second << ")" << " ";
    cout << endl;

    return 0;
}