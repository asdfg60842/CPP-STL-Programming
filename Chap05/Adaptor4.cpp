//
// Created by LJW on 2023/06/26.
//
// normal_iter 와 reverse_iter가 같은 위치를 가리키지만, 실제 원소의 출력값은 40, 30으로 다르다.
// 이렇게 설계된 반복자는 정방향의 순회 원소를 역방향으로 순회하고자 할 때 진가를 발휘한다.
// -- 연산자를 사용하지 않고, ++ 연산자만으로 정방향, 역방향의 순회가 모두 가능하다.
// 이는 대부분의 알고리즘이 ++ 연산자만으로 구현되어 있으며, 이렇게 이미 구현된 알고리즘에 정방향과 역방향 순회가 모두 가능하게 한다.
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

    // 40 원소를 가리키는 정방향 반복자
    vector<int>::iterator normal_iter = v.begin() + 3;

    // normal_iter 이 역방향 반복자
    vector<int>::reverse_iterator reverse_iter(normal_iter);

    cout << "정방향 반복자의 값 : " << *normal_iter << endl;
    cout << "역방향 반복자의 값 : " << *reverse_iter << endl;
    cout << endl;

    // 정방향 출력
    for (vector<int>::iterator iter = v.begin(); iter != normal_iter; ++iter)
        cout << *iter << " ";
    cout << endl;

    // 역방향 출력
    for (vector<int>::reverse_iterator riter = reverse_iter; riter != v.rend(); ++riter)
        cout << *riter << " ";
    cout << endl;

    return 0;
}