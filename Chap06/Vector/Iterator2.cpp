//
// Created by LJW on 2023/06/28.
//
// vector<int>::iterator iter : 다음 원소로 이동이 가능하고, 원소의 변경이 가능한 반복자
// vector<int>::const_iterator citer : 다음 원소로 이동이 가능하고, 원소의 변경이 불가능한 반복자
// const vector<int>::iterator iter_const : 다음 원소로 이동이 불가능하고, 원소의 변경이 가능한 반복자
// const vector<int>::const_iterator citer_const : 다음 원소로 이동이 불가능하고, 원소의 변경이 불가능한 반복자
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    int arr[5] = { 10, 20, 30, 40, 50 };

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    vector<int>::iterator iter = v.begin();
    int *p = arr;
    // iter는 p처럼 동작
    cout << *iter << ", " << *p << endl;

    vector<int>::const_iterator citer = v.cbegin();
    const int *cp = arr;
    // citer는 cp처럼 동작
    cout << *citer << ", " << *cp << endl;

    const vector<int>::iterator iter_const = v.begin();
    int * const p_const = arr;
    // iter_const는 p_const처럼 동작
    cout << *iter_const << ", " << *p_const << endl;

    const vector<int>::const_iterator citer_const = v.begin();
    const int* const cp_const = arr;
    // citer_const는 cp_const처럼 동작
    cout << *citer_const << ", " << *cp_const << endl;

    return 0;
}