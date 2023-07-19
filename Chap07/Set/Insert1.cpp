// set 컨테이너는 연관 컨테이너 중 단순한 컨테이너로 key라 불리는 원소(value)의 집합으로 이뤄진 컨테이너이다.
// 모든 연관 컨테이너는 노드 기반 컨테이너이며 균형 이진 트리로 구현되므로 균형 이진 트리의 모든 특징을 가진다.
// 연관 컨테이너는 균형 이진 트리를 사용하므로 찾기 연산(find(), lower_bound(), upper_bound(), equal_range(), count())에 뛰어난 성능(로그 시간)을 보이며 insert() 멤버 함수를 이용한 로그 삽입도 로그 시간 복잡도를 보인다.
// 연관 컨테이너는 정렬 기준이 있으므로 insert()에 의해 삽입된 원소는 자동 정렬된다.
// 정렬 기준은 템플릿 매개변수에 지정할 수 있으며, 기본 정렬 기준은 less 조건자이다.

// set 멤버 함수
// pr = s.insert(k) : s 컨테이너에 k를 삽입한다. pr은 삽입한 원소를 가리키는 반복자와 성공 여부의 bool 값인 pair 객체이다.
#include <iostream>
#include <set>
using namespace std;

int main()
{
    // 정수 원소를 저장하는 기본 정렬 기준이 less인 빈 컨테이너 생성
    // less는 < 연산의 결과로 모든 노드의 부모 노드는 왼쪽 자식 노드보다 크고, 오른쪽 노드 자식보다 작다.
    set<int> s;

    // 랜덤으로 원소 (key) 를 삽입
    s.insert(50);
    s.insert(30);
    s.insert(80);
    s.insert(40);
    s.insert(10);
    s.insert(70);
    s.insert(90);

    // 기본 정렬 기준이 less인 set의 양방향 반복자
    // 반복자의 탐색 순서는 inorder 이진 트리 탐색을 사용한다.
    set<int>::iterator iter;

    for (iter = s.begin(); iter != s.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    // 중복된 원소 (key) 를 삽입한다.
    // 실패 - 반환값으로 pair 객체를 반환하며, first와 second 는 각각 삽입된 원소(key)의 위치를 가리키는 반복자와 성공(true), 실패(false)를 나타내는 bool 값이다.
    s.insert(50);
    s.insert(50);

    for (iter = s.begin(); iter != s.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    return 0;
}
