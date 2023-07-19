//
// Created by LJW on 2023/07/02.
//
// list 와 vector의 삽입 동작의 차이
#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
    vector<int> v;
    list<int> lt;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    lt.push_back(10);
    lt.push_back(20);
    lt.push_back(30);
    lt.push_back(40);
    lt.push_back(50);

    vector<int>::iterator viter = v.begin();
    ++viter;

    list<int>::iterator liter = lt.begin();
    ++liter;

    // v에 600을 삽입하면 다음 원소부터 모두 뒤로 밀려나며 할당된 메모리 공간이 부족하면 메모리 재할당이 발생한다.
    viter = v.insert(viter, 600);

    // lt는 원소(노드) 하나만 삽입하므로 속도가 빠르며 반복자들이 무효화되지 않는다.
    liter = lt.insert(liter, 600);

    cout << "vector : " << *viter << endl;
    cout << "list : " << *liter << endl;

    cout << "vector : ";
    for (viter = v.begin(); viter != v.end(); ++viter)
        cout << *viter << " ";
    cout << endl;

    cout << "list : ";
    for (liter = lt.begin(); liter != lt.end(); ++liter)
        cout << *liter << " ";
    cout << endl;

    return 0;
}