//
// Created by LJW on 2023/07/21.
//
// transform() 알고리즘은 목적지의 끝 반복자를 반환하므로 iter_end = transform(b, e, t, f)는 구간 [b, e)의 원소에 f(*p)를 적용하여 반환 값을 목적지 순차열 [t, iter_end)에 저장한다.
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
    vector<int> v1;

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    // size 10인 vector 생성
    vector<int> v2(10);

    cout << "v1 : ";
    for (vector<int>::size_type i = 0; i < v1.size(); ++i)
        cout << v1[i] << " ";
    cout << endl;

    cout << "v2 : ";
    for (vector<int>::size_type i = 0; i < v2.size(); ++i)
        cout << v2[i] << " ";
    cout << endl;

    vector<int>::iterator iter_end;
    // 구간 [v1.begin(), v1.end())의 원소를 Func(*p)에 적용하여 반환값을 [v2.begin(), iter_end)에 저장한다.
    iter_end = transform(v1.begin(), v1.end(), v2.begin(), Func);

    cout << "v1 : ";
    for (vector<int>::size_type i = 0; i < v1.size(); ++i)
        cout << v1[i] << " ";
    cout << endl;

    cout << "v2 : ";
    for (vector<int>::size_type i = 0; i < v2.size(); ++i)
        cout << v2[i] << " ";
    cout << endl;

    cout << "[v2.begin(), iter_end) 순차열 : " << *v2.begin() << " ... " << *(iter_end - 1) << endl;

    return 0;
}