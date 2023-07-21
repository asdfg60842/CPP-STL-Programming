//
// Created by LJW on 2023/07/21.
//
// 원소를 수정하는 알고리즘 (Modifying Algorithms)
// f = for_each(b, e, f) : 구간 [b, e)의 모든 원소에 f(*p) 동작을 적용한다. f를 다시 되돌려 준다.
// 함수류를 순차열 모든 원소에 적용하는 알고리즘은 for_each() 와 transform()이 있다.
// for_each() 알고리즘은 출력 매개변수(out parameter)를 사용하고, transform()은 함수의 반환 값을 사용하여 사용자의 동작을 원소에 적용한다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 출력 매개변수로 사용하기 위해 &(참조)를 사용함
void Func(int& r)
{
    r += 5;
}

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    cout << "v : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    // 구간 [v.begin(), v.end())의 모든 원소에 Func(*p)를 적용한다.
    for_each(v.begin(), v.end(), Func);

    cout << "v : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}