//
// Created by LJW on 2023/07/21.
//
// 원소를 수정하지 않는 알고리즘(Nonmodifying Algorithms)
// equal(b, e, b2) : [b, e) 와 [b2, b2 + (e - b))의 모든 원소가 같은(==)가?
// 두 개의 순차열을 필요로하는 대부분의 알고리즘은 두 순차열의 길이(원소의 개수)가 같을 때 동작하므로 첫 번째 순차열 구간 [b, e)를 필요로 하지만, 두 번째 순차열은 시작 반복자인 b2만을 필요로 한다.
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

    vector<int> v2;

    v2.push_back(10);
    v2.push_back(20);
    v2.push_back(30);
    v2.push_back(40);
    v2.push_back(50);

    cout << "v1 : ";
    for (vector<int>::size_type i = 0; i < v1.size(); ++i)
        cout << v1[i] << " ";
    cout << endl;

    cout << "v2 : ";
    for (vector<int>::size_type i = 0; i < v2.size(); ++i)
        cout << v2[i] << " ";
    cout << endl;

    // 구간 [v1.begin(), v1.end()) 와 구간 [v2.begin(), v2.begin() + 3) 을 비교
    if (equal(v1.begin(), v1.end(), v2.begin()))
        cout << "두 순차열은 같다." << endl;

    return 0;
}