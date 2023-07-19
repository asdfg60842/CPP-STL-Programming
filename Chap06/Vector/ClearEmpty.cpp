//
// Created by LJW on 2023/06/27.
//
// vector 멤버 함수
// v.clear() : v의 모든 원소를 제거한다.
// v.empty() : v가 비었는지 조사한다.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 기본값 0으로 초기화된 size가 5인 컨테이너
    vector<int> v(5);

    v[0] = 10;
    v[1] = 20;
    v[2] = 30;
    v[3] = 40;
    v[4] = 50;

    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;
    cout << "size : " << v.size() << " capacity : " << v.capacity() << endl;

    // v를 비운다.
    v.clear();
    cout << "size : " << v.size() << " capacity : " << v.capacity() << endl;

    // v가 비어있는가?
    if (v.empty())
    {
        // size는 0이 되어도 메모리는 제거되지 않고 남아 있게 된다.
        // 비효율적 -> swap() 사용
        cout << "v에 원소가 없습니다." << endl;
        cout << "size : " << v.size() << " capacity : " << v.capacity() << endl;
    }

    return 0;
}