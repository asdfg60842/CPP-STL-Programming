//
// Created by LJW on 2023/07/19.
//
// multiset의 찾기 관련 함수
// 연관 컨테이너 모두 같은 인터페이스의 멤버 함수를 지원하므로 multiset은 count(), find(), lower_bound(), upper_bound(), equal_range() 멤버 함수를 제공한다.
#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> ms;

    ms.insert(50);
    ms.insert(30);
    ms.insert(80);
    // 80 중복
    ms.insert(80);
    // 30 중복
    ms.insert(30);
    ms.insert(70);
    ms.insert(10);

    multiset<int>::iterator iter;

    for (iter = ms.begin(); iter != ms.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    // n = ms.count(k) : 원소 k의 개수를 반환한다.
    cout << "30 원소의 개수 : " << ms.count(30) << endl;

    // p = ms.find(k) : p는 k 원소 위치를 가리키는 반복자이다.
    iter = ms.find(30);
    cout << "iter : " << *iter << endl;

    multiset<int>::iterator lower_iter;
    multiset<int>::iterator upper_iter;

    // p = ms.lower_bound(k) : p는 k의 시작 구간을 가리키는 반복자이다.
    lower_iter = ms.lower_bound(30);
    // p = ms.upper_bound(k) : p는 k의 끝 구간을 가리키는 반복자이다.
    upper_iter = ms.upper_bound(30);

    cout << "lower_iter : " << *lower_iter << ", " << "upper_iter : " << *upper_iter << endl;

    cout << "구간 [lower_iter, upper_iter) 의 순차열 : ";
    for (iter = lower_iter; iter != upper_iter; ++iter)
        cout << *iter << " ";
    cout << endl;

    return 0;
}