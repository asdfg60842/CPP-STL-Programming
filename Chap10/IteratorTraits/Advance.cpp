// advance(p, n) : p 반복자를 p += n의 위치로 이동시킨다.
#include <iostream>
#include <vector>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    list<int> lt;

    lt.push_back(10);
    lt.push_back(20);
    lt.push_back(30);

    vector<int>::iterator viter(v.begin());
    list<int>::iterator liter(lt.begin());

    cout << "viter : " << *viter << endl;
    cout << "liter : " << *liter << endl;

    // viter += 2
    // viter는 임의 접근 반복자이므로 += 연산이나 -= 연산을 사용할 수 있지만, liter는 양방향 반복자이므로 advance(), distance() 함수를 사용해야 한다.
    advance(viter, 2);
    advance(liter, 2);
    cout << "viter : " << *viter << endl;
    cout << "liter : " << *liter << endl;

    // viter -= 2
    advance(viter, -2);
    advance(liter, -2);
    cout << "viter : " << *viter << endl;
    cout << "liter : " << *liter << endl;

    return 0;
}
