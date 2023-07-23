//
// Created by LJW on 2023/07/23.
//
// 제거 알고리즘(removing algorithms)
// p = unique(b, e) : 구간 [b, e)의 순차열을 인접한 중복 원소(값이 같은 원소)가 남지 않게 덮어쓰기로 이동한다. 알고리즘 수행 후 순차열은 [b, p)가 된다.
// unique() 알고리즘에서 주의할 점은 인접한 중복 원소를 제거하기 때문에 결과에서 인접하지 않은 중복 원소는 남게 된다. 중복 원소도 제거하려면 정렬 후 unique() 알고리즘을 수행하면 된다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(30);
    v.push_back(40);
    v.push_back(40);
    v.push_back(30);
    v.push_back(50);

    cout << "v : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    vector<int>::iterator iter_end;
    iter_end = unique(v.begin(), v.end());

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