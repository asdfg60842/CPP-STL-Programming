//
// Created by LJW on 2023/07/03.
//
// set 멤버 함수
// pred = s.key_comp() : pred는 s의 key 정렬 기준인 조건자다(key_compare 타입).
// pred = s.value_comp() : pred는 s의 value 정렬 기준인 조건자다(value_compare 타입).
// 정렬 기준 형식은 typedef 내장 멤버 형식 key_compare와 value_compare로 제공한다.
// set은 저장 원소인 값(value)이 곧 비교로 사용되는 키(key)가 되며 그래서 set은 value와 key 타입이 같다.
#include <iostream>
#include <set>
using namespace std;

int main()
{
    // 명시적으로 less 조건자를 정렬 기준으로 한 s_less 컨테이너 생성
    set<int, less<int>> s_less;
    // greater 조건자를 정렬 기준으로 한 s_greater 컨테이너 생성
    set<int, greater<int>> s_greater;

    s_less.insert(50);
    s_less.insert(80);
    s_less.insert(40);

    s_greater.insert(50);
    s_greater.insert(80);
    s_greater.insert(40);

    set<int, less<int>>::key_compare l_cmp = s_less.key_comp();
    // 10 < 20 의 bool 값을 반환한다.
    cout << l_cmp(10, 20) << endl;

    set<int, greater<int>>::key_compare g_cmp = s_greater.key_comp();
    // 10 > 20 의 bool 값을 반환한다.
    cout << g_cmp(10, 20) << endl;

    cout << "key_compare type : " << typeid(s_less.key_comp()).name() << endl;
    cout << "key_compare type : " << typeid(s_greater.key_comp()).name() << endl;

    cout << "value_compare type : " << typeid(s_less.value_comp()).name() << endl;
    cout << "value_compare type : " << typeid(s_greater.value_comp()).name() << endl;

    return 0;
}