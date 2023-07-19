//
// Created by LJW on 2023/06/26.
//
// 할당기(Allocator)
// 컨테이너의 메모리 할당 정책을 캡슐화한 클래스 객체로 모든 컨테이너는 자신만의 기본 할당기를 가지고 있다.
// 사용자 정의 할당기는 사용자가 직접 메모리 할당 방식을 제어할 수 있게 한다.
// 다중 스레드에 최적화되고 안전한 사용자 메모리 할당 모델이 필요하거나 사용자가 컨테이너에 맞는 메모리 할당 모델을 설계하거나 특정 구현 환경에서 최적화된 메모리 모델을 구축할 때 등에 사용된다

// 모든 컨테이너는 템플릿 매개변수에 할당기를 인자로 받는다. 기본할당기는 allocator<T>이며, 컨테이너는 템플릿 매개변수에 디폴트 매개변수 값으로 기본 할당기를 지정한다.
#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    // vector<typename T, typename Alloc = allocator<T>>
    // vector<int> 와 같음.
    vector<int, allocator<int>> v;
    v.push_back(10);
    cout << *v.begin() << endl;

    // set<typename T, typename Pred = less<T>, typename Alloc = allocator<T>>
    // set<int> 와 같음.
    set<int, less<int>, allocator<int>> s;
    s.insert(10);
    cout << *s.begin() << endl;

    return 0;
}