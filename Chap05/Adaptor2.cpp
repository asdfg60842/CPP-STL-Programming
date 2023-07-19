//
// Created by LJW on 2023/06/26.
//
// 대표적인 반복자 어댑터가 reverse_iterator 이다.
// reverse_iterator는 일반 반복자의 동작 방식을 반대로 동작시키는 역방향 반복자로 변환한다.

// 역방향 반복자는 반복자가 가리키는 원소와 실제 가리키(참조)는 값(value)이 다르다. 반복자가 가리키는 원소 다음 원소의 값을 참조한다.
// 순차열의 구간(반복자 쌍)이 반개구간([begin, end))으로 알고리즘 수행 시 정방향 반복자와 호환되도록 하기 위해서 위와 같이 설계되었다.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    // 일반 반복자 iterator를 역방향 반복자 reverse_iterator로 변환
    // vector<int>::iterator 타입 정방향 반복자(v.end())의 역방향 반복자 생성
    reverse_iterator<vector<int>::iterator> riter(v.end());
    // vector<int>::iterator 타입 정방향 반복자(v.begin())의 역방향 반복자 생성
    reverse_iterator<vector<int>::iterator> end_riter(v.begin());

    // ++riter은 iter와 반대로 이동한다.
    for (; riter != end_riter; ++riter)
        cout << *riter << " ";
    cout << endl;

    return 0;
}