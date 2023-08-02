//
// Created by LJW on 8/2/23.
//
#include <iostream>
#include <algorithm>
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

    cout << "v : ";
    for (vector<int>::size_type i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    // count_if() 알고리즘은 순차열의 원소를 인자로 받는 단항 조건자를 요구하므로 bind2nd<T> 어댑터를 사용하여 이항 비교 조건자를 단항 조건자로 변환한다.
    cout << "20보다 작은 원소의 개수 : " << count_if(v.begin(), v.end(), bind2nd<less<int>>(less<int>(), 20)) << endl;
    cout << "20보다 작거나 같은 원소의 개수 : " << count_if(v.begin(), v.end(), bind2nd<less_equal<int>>(less_equal<int>(), 20)) << endl;
    cout << "20보다 큰 원소의 개수 : " << count_if(v.begin(), v.end(), bind2nd<greater<int>>(greater<int>(), 20)) << endl;
    cout << "20보다 크거나 같은 원소의 개수 : " << count_if(v.begin(), v.end(), bind2nd<greater_equal<int>>(greater_equal<int>(), 20)) << endl;
    cout << "20과 같은 원소의 개수 : " << count_if(v.begin(), v.end(), bind2nd<equal_to<int>>(equal_to<int>(), 20)) << endl;
    cout << "20과 다른 원소의 개수 : " << count_if(v.begin(), v.end(), bind2nd<not_equal_to<int>>(not_equal_to<int>(), 20)) << endl;

    return 0;
}