//
// Created by LJW on 8/5/23.
//
#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Point
{
    int x;
    int y;
public:
    explicit Point(int _x = 0, int _y = 0)
        : x(_x), y(_y)
    {

    }

    void Print() const
    {
        cout << x << "," << y << endl;
    }
};

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    list<int> lt;

    lt.push_back(10);
    lt.push_back(20);
    lt.push_back(30);

    vector<int>::iterator viter = v.begin();
    list<int>::iterator liter = lt.begin();

    // 반복자는 * 연산자로 가리키는 원소르 접근할 수 있다.
    cout << "vector : " << *viter << endl;
    cout << "list : " << *liter << endl;

    cout << "vector : " << *viter << endl;
    cout << "list : " << *liter << endl;

    cout << "vector : " << *++viter << endl;
    cout << "list : " << *++liter << endl;

    cout << "vector : " << *--viter << endl;
    cout << "list : " << *--liter << endl;

    // 임의 접근 반복자는 [], +=, -=, +, -, <, >, <=, >= 연산 가능
    viter += 2;
    // 양방향 반복자는 불가능
    // liter += 2;

    cout << "=======================" << endl;

    vector<Point> ptVector;
    ptVector.push_back(Point(2, 5));

    list<Point> ptList;
    ptList.push_back(Point(2, 5));

    vector<Point>::iterator ptVIter = ptVector.begin();
    // -> 연산자로 가리키는 원소의 멤버를 접근한다.
    ptVIter->Print();

    list<Point>::iterator ptLIter = ptList.begin();
    ptLIter->Print();

    return 0;
}