//
// Created by LJW on 2023/06/27.
//
// vector 멤버 함수
// v.resize(n) : v의 크기를 n으로 변경하고 확장되는 공간의 값을 기본값으로 초기화한다.
// v.resize(n, x) : v의 크기를 n으로 변경하고 확장되는 공간의 값을 x값으로 초기화한다.
// 생성자뿐만 아니라 resize() 멤버 함수를 사용하여 컨테이너의 size를 변경할 수 있다.
// 단, size를 키울 때 capacity도 늘어나지만, size를 줄일 때는 capacity가 줄지 않는다.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 기본값 0으로 초기화된 size가 5인 컨테이너
    vector<int> v(5);

    // [] 연산자를 사용해 참조하는 원소 수정
    v[0] = 10;
    v[1] = 20;
    v[2] = 30;
    v[3] = 40;
    v[4] = 50;

    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;
    cout << "size : " << v.size() << " capacity : " << v.capacity() << endl;
    cout << endl;

    // 기본값 0으로 초기화된 size가 10인 컨테이너로 확장
    v.resize(10);
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;
    cout << "size : " << v.size() << " capacity : " << v.capacity() << endl;
    cout << endl;

    // size가 5인 컨테이너로 축소. capacity는 변화 없음
    v.resize(5);
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;
    cout << "size : " << v.size() << " capacity : " << v.capacity() << endl;
    cout << endl;

    // 지정값 100으로 초기화된 size가 100인 컨테이너로 확장
    v.resize(10, 100);
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;
    cout << "size : " << v.size() << " capacity : " << v.capacity() << endl;

    return 0;
}