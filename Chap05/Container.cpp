// 컨테이너(Container)
// 객체를 저장하는 객체로 컬렉션 혹은 자료구조라고도 한다. 같은 타입을 저장, 관리할 목적으로 만들어진 클래스이다.
// @ 표준 시퀀스 컨테이너(standard sequence container)
// - 컨테이너 원소가 자신만의 삽입 위치(순서)를 가지는 컨테이너(vector, deque, list : 선형적), 삽입 순서에 따라 원소의 위치가 결정되고 바뀌지 않음. push_back(), pop_back, empty, size 등의 인터페이스 제공한다.
// @ 표준 연관 컨테이너(standard associative container)
// - 저장 원소가 삽입 순서와 다르게 특정 정렬 기준에 의해 자동 정렬되는 컨테이너(set, multiset, map, multimap : 비선형적), 삽입 순서와 상관없이 정렬 기준에 따라 원소 위치가 결정됨.
// @ 배열 기반 컨테이너(array-based-container)
// - 데이터 여러 개가 하나의 메모리 단위에 저장된다(vector, deque). operator[] 연산자를 이용해 일반 배열처럼 컨테아너 원소에 접근이 가능하다.
// @ 노드 기반 컨테이너(node-based-container)
// - 데이터 하나를 하나의 메모리 단위에 저장된다(list, set, multiset, map, multimap).
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // int 타입(정수)을 저장하는 컨테이너 v 생성
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    // v[i]는 i번째 index의 정수 반환
    for (unsigned int i = 0; i < v.size(); ++i)
        cout << v[i] << endl;

    return 0;
}
