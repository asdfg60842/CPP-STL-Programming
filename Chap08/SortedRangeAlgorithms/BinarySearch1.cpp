// 정렬된 범위 알고리즘은 정렬된 순차열에서만 동작하며 기본 정렬 기준은 < 연산인 조건자 less이다.
// 정렬된 범위 알고리즘(sorted range algorithms)
// binary_search(b, e, x) : 구간 [b, e)의 순차열에 x와 같은 원소가 있는가?
// binary_search() 알고리즘은 원소를 찾기 위해 두 원소 a, b에 대해 a == b 연산을 사용하지 않는다.
// !(a < b) && !(b < a) 연산을 사용한다. 이를 간단하게 "a도 b보다 앞서 위치하고 있지 않고, b도 a보다 앞서 위치하지 않으면 같은 원소로 판단한다" 이다.
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
    v.push_back(40);
    v.push_back(50);

    if (binary_search(v.begin(), v.end(), 20))
        cout << "20 원소가 존재한다." << endl;
    else
        cout << "20 원소가 존재하지 않는다." << endl;

    return 0;
}
