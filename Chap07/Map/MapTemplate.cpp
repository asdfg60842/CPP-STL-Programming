// map 컨테이너는 연관 컨테이너 중 자주 사용하는 컨테이너로 원소를 key와 value의 쌍으로 저장한다.
// set은 원소로 key 하나만을 저장하지만, map은 원소로 key와 value의 쌍(pair 객체)을 저장한다.
// map도 연관 컨테이너이므로 set과 같은 인터페이스 멤버 함수를 제공하며, 템플릿 형식과 내장 멤버 형식만이 약간의 차이를 보인다.
// Key 와 Value는 map 컨테이너 원소의 key와 value의 형식이다. Pred는 map의 정렬 기준인 조건자이고, 기본 조건자는 less다.
// template <
//  typename Key,
//  typename Value,
//  typename Pred = less<Key>,
//  typename Allocator = allocator<pair <const Key, Value>>
// >
// class map
// 연산자
// m[k] = v : m 컨테이너에 원소(k, v)를 추가하거나 key에 해당하는 원소의 value를 v로 갱신한다.
#include <iostream>
#include <map>
using namespace std;

int main()
{
    // greater 정렬 기준의 key : int, value : string 타입의 컨테이너 m 생성
    map<int, string, greater<int>> m;

    // [] 연산자 사용하여 원소 추가
    m[5] = "five";
    m[3] = "three";
    m[8] = "eight";
    m[4] = "four";
    m[1] = "one";
    m[7] = "seven";
    m[9] = "nine";

    map<int, string, greater<int>>::iterator iter;
    for (iter = m.begin(); iter != m.end(); ++iter)
        cout << "(" << iter->first << ',' << iter->second << ")" << " ";
    cout << endl;

    // key와 매핑된 value를 출력
    cout << m[9] << " ";
    cout << m[8] << " ";
    cout << m[7] << " ";
    cout << m[5] << " ";
    cout << m[4] << " ";
    cout << m[3] << " ";
    cout << m[1] << " ";

    return 0;
}
