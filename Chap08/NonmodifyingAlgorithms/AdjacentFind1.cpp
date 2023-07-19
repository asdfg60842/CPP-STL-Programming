// 원소를 수정하지 않는 알고리즘(Nonmodifying Algorithms)
// p = adjacent_find(b, e) : p는 구간 [b, e)의 원소 중 *p == *(p + 1)인 첫 원소를 가리키는 반복자
// 찾기 관련 알고리즘은 찾는 원소를 발견하지 못하면 찾는 구간의 끝 반복자를 반환한다.
// 컨터이너의 끝 표시(past-the-end) 반복자가 아니다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(30);
    v.push_back(40);
    v.push_back(40);
    v.push_back(50);

    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    vector<int>::iterator iter;
    // 구간 [v.begin(), v.end()) 에서 현재 원소와 다음 원소가 같아지는 첫 원소 반복자를 반환
    iter = adjacent_find(v.begin(), v.end());

    // 같은 원소가 없다면 구간의 끝 반복자를 반환
    if (iter != v.end())
        cout << *iter << endl;

    for (; iter != v.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    return 0;
}

