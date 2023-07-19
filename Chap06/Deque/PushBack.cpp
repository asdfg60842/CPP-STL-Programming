// deque 멤버 함수
// dq.push_back(x) : dq의 끝에 x를 추가한다.
// deque가 vector와 다른 점은 메모리 블록 할당 정책이다. vector의 장점이자 단점인 하나의 메모리 블록 할당 정책은 배열을 정수 연산만으로 원소에 접근하고 빠르게 값을 읽고 쓸 수 있다.
// 하지만, 새로운 원소가 추가될 때 메모리 재할당과 이전 원소 복사 문제가 발생하여 성능이 저하될 수 있다.
// deque는 이처럼 vector의 단점을 해결하기 위해 여러 개의 메모리 블록을 할당하고, 사용자에게는 하나의 블록처럼 보이게 하는 정책을 사용한다.
// 원소의 추가 시 메모리가 부족할 때마다 일정한 크기의 새로운 메모리 블록을 할당하여 이전 메모리를 제거하거나 이전 원소를 복사하는 등의 연산을 수행하지 않는다.
#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main()
{
    // 100으로 초기화한 4개의 원소를 갖는 컨테이너 v
    vector<int> v(4, 100);
    // 100으로 초기화된 4개의 원소를 갖는 컨테이너 dq
    deque<int> dq(4, 100);

    // v에 200 추가
    // v는 메모리 블록을 재할당하고 이전 원소를 복사 후 새로운 원소를 추가한다.
    v.push_back(200);
    // dq에 200 추가
    // dq는 새로운 메모리 블록을 할당하고 새로운 원소를 추가한다.
    dq.push_back(200);

    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    for (deque<int>::size_type i = 0; i < dq.size(); ++i)
        cout << dq[i] << " ";
    cout << endl;

    return 0;
}
