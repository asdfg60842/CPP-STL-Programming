//
// Created by LJW on 2023/06/27.
//
// vector 멤버 함수
// v.swap(v2) : v와 v2를 swap 한다.
// capacity를 0으로 만드는 함수는 존재하지 않지만, C++에서 권장하는 방법은 swap이다.
// 모든 컨테이너는 컨테이너 객체끼리 교환할 수 있는 swap() 멤버 함수를 제공한다.
// swap() 함수를 이용해 임시로 생성한(기본 생성자에 의해 size, capacity가 0인) 컨테이너 객체와 capacity를 0으로 만들고자 하는 컨테이너 객체를 서로 swap하는 방법을 사용한다.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // swap을 사용한 할당 메모리 제거
    // 기본값 0으로 초기화된 size가 5인 컨테이너
    vector<int> v(5);
    cout << "size : " << v.size() << " capacity : " << v.capacity() << endl;

    // 기본 생성자로 만든 vector 컨테이너와 v 컨테이너를 swap한다.
    vector<int>().swap(v);
    cout << "size : " << v.size() << " capacity : " << v.capacity() << endl;
    cout << endl;

    // vector의 swap
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);

    vector<int> v2;
    v2.push_back(100);
    v2.push_back(200);
    v2.push_back(300);

    for (vector<int>::size_type i = 0; i < v1.size(); ++i)
        cout << v1[i] << ", " << v2[i] << endl;
    cout << endl;

    // v1과 v2를 swap한다.
    v1.swap(v2);
    for (vector<int>::size_type i = 0; i < v1.size(); ++i)
        cout << v1[i] << ", " << v2[i] << endl;
    cout << endl;

    return 0;
}