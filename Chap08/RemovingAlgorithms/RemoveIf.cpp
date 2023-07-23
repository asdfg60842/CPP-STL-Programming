//
// Created by LJW on 2023/07/23.
//
// 제거 알고리즘(removing algorithms)
// p = remove_if(b, e, f) : 구간 [b, e)의 순차열을 f(*p)가 참인 원소가 남지 않도록 덮어쓰기로 이동한다. 알고리즘 수행 후 순차열은 [b, p)가 된다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Pred(int n)
{
    return 30 <= n && n <= 40;
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

    vector<int>::iterator iter_end;
    // 구간 [v.begin(), v.end())의 순차열에서 Pred(*q)가 참인 원소를 논리적으로 제거한다. remove_if() 알고리즘 수행 후의 순차열은 [v.begin(), iter_end)이다.
    // remove()와 마찬가지로 size를 변경하지 않으므로 실제로 제거하기 위해서는 erase()함수를 사용해야 한다.
    iter_end = remove_if(v.begin(), v.end(), Pred);

    cout << "[v.begin(), v.end()) : ";
    for (vector<int>::iterator iter = v.begin(); iter != iter_end; ++iter)
        cout << *iter << " ";
    cout << endl;

    return 0;
}