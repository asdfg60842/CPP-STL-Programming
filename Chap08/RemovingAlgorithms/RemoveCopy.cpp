//
// Created by LJW on 2023/07/23.
//
// 제거 알고리즘(removing algorithms)
// p = remove_copy(b, e, t, x) : 구간 [b, e)의 순차열에서 *p == x가 아닌 원소만 순차열 [t, p)에 복사한다.
// p = remove_copy_if(b, e, t, f) : 구간 [b, e)의 순차열에서 f(*p)가 참이 아닌 원소만 순차열 [t, p)에 복사한다.
// remove_copy_if() 알고리즘은 조건자 버전으로 조건자가 참이 아닌 원소만 목적지 순차열에 복사한다.
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

    vector<int> v2(5);
    vector<int>::iterator iter_end;
    // 구간 [v1.begin(), v1.end())의 순차열에서 30 원소를 제외한 모든 원소를 목적지 순차열 [v2.begin(), iter_end)에 복사한다.
    iter_end = remove_copy(v1.begin(), v1.end(), v2.begin(), 30);

    cout << "v1 : ";
    for (vector<int>::size_type i = 0; i < v1.size(); ++i)
        cout << v1[i] << " ";
    cout << endl;

    cout << "v2 : ";
    for (vector<int>::size_type i = 0; i < v2.size(); ++i)
        cout << v2[i] << " ";
    cout << endl;

    cout << "[v2.begin(), iter_end) : ";
    for (vector<int>::iterator iter = v2.begin(); iter != iter_end; ++iter)
        cout << *iter << " ";
    cout << endl;

    return 0;
}