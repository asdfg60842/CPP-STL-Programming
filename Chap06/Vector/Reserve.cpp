//
// Created by LJW on 2023/06/27.
//
// vector 멤버 함수
// v.reserve(n) : n개의 원소를 저장할 공간을 예약한다.
// vector는 push_back()을 사용해 원소를 계속 추가할 수 있지만, 메모리 재할당과 이전 원소 복사 문제가 발생할 수 있다.
// reserve()를 사용하면 미리 메모리를 할당해 capacity를 결정하고 vector에 원소가 추가되더라도 메모리를 재할당하지 않는다.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    // 8개의 원소를 저장할 공간을 예약한다. capacity 8로 결정.
    // 8개 이상의 원소가 추가될 경우 메모리 재할당.
    v.reserve(8);

    cout << "size : " << v.size() << " capacity : " << v.capacity() << endl;;
    v.push_back(10);
    cout << "size : " << v.size() << " capacity : " << v.capacity() << endl;
    v.push_back(20);
    cout << "size : " << v.size() << " capacity : " << v.capacity() << endl;
    v.push_back(30);
    cout << "size : " << v.size() << " capacity : " << v.capacity() << endl;
    v.push_back(40);
    cout << "size : " << v.size() << " capacity : " << v.capacity() << endl;
    v.push_back(50);
    cout << "size : " << v.size() << " capacity : " << v.capacity() << endl;
    v.push_back(60);
    cout << "size : " << v.size() << " capacity : " << v.capacity() << endl;
    v.push_back(70);
    cout << "size : " << v.size() << " capacity : " << v.capacity() << endl;
    v.push_back(80);
    cout << "size : " << v.size() << " capacity : " << v.capacity() << endl;

    // 원소 개수가 9개 이므로 이전에 미리 할당한 메모리보다 원소 개수가 많아짐.
    // 메모리 재할당
    v.push_back(90);
    cout << "size : " << v.size() << " capacity : " << v.capacity() << endl;

    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}