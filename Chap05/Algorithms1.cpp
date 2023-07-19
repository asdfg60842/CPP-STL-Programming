//
// Created by LJW on 2023/06/26.
//
// 알고리즘(Algorithms)
// 정렬, 삭제, 검색, 연산 등을 해결하는 일반화된 방법을 제공하는 함수 템플릿.
// 알고리즘은 한 쌍의 반복자([begin, end))를 필요로 하며 알고리즘 대부분은 순방향 반복자를 요구하지만, 몇몇 알고리즘은 임의 접근 반복자를 요구한다.

// STL 알고리즘은 일곱가지 범주로 분류한다.
// 원소를 수정하지 않는 알고리즘(nonmodifying algorithms)
// 원소르 수정하는 알고리즘(modifying algorithms)
// 제거 알고리즘(removing algorithms)
// 변경 알고리즘(mutating algorithms)
// 정렬 알고리즘(sorting algorithms)
// 정렬된 범위 알고리즘(sorted range algorithms)
// 수치 알고리즘(numeric algorithms)
// STL 알고리즘은 일반적이다. 일반적이라는 의미는 특정 컨테이너나 원소 타입에 종속적이지 않다는 뜻이다.
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

    vector<int>::iterator iter;

    // [begin, end) 에서 20 찾기
    iter = find(v.begin(), v.end(), 20);
    cout << *iter << endl;

    // [begin, end) 에서 100 찾기
    iter = find(v.begin(), v.end(), 100);
    // 100 이 없으면 iter는 끝을 표시하는 v.end()와 같다.
    if (iter == v.end())
        cout << "100이 없음" << endl;

    return 0;
}