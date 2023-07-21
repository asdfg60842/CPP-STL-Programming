//
// Created by LJW on 2023/07/21.
//
// 원소를 수정하는 알고리즘 (Modifying Algorithms)
// p = transform(b, e, t, f) : 구간 [b, e)의 모든 원소를 f(*p)하여 [t, t + (e - b))에 저장한다. p는 저장된 마지막 원소의 반복자(t + (e - b))이다.
// 순차열의 모든 원소에 사용자 정책(동작)을 반영(적용)하려면 일반적으로 for_each(), transform() 알고리즘을 사용한다.
// transform() 알고리즘이 for_each() 알고리즘과 다른 것은 원본의 순차열 변화 없이 목적지의 순차열로 저장한다는 점이다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// transform() 알고리즘의 사용자 정책 함수는 반환값을 사용하므로 for_each() 알고리즘과 다르게 반환 타입을 가진다.
int Func(int n)
{
    return n + 5;
}

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    cout << "v : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    // for_each() 알고리즘과 결과를 같게 하기 위해 목적지 순차열을 원본의 순차열과 같게 지정함.
    transform(v.begin(), v.end(), v.begin(), Func);

    cout << "v : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}