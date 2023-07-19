//
// Created by LJW on 2023/06/27.
//
// vector 생성자
// vector v(n) : v는 기본값으로 초기화된 n개의 원소를 갖는다.
// vector는 생성자를 사용하여 size를 미리 확보할 수 있다. 이때, 원소의 값은 기본값(원소의 기본 생성자 호출 값)으로 초기화된다.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector 생성자 사용하여 size 확보
    // 0 으로 초기화된 size가 5인 컨테이너
    vector<int> v1(5);

    // push_back()을 사용하면 기존 원소의 개수에 원소가 추가된다(size 증가).
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    for (vector<int>::size_type i = 0; i < v1.size(); ++i)
        cout << v1[i] << " ";
    cout << endl;

    // vector 생성자 사용하여 size 확보
    // 0 으로 초기화된 size가 5인 컨테이너
    vector<int> v2(5);

    // v2[] []연산자를 사용해 원소의 참조하므로 원소를 수정함.
    v2[0] = 10;
    v2[1] = 20;
    v2[2] = 30;
    v2[3] = 40;
    v2[4] = 50;

    for (vector<int>::size_type i = 0; i < v2.size(); ++i)
        cout << v2[i] << " ";
    cout << endl;

    return 0;
}