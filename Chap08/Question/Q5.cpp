//
// Created by LJW on 2023/07/31.
//
// Q5. 다음 vector1의 원소를 vector2에 복사하고 vector1과 vector2의 원소의 합을 vector3에 출력하는 코드를 작성하세요.
// v1 10, 20, 30, 40, 50, 60, 70, 80, 90, 100
// v2 10, 20, 30, 40, 50, 60, 70, 80, 90, 100
// v3 20, 40, 60, 80, 100, 120, 140, 160, 180, 200
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Sum
{
    int operator()(int left, int right) const
    {
        return left + right;
    }
};

int main()
{
    vector<int> v1;

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);
    v1.push_back(60);
    v1.push_back(70);
    v1.push_back(80);
    v1.push_back(90);
    v1.push_back(100);

    vector<int> v2(10);
    vector<int>::iterator iter;
    iter = copy(v1.begin(), v1.end(), v2.begin());

    vector<int> v3(10);
    transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), Sum());

    cout << "v1 : ";
    for (vector<int>::size_type i = 0; i < v1.size(); ++i)
        cout << v1[i] << " ";
    cout << endl;

    cout << "v2 : ";
    for (vector<int>::size_type i = 0; i < v2.size(); ++i)
        cout << v2[i] << " ";
    cout << endl;

    cout << "v3 : ";
    for (vector<int>::size_type i = 0; i < v3.size(); ++i)
        cout << v3[i] << " ";
    cout << endl;

    return 0;
}