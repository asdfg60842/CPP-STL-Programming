//
// Created by LJW on 2023/06/27.
//
// capacity()
// 유일하게 vector만이 가지는 멤버 함수
// vector는 배열 기반 컨테이너로 원소를 계속 추가할 수 있다. 원소가 추가될 때마다 메모리를 재할당하고, 이전 원소를 모두 복사해야 한다면 비효율적이다.이때, 이를 보완하고자 만들어진 개념이 capacity이다.
// 원소가 추가될 때마다 메모리를 재할당하지 않고, 미리 넉넉한 메모리를 확보하면 재할당과 이전 원소를 복사하는데 드는 비용을 줄일 수 있다.
// 미리 저장할 메모리의 크기를 크게 하면 원소가 추가되어도 메모리의 크기가 변하지 않게 된다.
// 원소를 추가하려 할 때, 메모리의 크기가 원소의 개수보다 크지 않다면 (메모리의 크기 < 원소의 개수) 메모리 재할당을 수행하며 이전 메모리 크기의 2배 만큼 더 할당하는 정책을 사용한다.
// 이 정책은 컴파일러마다 다르다. CLion의 경우 2배 할당.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

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
    v.push_back(90);
    cout << "size : " << v.size() << " capacity : " << v.capacity() << endl;

    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}