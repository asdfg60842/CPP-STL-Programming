//
// Created by LJW on 2023/07/21.
//
// 원소를 수정하지 않는 알고리즘(Nonmodifying Algorithms)
// lexicographical_compare(b, e, b2, e2) : 구간 [b, e)의 순차열이 구간 [b2, e2)의 순차열보다 작다면(less) true, 아니면 false를 반환한다. 이때 작음은 사전순이다.
// lexicographical_compare() 알고리즘은 순차열 [b, e) 와 [b2, e2)의 모든 원소를 문자열 처럼 비교(less)하여 참과 거짓을 반환한다.
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
    v2.push_back(50);

    vector<int> v3;

    v3.push_back(10);
    v3.push_back(20);
    v3.push_back(30);

    // v1과 v2의 순차열 비교에서 10과 20 원소는 같지만, v1의 30과 v2의 50 원소에서 30 < 50 이므로 lexicographical_compare() 알고리즘은 true를 반환한다.
    if (lexicographical_compare(v1.begin(), v1.end(), v2.begin(), v2.end()))
        cout << "v1 < v2" << endl;
    else
        cout << "v1 >= v2" << endl;

    // v1과 v3의 순차열 비교에서 두 순차열이 같으므로 lexicographical_compare() 알고리즘은 false를 반환한다.
    if (lexicographical_compare(v1.begin(), v1.end(), v3.begin(), v3.end()))
        cout << "v1 < v3" << endl;
    else
        cout << "v1 >= v3" << endl;

    return 0;
}