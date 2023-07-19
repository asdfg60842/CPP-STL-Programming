//
// Created by LJW on 2023/06/28.
//
// vector 멤버 함수
// v.assign(n, x) : v에 x값으로 n개의 원소를 할당한다.
// assign 멤버 함수를 사용하면 일관적으로 값을 할당할 수 있다. 모든 시퀀스 컨테이너는 assign 멤버 함수를 제공하여 일관적으로 값을 할당할 수 있다.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 초깃값 1의 5개의 원소를 갖는 컨테이너 생성
    vector<int> v(5, 1);

    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    // 5개의 원소값을 2로 할당
    v.assign(5, 2);

    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}