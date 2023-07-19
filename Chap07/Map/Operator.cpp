//
// Created by LJW on 2023/07/19.
//
// map은 [] 연산자를 사용하여 쉽게 원소(key, value)를 추가하거나 value 값을 갱신할 수 있다.
// key에 해당하는 원소가 map에 없다면 추가 연산을 수행한다.
// key에 해당하는 원소가 map에 있다면 key에 해당하는 원소의 value를 갱신하는 연산을 수행한다.
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, int> m;

    // [] 연산자 사용하여 원소 추가
    // key 5, value 100의 원소를 m에 삽입한다.
    m[5] = 100;
    m[3] = 100;
    m[8] = 30;
    m[4] = 40;
    m[1] = 70;
    m[7] = 100;
    m[9] = 50;

    map<int, int>::iterator iter;
    for (iter = m.begin(); iter != m.end(); ++iter)
        cout << "(" << iter->first << ',' << iter->second << ")" << " ";
    cout << endl;

    // key 5의 value를 200으로 갱신한다.
    m[5] = 200;

    for (iter = m.begin(); iter != m.end(); ++iter)
        cout << "(" << iter->first << ',' << iter->second << ")" << " ";
    cout << endl;

    return 0;
}