//
// Created by LJW on 2023/06/26.
//
// 모든 컨테이너는 자신의 역방향 반복자를 typedef 타입으로 정의하며, rbegin(), rend() 멤버 함수로 순차열의 시작과 끝 원소를 가리키는 반복자 쌍을 반환한다.
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

    // STL 모든 컨테이너는 반복자 어댑터 reverse_iterator를 typedef 타입으로 정의하며, rbegin(), rend()로 컨테이너의 역방향 반복자를 반환한다.ㄴ
    // v.rbegin() : v의 마지막 원소를 가리키는 역방향 반복자를 반환한다.
    // v.rend() : v의 첫 원소의 한칸 앞 원소를 가리키는 역방향 반복자를 반환한다.
    vector<int>::reverse_iterator riter(v.rbegin());
    for (; riter != v.rend(); ++riter)
        cout << *riter << " ";
    cout << endl;

    return 0;
}