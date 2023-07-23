//
// Created by LJW on 2023/07/23.
//
// 변경 알고리즘(mutating algorithms)
// p = reverse_copy(b, e, t) : 구간 [b, e)의 순차열을 뒤집어 목적지 순차열 [t, p)에 복사한다.
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

    cout << "v1 : ";
    for (vector<int>::size_type i = 0; i < v1.size(); ++i)
        cout << v1[i] << " ";
    cout << endl;

    vector<int> v2(5);

    vector<int>::iterator iter_end;
    // 목적지 순차열 v2는 v1 원소 이상의 size를 가져야 한다.
    iter_end = reverse_copy(v1.begin(), v1.end(), v2.begin());

    cout << "v2 : ";
    for (vector<int>::size_type i = 0; i < v2.size(); ++i)
        cout << v2[i] << " ";
    cout << endl;

    return 0;
}