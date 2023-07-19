//
// Created by LJW on 2023/06/27.
//
// vector 생성자
// vector v(n, x) : v는 x값으로 초기화된 n개의 원소를 갖는다.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 기본값 0으로 초기화된 size가 5인 컨테이너
    vector<int> v1(5);
    for (vector<int>::size_type i = 0; i < v1.size(); ++i)
        cout << v1[i] << " ";
    cout << endl;

    // 지정값 0으로 초기화된 size가 5인 컨테이너
    vector<int> v2(5, 0);
    for (vector<int>::size_type i = 0; i < v2.size(); ++i)
        cout << v2[i] << " ";
    cout << endl;

    // 지정값 10으로 초기화된 size가 5인 컨테이너
    vector<int> v3(5, 10);
    for (vector<int>::size_type i = 0; i < v3.size(); ++i)
        cout << v3[i] << " ";
    cout << endl;

    return 0;
}