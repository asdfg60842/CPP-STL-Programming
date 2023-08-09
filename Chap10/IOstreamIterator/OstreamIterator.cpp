// 입/출력 스트림 반복자는 스트림과 연결된 반복자로 알고리즘이 스트림에 읽고 쓸 수 있게 하는 반복자 어댑터이다.
// ostream_iterator<T> : 출력 스트림과 연결된 반복자로 T 형식의 값을 스트림에 쓸 수 있다.
#include <iostream>
#include <algorithm>
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
    v.push_back(40);
    v.push_back(50);

    cout << "v : ";
    // cout 과 연결된 정수(int)를 출력하는 반복자를 생성한다.
    copy(v.begin(), v.end(), ostream_iterator<int>(cout));
    cout << endl;

    cout << "v : ";
    // cout 과 연결된 반복자를 생성하되 출력 끝 패턴을 ", "로 한다.
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, ", "));
    cout << endl;

    list<int> lt;

    lt.push_back(100);
    lt.push_back(200);
    lt.push_back(300);

    cout << "lt + v : ";
    // lt 원소와 v원소의 합을 출력한다.
    transform(lt.begin(), lt.end(), v.begin(), ostream_iterator<int>(cout, " "), plus<int>());
    cout << endl;

    return 0;
}
