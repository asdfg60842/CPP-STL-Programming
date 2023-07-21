//
// Created by LJW on 2023/07/21.
//
// 원소를 수정하는 알고리즘 (Modifying Algorithms)
// p = copy_backward(b, e, t) : 구간 [b, e)의 원소를 마지막 원소부터 [p, t)로 모두 복사한다.
// copy_backward() 알고리즘은 구간 [b, e)의 모든 원소를 [t - (e - b), t)의 순차열로 마지막 원소부터 복사한다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v1;

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    // size가 10인 vector 생성
    vector<int> v2(10);

    vector<int>::iterator iter;
    // 구간 [v1.begin(), v1.end())의 순차열을 [v2.end() - (v1.end() - v1.begin()), v2.end())의 순차열로 마지막 원소부터 복사
    // copy_backward() 알고리즘은 목적지 시작 반복자를 반환하므로 목적지 순차열은 [iter, v2.end())가 된다.
    iter = copy_backward(v1.begin(), v1.end(), v2.end());
    cout << "v2 첫 원소 : " << *iter << endl;

    cout << "v1 : ";
    for (vector<int>::size_type i = 0; i < v1.size(); ++i)
        cout << v1[i] << " ";
    cout << endl;

    cout << "v2 : ";
    for (vector<int>::size_type i = 0; i < v2.size(); ++i)
        cout << v2[i] << " ";
    cout << endl;

    return 0;
}