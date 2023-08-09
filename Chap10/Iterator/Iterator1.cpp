// STL의 모든 컨테이너는 정방향 반복자의 형식 X::iterator 와 X::const_iterator를 정의한다.
// 또한, 역방향 반복자 형식 X::reverse_iterator 와 X::const_reverse_iterator를 정의한다.
// X::iterator : 정방향 반복자의 내장 형식, 반복자가 가리키는 원소 읽기, 쓰기 가능
// X::const_iterator : 정방향 반복자의 내장 형식, 반복자가 가리키는 원소의 읽기 가능
// list, set, multiset, map, multimap 컨테이너의 X::iterator, X::const_iterator는 양방향 반복자이다.
// vector, deque 컨테이너의 X::iterator, X::const_iterator는 임의 접근 반복자이다.
// 컨테이너의 begin() 멤버 함수는 컨테이너 순차열의 첫 원소를 가리키는 반복자를 반환하고, end() 멤버 함수는 순차열의 끝 표시(past-the-end) 반복자를 반환한다.
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

    cout << "v[iterator 읽기 가능] : ";
    for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    cout << "v[const_iterator 읽기 가능] : ";
    for (vector<int>::const_iterator citer = v.begin(); citer != v.end(); ++citer)
        cout << *citer << " ";
    cout << endl;

    vector<int>::iterator iter = v.begin();
    vector<int>::const_iterator citer = v.begin();

    // 쓰기 가능
    *iter = 100;
    // 쓰기 불가능, 상수 iterator로 가리키는 원소 수정 불가
    // *citer = 100;

    return 0;
}
