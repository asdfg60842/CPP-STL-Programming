//
// Created by LJW on 2023/07/21.
//
// 원소를 수정하지 않는 알고리즘(Nonmodifying Algorithms)
// p = find(b, e, x) : p는 구간 [b, e)에서 x와 같은 첫 원소의 반복자
// p = find_if(b, e, f) : p는 구간 [b, e)에 f(*p)가 참인 첫 원소를 가리키는 반복자
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Pred(int n)
{
    return 35 < n;
}

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    vector<int>::iterator iter;
    // iter는 구간 [v.begin(), v.end()) 에서 20 값을 갖는 첫 번째 원소의 반복자이다.
    iter = find(v.begin(), v.end(), 20);

    if (iter != v.end())
        cout << *iter << "을 찾다!" << endl;

    // iter는 구간 [v.begin(), v.end())에서 단항 조건 연산자 Pred(*p)가 참인 첫 원소의 반복자이다.
    iter = find_if(v.begin(), v.end(), Pred);
    if (iter != v.end())
        cout << "순차열에서 35보다 큰 첫 번째 원소 : " << *iter << endl;

    return 0;
}