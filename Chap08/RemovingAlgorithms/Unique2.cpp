//
// Created by LJW on 2023/07/23.
//
// 제거 알고리즘(removing algorithms)
// p = unique(b, e, f) : 구간 [b, e)의 순차열을 f(*p)가 참인 인접한 중복 원소(값이 같은 원소)가 남지 않게 덮어쓰기로 이동한다. 알고리즘 수행 후 순차열은 [b, p)가 된다.
// p = unique_copy(b, e, t) : 구간 [b, e)의 순차열에서 인접한 중복 원소가 아닌 원소를 순차열 [t, p)에 복사한다.
// p = unique_copy(b, e, t, f) : 구간 [b, e)의 순차열에서 f(*p)가 참인 인접한 중복 원소가 아닌 원소를 순차열 [t, p)에 복사한다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Pred(int left, int right)
{
    return abs(right - left) < 10;
}

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(11);
    v.push_back(30);
    v.push_back(32);
    v.push_back(40);
    v.push_back(50);

    cout << "v : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    vector<int>::iterator iter_end;
    iter_end = unique(v.begin(), v.end(), Pred);

    cout << "v : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    cout << "[v.begin(), iter_end) : ";
    for (vector<int>::iterator iter = v.begin(); iter != iter_end; ++iter)
        cout << *iter << " ";
    cout << endl;

    return 0;
}