//
// Created by LJW on 2023/07/27.
//
// 정렬된 범위 알고리즘(sorted range algorithms)
// binary_search(b, e, x, f) : 구간 [b, e)의 순차열에 x와 같은 원소가 있는가? f를 비교에 사용한다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Pred(int left, int right)
{
    return 3 < right - left;
}

int main()
{
    vector<int> v;

    v.push_back(40);
    v.push_back(46);
    v.push_back(12);
    v.push_back(80);
    v.push_back(10);
    v.push_back(47);
    v.push_back(30);
    v.push_back(55);
    v.push_back(90);
    v.push_back(53);

    cout << "v[원본] : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    // 정렬 기준 Pred에 따라 12는 10의 다음 원소가 아니기 때문에 12 가 10보다 앞에 놓인다.
    sort(v.begin(), v.end(), Pred);
    cout << "v[정렬] : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    // 검색 기준 Pred에 따라 !Pred(30, 32) && !Pred(32, 30)이 true이므로 30과 같아 순차열에 있는 원소가 된다.
    if (binary_search(v.begin(), v.end(), 32, Pred))
        cout << "32 원소가 존재한다." << endl;
    else
        cout << "32 원소가 존재하지 않는다." << endl;

    // 검색 기준 Pred에 따라 !Pred(*p, 35) && !Pred(35, *p)이 false이므로 순차열에 같은 원소가 없다.
    if (binary_search(v.begin(), v.end(), 35, Pred))
        cout << "35 원소가 존재한다." << endl;
    else
        cout << "35 원소가 존재하지 않는다." << endl;

    return 0;
}