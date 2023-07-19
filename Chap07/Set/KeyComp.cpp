//
// Created by LJW on 2023/07/03.
//
// 연관 컨테이너의 찾기 관련 멤버 함수는 key(원소)를 찾을 때 == 연산을 사용하지 않는다.
// 연관 컨테이너는 정렬 기준에 의해 key(원소)가 정렬 되어 있으므로 컨테이너의 정렬 기준 조건자를 이용해 찾기 연산을 수행한다.
// s 컨테이너의 정렬 기준이 less라면 less는 < 연산을 수행하므로 비교하는 두 원소 a와 b가 !(a < b) && !(b < a) 라면 두 원소는 같다(equivalence)라고 판단한다.
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int, less<int>> s;

    // 30과 50의 비교
    // 다르다
    cout << (!s.key_comp()(30, 50) && !s.key_comp()(50, 30)) << endl;
    // 30과 30의 비교
    // 같다
    cout << (!s.key_comp()(30, 30) && !s.key_comp()(30, 30)) << endl;

    return 0;
}