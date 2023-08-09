// 삽입 반복자는 순차열에 원소를 삽입(insert)할 수 있게 반복자를 변환하는 반복자 어댑터이다.
// 모든 알고리즘은 기본적으로 덮어쓰기 모드로 동작하는데, 삽입 반복자를 사용하면 알고리즘이 삽입 모드로 동작하게 할 수 있다.
// 덮어쓰기 모드는 원소의 개수가 변하지 않지만, 삽입 모드는 원소의 개수가 늘어난다.
// inserter() : insert_iterator 객체를 생성한다. insert_iterator 객체는 컨테이너의 insert() 멤버 함수를 호출해 삽입 모드로 동작하게 한다.
// back_inserter() : back_insert_iterator 객체를 생성한다. back_insert_iterator 객체는 컨테이너의 push_back() 멤버 함수를 호출해 뒤쪽에 추가(삽입)하도록 한다.
// front_inserter() : front_insert_iterator 객체를 생성한다. front_insert_iterator 객체는 컨테이너의 push_front() 멤버 함수를 호출해 앞쪽에 추가(삽입)하도록 한다.
// 모든 컨테이너는 insert() 멤버 함수를 제공하므로 inserter()를 사용할 수 있지만, 시퀀스 컨테이너인 vector, deque, list만이 back_inserter()를 사용할 수 이쏙, deque, list만이 front_insert_iterator()를 사용할 수 있다.
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    vector<int> v1;

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    vector<int> v2;

    // copy() 알고리즘은 덮어쓰기 모드로 동작하므로 inserter()를 사용하지 않는다면 v2의 size가 0이므로 실행 오류가 발생한다.
    // copy(v1.begin(), v1.end(), v2.begin());
    // insert_iterator<vector<int>> insert(v2, v2.begin());
    // copy(v1.begin(), v1.end(), insert);

    // v2.begin() 반복자를 v2의 insert() 멤버 함수를 호출하는 삽입 반복자로 변환한다.
    copy(v1.begin(), v1.end(), inserter<vector<int>>(v2, v2.begin()));

    cout << "v1 : ";
    for (vector<int>::iterator iter = v1.begin(); iter != v1.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    cout << "v2 : ";
    for (vector<int>::iterator iter = v2.begin(); iter != v2.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    return 0;
}
