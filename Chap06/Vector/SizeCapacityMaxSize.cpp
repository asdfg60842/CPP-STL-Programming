//
// Created by LJW on 2023/06/27.
//
// vector 멤버 함수
// v.size() : v의 원소 개수
// x = v.capacity() : x는 v에 할당된 공간의 크기
// x = v.max_size() : x는 v가 담을 수 있는 최대 원소의 개수다(메모리의 크기).
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

    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    // size() : 원소의 개수
    cout << v.size() << endl;

    // capacity() : 실제 할당된 메모리의 크기
    cout << v.capacity() << endl;

    // max_size() : 컨테이너가 담을 수 있는 최대 원소 개수
    cout << v.max_size() << endl;

    return 0;
}