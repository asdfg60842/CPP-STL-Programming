//
// Created by LJW on 8/9/23.
//
// Q5. 다음 v 컨테이너의 원소 copy() 알고리즘을 사용하여 화면에 출력하세요.
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));

    return 0;
}