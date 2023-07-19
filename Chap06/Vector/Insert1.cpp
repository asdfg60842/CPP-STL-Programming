//
// Created by LJW on 2023/06/28.
//
// vector 멤버 함수
// q = v.insert(p, x) : p가 가리키는 위치에 x 값을 삽입한다. q는 삽입한 원소를 가리키는 반복자다.
// 단, '삽입'하면 반복자가 가리키는 위치의 원소 자리에 삽입된다. 삽입 위치부터 뒤에 있는 원소는 뒤로 밀려난다.
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

    vector<int>::iterator iter = v.begin() + 2;
    vector<int>::iterator  iter2;

    // iter가 가리키는 위치에 정수 100을 삽입
    // iter2는 삽입한 정수를 가리키는 반복자
    iter2 = v.insert(iter, 100);

    for (iter = v.begin(); iter != v.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    cout << "iter2 : " << *iter2 << endl;

    return 0;
}