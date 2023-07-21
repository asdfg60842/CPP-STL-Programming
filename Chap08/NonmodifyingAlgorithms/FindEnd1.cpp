//
// Created by LJW on 2023/07/21.
//
// 원소를 수정하지 않는 알고리즘(Nonmodifying Algorithms)
// p = v.find_end(b, e, b2, e2) : p는 구간 [b, e)의 순차열 중 구간 [b2, e2)의 순차열과 일치하는 순차열 첫 원소의 반복자. 단, [b2, e2)와 일치하는 순차열이 여러 개라면 마지막 순차열의 첫 원소의 반복자.
// 순차열 하나에 포함하는 다른 순차열이 있는지 찾아야 한다면 find_end() 와 search() 알고리즘을 사용한다.
// find_end()는 일치하는 순차열이 여러 개라면 마지막 순차열의 반복자를 반환한다.
// search()는 일치하는 순차열이 여러 개라면 첫번째 순차열의 반복자를 반환한다.
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
    v1.push_back(60);
    v1.push_back(70);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    vector<int> v2;

    v2.push_back(30);
    v2.push_back(40);
    v2.push_back(50);

    vector<int>::iterator iter;
    // 구간 [v1.begin(), v1.end()) 의 순차열에 구간 [v2.begin(), v2.end())의 순차열이 일치하는지 판단하여 일치하는 순차열 구간이 여러 개라면 마지막 순차열의 첫 원소 반복자를 반환한다.
    iter = find_end(v1.begin(), v1.end(), v2.begin(), v2.end());

    if (iter != v1.end())
    {
        cout << "iter : " << *iter << endl;
        cout << "iter - 1 : " << *(iter - 1) << endl;
        cout << "iter + 1 : " << *(iter + 1) << endl;
    }

    return 0;
}