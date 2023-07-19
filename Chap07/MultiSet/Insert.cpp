// multiset은 템플릿, 형식, 주요 인터페이스, 멤버의 형식이 모두 set과 같다.
// set과는 다르게 key가 중복으로 저장이 가능하다.
// multiset의 insert()는 key(원소)가 중복 저장될 수 있기 때문에 set처럼 저장 위치와 삽입 성공 여부의 bool 값을 반환하는 pair 객체가 아닌 저장된 위치만을 가리키는 반복자를 반환한다.
#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> ms;
    multiset<int>::iterator iter;

    ms.insert(50);
    ms.insert(30);
    ms.insert(80);
    // 80 중복
    ms.insert(80);
    // 30 중복
    ms.insert(30);
    ms.insert(70);
    iter = ms.insert(10);

    cout << "iter의 원소 : " << *iter << endl;

    for (iter = ms.begin(); iter != ms.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    return 0;
}