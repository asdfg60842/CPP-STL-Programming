//
// Created by LJW on 8/5/23.
//
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

    vector<int>::iterator iter = v.begin();
    vector<int>::const_iterator citer = v.begin() + 1;

    // 반복자 자체가 const 객체
    const vector<int>::iterator const_iter = v.begin() + 2;
    // 반복자가 가리키는 원소가 const 객체
    const vector<int>::const_iterator const_citer = v.begin() + 3;

    // iter
    // 가리키는 원소 변경, 반복자 변경
    *iter = 100;
    ++iter;

    // citer
    // 가리키는 원소 변경 불가능, 반복자 변경 가능
    // *citer = 200;
    ++citer;

    // const_iter
    // 가리키는 원소 변경 가능, 반복자 변경 불가능
    *const_iter = 300;
    // ++const_iter;

    // const_citer
    // 가리키는 원소 변경 불가능, 반복자 변경 불가능
    // *const_citer = 400;
    // ++const_citer;

    return 0;
}