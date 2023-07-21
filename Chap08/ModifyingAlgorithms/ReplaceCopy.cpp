//
// Created by LJW on 2023/07/21.
//
// 원소를 수정하는 알고리즘 (Modifying Algorithms)
// p = replace_copy(b, e, t, x, x2) : 구간 [b, e)의 x인 원소를 x2로 수정하여 [t, p)로 복사한다.
// p = replace_copy_if(b, e, t, f, x2) : 구간 [b, e)의 f(*p)가 참인 원소를 x2로 수정하여 [t, p)로 복사한다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Pred(int n)
{
    return n <= 30;
}

int main()
{
    vector<int> v1;

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(30);
    v1.push_back(50);
    // size 6인 vector 생성
    vector<int> v2(6);
    // size 6인 vector 생성
    vector<int> v3(6);

    cout << "v1 : ";
    for (vector<int>::size_type i = 0; i < v1.size(); ++i)
        cout << v1[i] << " ";
    cout << endl;

    cout << "v2 : ";
    for (vector<int>::size_type i = 0; i < v2.size(); ++i)
        cout << v2[i] << " ";
    cout << endl;

    cout << "v3 : ";
    for (vector<int>::size_type i = 0; i < v3.size(); ++i)
        cout << v3[i] << " ";
    cout << endl;

    vector<int>::iterator iter_end;
    // 구간 [v1.begin(), v1.end())의 원소 중 30인 원소를 0으로 수정하여 순차열 [v2.begin(), iter_end)로 복사한다.
    iter_end = replace_copy(v1.begin(), v1.end(), v2.begin(), 30, 0);
    // 구간 [v1.begin(), v1.end())의 원소 중 Pred(*p)가 참인 원소를 0으로 수정하여 순차열 [v3.begin(), iter_end)로 복사한다.
    iter_end = replace_copy_if(v1.begin(), v1.end(), v3.begin(), Pred, 0);

    cout << "v1 : ";
    for (vector<int>::size_type i = 0; i < v1.size(); ++i)
        cout << v1[i] << " ";
    cout << endl;

    cout << "v2 : ";
    for (vector<int>::size_type i = 0; i < v2.size(); ++i)
        cout << v2[i] << " ";
    cout << endl;

    cout << "v3 : ";
    for (vector<int>::size_type i = 0; i < v3.size(); ++i)
        cout << v3[i] << " ";
    cout << endl;

    return 0;
}