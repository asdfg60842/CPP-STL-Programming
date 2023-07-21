//
// Created by LJW on 2023/07/21.
//
// 원소를 수정하는 알고리즘 (Modifying Algorithms)
// p = merge(b, e, b2, e2, t) : 정렬된 순차열 [b, e)과 [b2, e2)를 [t, p)로 합병 정렬한다.
// merge() 알고리즘은 정렬된 구간 [b, e)의 순차열과 구간 [b2, e2)의 순차열을 [t, t + (e - b) + (e2 - b2))의 순차열로 합병 정렬한다.
// merge()는 정렬된 구간에서 동작한다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v1;

    v1.push_back(10);
    v1.push_back(30);
    v1.push_back(50);
    v1.push_back(60);
    v1.push_back(80);

    vector<int> v2;

    v2.push_back(20);
    v2.push_back(40);
    v2.push_back(70);

    // size 10인 vector 생성
    vector<int> v3(10);
    vector<int>::iterator iter_end;
    // 구간 [v1.begin(), v1.end())의 순차열과 구간 [v2.begin(), v2.end())의 순차열을 합병 정렬하여
    // [v3.begin(), v3.begin() + (v1.end() - v1.begin()) + (v2.end() - v2.begin()))에 합병 정렬한다.
    // merge() 알고리즘이 목적지 끝 반복자를 반환하므로 iter_end는 목적지 끝 반복자이며, 결론적으로 구간 [v3.begin(), iter_end())로 합병 정렬하는 것이다.
    iter_end = merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

    cout << "v1 : ";
    for (vector<int>::size_type i = 0; i < v1.size(); ++i)
        cout << v1[i] << " ";
    cout << endl;

    cout << "v2 : ";
    for (vector<int>::size_type i = 0; i < v2.size(); ++i)
        cout << v2[i] << " ";
    cout << endl;

    cout << "v3(합병 순차열) : ";
    for (vector<int>::size_type i = 0; i < v3.size(); ++i)
        cout << v3[i] << " ";
    cout << endl;

    return 0;
}