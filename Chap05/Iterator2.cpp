//
// Created by LJW on 2023/06/26.
//
// 반복자는 다섯가지 범주로 나뉜다.
// 입력 반복자(input iterator) : 현 위치의 원소를 한번만 읽을 수 있는 반복자.
// 출력 반복자(output iterator) : 현 위치의 원소를 한번만 쓸 수 있는 반복자.
// 순방향 반복자(forward iterator) : 입력, 출력 반복자 기능에 순방향으로 이동(++)이 가능한 재할당될 수 있는 반복자.
// 양방향 반복자(bidirectional iterator) : 순방향 반복자 기능에 역방향으로 이동(--)이 가능한 반복자.
// 임의 접근 반복자(random access iterator) : 양방향 반복자 기능에 +, -, +=, -=, [] 연산이 가능한 반복자.
// 모든 컨테이너는 양방향 반복자 이상을 제공한다. 배열 기반 컨테이너인 vector와 deque는 임의 접근 반복자를 제공한다.

// 해당 vector 반복자 예제를 deque로 변경해도 동일한 결과를 가짐.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    // 시작 원소를 가리키는 반복자
    // 임의 접근 반복자를 제공하는 vector 반복자 생성
    vector<int>::iterator iter = v.begin();

    // [] 연산자
    cout << iter[0] << endl;
    cout << iter[1] << endl;
    cout << iter[2] << endl;
    cout << iter[3] << endl;
    cout << iter[4] << endl;
    cout << endl;

    // += 연산
    iter += 2;
    cout << *iter << endl;
    cout << endl;

    // + 연산
    vector<int>::iterator iter2 = iter + 2;
    cout << *iter2 << endl;

    return 0;
}