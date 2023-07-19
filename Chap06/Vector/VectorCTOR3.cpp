//
// Created by LJW on 2023/06/28.
//
// vector 생성자
// vector v(b, e) : v는 반복자 구간 [b, e)로 할당한다.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    // 순차열 [v.begin(), v.end()) 로 v2 초기화
    vector<int> v2(v.begin(), v.end());

    vector<int>::iterator iter;

    // v2 출력
    for (iter = v2.begin(); iter != v2.end(); ++iter)
        cout << *iter << " ";
    cout << endl;
}