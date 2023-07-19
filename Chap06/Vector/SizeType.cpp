//
// Created by LJW on 2023/06/27.
//
// vector 멤버 형식
// size_type() : vector의 멤버 형식으로 첨자나 원소의 개수 등의 형식
// vector의 size_type은 원소의 개수나 [] 연산자 등의 index로 사용하는 형식의 typedef된 멤버 형식이다.
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

    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << endl;

    cout << typeid(vector<int>::size_type).name() << endl;

    return 0;
}
