//
// Created by LJW on 2023/07/21.
//
// 원소를 수정하는 알고리즘 (Modifying Algorithms)
// p = merge(b, e, b2, e2, t, f) : 정렬된 순차열 [b, e)과 [b2, e2)를 [t, p)로 합병 정렬한다. 이때 비교는 f를 사용한다.
// 합병하려는 두 순차열이 특정 정렬 기준에 의해 정렬된 상태라면 일반 버전의 merge() 알고리즘은 기본적으로 오름차순 정렬 기준(less)을 전제로 동작하기 때문에 사용 불가능하다.
// 이럴 경우 조건자 버전 merge(b, e, b2, e2, t, f) 알고리즘을 사용하여 특정 정렬 기준을 설정할 수 있다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<typename T>
struct Greater
{
    bool operator()(const T& left, const T& right)
    {
        return left > right;
    }
};

int main()
{
    vector<int> v1;

    v1.push_back(80);
    v1.push_back(60);
    v1.push_back(50);
    v1.push_back(30);
    v1.push_back(10);

    vector<int> v2;

    v2.push_back(70);
    v2.push_back(40);
    v2.push_back(20);

    // size 10인 vector 생성
    vector<int> v3(10);
    vector<int>::iterator iter_end;
    // STL greater 사용
    // iter_end = merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin(), greater<int>());

    // v1과 v2의 순차열이 greater 정렬 기준으로 정렬되어 있으므로 합병 정렬 기준을 사용자 Greater 조건자로 만들고 설정한다.
    iter_end = merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin(), Greater<int>());

    cout << "v1 : ";
    for (vector<int>::size_type i = 0; i < v1.size(); ++i)
        cout << v1[i] << " ";
    cout << endl;

    cout << "v2 : ";
    for (vector<int>::size_type i = 0; i < v2.size(); ++i)
        cout << v2[i] << " ";
    cout << endl;

    cout << "v3(합병 순차열) : ";
    for (vector<int>::size_type i = 0; i < v3.size(); ++i)
        cout << v3[i] << " ";
    cout << endl;

    return 0;
}