//
// Created by LJW on 2023/07/21.
//
// 원소를 수정하는 알고리즘 (Modifying Algorithms)
// generate(b, e, f) : 구간 [b, e)의 모든 원소를 f()로 채운다.
// generate_n(b, n, f) : 구간 [b, b + n)의 모든 원소를 f()로 채운다.
// generate() 알고리즘은 [b, e)의 모든 원소를 f()로 채우며, generate_n() 알고리즘은 [b, b + n)의 모든 원소를 f()로 채운다.
// generate() 알고리즘과 for_each(), transform() 알고리즘의 큰 차이점은 함수자의 매개변수로 순차열의 원소를 전달받지 않기 때문에 원소가 가지고 있는 원값을 활용할 수 없고, 단순히 일정한 값으로 채울 뿐이다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Integer {
    int data;

public:
    explicit Integer(int d = 0)
        : data(d)
    {

    }

    int operator()()
    {
        return data++;
    }
};

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    cout << "v : ";
    for(vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    // 구간 [v.begin(), v.end())의 원소를 Integer(1) 함수자로 정수를 1씩 증가하여 채운다.
    generate(v.begin(), v.end(), Integer(1));
    cout << "v : ";
    for(vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    // 구간 [v.begin(), v.end())의 원소를 Integer(100) 함수자로 정수를 1씩 증가하여 채운다.
    generate(v.begin(), v.end(), Integer(100));
    cout << "v : ";
    for(vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    // 구간 [v.begin(), v.begin() + 3)의 원소를 Integer(1) 함수자로 정수를 1씩 증가하여 채운다.
    generate_n(v.begin(), 3, Integer(1));
    cout << "v : ";
    for(vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}