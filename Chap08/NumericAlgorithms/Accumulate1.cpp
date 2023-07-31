// 수치 알고리즘(numeric algorithms)
// x2 = accumulate(b, e, x) : x2는 x를 초깃값으로 시작한 구간 [b, e) 순차열 원소의 합이다.
#include <iostream>
#include <vector>
#include <numeric>
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
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    cout << accumulate(v.begin(), v.end(), 0) << endl;
    cout << accumulate(v.begin(), v.end(), 100) << endl;

    return 0;
}
