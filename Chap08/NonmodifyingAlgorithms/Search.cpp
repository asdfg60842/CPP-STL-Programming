//
// Created by LJW on 2023/07/21.
//
// 원소를 수정하지 않는 알고리즘(Nonmodifying Algorithms)
// p = search(b, e, b2, e2) : p는 구간 [b, e)의 순차열 중 구간 [b2, e2)의 순차열과 일치하는 순차열 첫 원소의 반복자
// (find_end()와 비슷하나 find_end()는 일치하는 순차열의 마지막 순차열의 반복자)
// p = search(b, e, b2, e2, f) : p는 구간 [b, e)의 순차열 중 구간 [b2, e2)의 순차열과 일치하는 순차열 첫 원소의 반복자. 이때 비교는 f를 사용
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
    iter = search(v1.begin(), v1.end(), v2.begin(), v2.end());

    if (iter != v1.end())
    {
        // 일치하는 첫 번째 순차열의 첫 원소의 반복자 iter
        cout << "iter : " << *iter << endl;
        cout << "iter - 1 : " << *(iter - 1) << endl;
        cout << "iter + 1 : " << *(iter + 1) << endl;
    }

    return 0;
}