// list 멤버 함수
// lt.pop_back() : lt의 마지막 원소를 제거한다.
// lt.pop_front() : lt의 첫 원소를 제거한다.
// lt.push_back(x) : lt의 끝에 x를 추가한다.
// lt.push_front(x) : lt의 앞에 x를 추가한다.
// list는 시퀀스 컨테이너이므로 원소의 저장 위치가 정해지며, 노드 기반 컨테이너이므로 원소가 각각의 노드에 저장된다. 각 노드는 앞쪽, 뒤쪽 노드와 연결된 형태로 이중 연결 리스트이다.
// list는 시퀀스 컨테이너가 갖는 모든 특징을 갖는다.
#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> lt;

    // 뒤쪽에 원소 추가
    lt.push_back(10);
    lt.push_back(20);
    lt.push_back(30);
    lt.push_back(40);
    lt.push_back(50);

    list<int>::iterator iter;

    for (iter = lt.begin(); iter != lt.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    // 앞쪽에 원소 추가
    lt.push_front(100);
    lt.push_front(200);

    for (iter = lt.begin(); iter != lt.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    // 마지막 원소 제거
    lt.pop_back();
    // 첫번째 원소 제거
    lt.pop_front();

    for (iter = lt.begin(); iter != lt.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    return 0;
}
