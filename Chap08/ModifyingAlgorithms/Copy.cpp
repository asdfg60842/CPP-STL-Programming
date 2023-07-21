// 원소를 수정하는 알고리즘 (Modifying Algorithms)
// p = copy(b, e, t) : 구간 [b, e)의 원소를 [t, p)로 모두 복사한다.
// copy() 알고리즘은 구간 [b, e)의 순차열을 구간 [t, t + (e - b))의 순차열로 모두 복사한다.
// 목적지 순차열로 복사 동작을 수행할 때 두가지 모드의 복사 동작이 있다.
// 1. 덮어쓰기(Overwrite) : 모든 알고리즘의 기본 동작이다.
// 2. 삽입(Insert) : 반복자 어댑터(insert_iterator) 등을 사용하여 알고리즘을 삽입 모드로 동작하게 할 수 있다.
// copy() 알고리즘이 덮어쓰기 모드로 복사 동작을 수행하므로 [v2.begin(), v2.end())의 순차열은 구간 [v1.begin(), v1.end()) 순차열 이상의 원소를 가져야 한다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v1;

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    // size가 5인 vector 생성
    vector<int> v2(5);

    vector<int>::iterator iter;
    // 구간 [v1.begin(), v1.end())의 순차열을 [v2.begin(), v2.begin() + (v1.end() - v1.begin()))의 순차열로 복사한다.
    // copy() 알고리즘은 목적지 끝 반복자를 반환하므로 목적지 순차열은 [v2.begin(), iter)가 된다.
    iter = copy(v1.begin(), v1.end(), v2.begin());
    cout << "v2 마지막 원소 : " << *(iter - 1) << endl;

    cout << "v1 : ";
    for (vector<int>::size_type i = 0; i < v1.size(); ++i)
        cout << v1[i] << " ";
    cout << endl;

    cout << "v2 : ";
    for (vector<int>::size_type i = 0; i < v2.size(); ++i)
        cout << v2[i] << " ";
    cout << endl;

    return 0;
}

