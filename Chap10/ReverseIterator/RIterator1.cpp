// X::reverse_iterator 와 X::const_reverse_iterator은 컨테이너에 정의된 역방향 반복자 형식이다.
// X::reverse_iterator : 역방향 반복자의 내장 형식, 반복자가 가리키는 원소 읽기, 쓰기 가능
// X::const_reverse_iterator : 역방향 반복자의 내장 형식, 반복자가 가리키는 원소의 읽기 가능
// list, set, multiset, map, multimap 컨테이너의 X::reverse_iterator와 X::const_reverse_iterator는 양방향 반복자이다.
// vector, deque 컨테이너의 X::reverse_iterator와 X::const_reverse_iterator는 임의 접근 반복자이다.
// 컨테이너의 rbegin() 멤버 함수는 컨테이너의 순차열의 끝 표시(past-the-end) 반복자이고, rend() 멤버 함수는 순차열의 첫 원소를 가리키는 반복자를 반환한다.
// X::reverse_iterator 반복자는 역방향 반복자로 X::iterator 반복자와 반대로 동작한다.

// 역방향 반복자는 반복자가 가리키는 원소와 실제 값이 다르다.
// 역방향 반복자는 가리키는 다음 원소의 값을 참조한다. 이것은 정방향 반복자로 표현한 순차열과 역방향 반복자로 표현한 순차열이 서로 같도록 하기 위해서이다.
// 순차열이 반개 구간을 사용하므로 만약 정방향 반복자로 표현된 순차열을 역방향 반복자로 변환하면 순차여르이 원소는 서로 달라진다.
#include <iostream>
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

    cout << "v[iterator] : ";
    // ++iter 반복자가 순차열의 정방향으로 이동
    for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    cout << "v[reverse_iterator] : ";
    // ++riter 반복자가 순차열의 역방향으로 이동
    for (vector<int>::reverse_iterator riter = v.rbegin(); riter != v.rend(); ++riter)
        cout << *riter << " ";
    cout << endl;

    return 0;
}
