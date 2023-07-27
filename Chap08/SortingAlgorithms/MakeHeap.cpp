// 자료구조 힙은 '트리 내의 모든 원소가 부모 노드보다 큰 값(혹은 작은 값)을 갖는 완전 이진 트리' 라 정의된다.
// 힙에서 루트(root) 노드는 항상 가장 작은 값(혹은 가장 큰 값)을 갖는다.
// 힙의 연산은 크게 추가 와 제거 연산으로 나뉘어진다.
// 추가 연산은 완전 이진 트리 가장 끝에 원소를 추가한 후 힙의 규칙을 깨지 않게 힙을 유지한다.
// 제거 연산은 힙의 규칙을 깨지 않고 루트를 제거한다.
// 정렬 알고리즘(sorting algorithms)
// make_heap(b, e) : 힙을 생성한다. 구간 [b, e)의 순차열을 힙 구조로 변경한다.
// make_heap(b, e, f) : 힙을 생성한다. 구간 [b, e)의 순차열을 힙 구조로 변경한다. f는 조건자로 비교에 사용한다.
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
    v.push_back(60);

    cout << "v : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    make_heap(v.begin(), v.end());
    cout << "v[힙 생성] : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}
