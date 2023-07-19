//
// Created by LJW on 2023/07/02.
//
// list 멤버 함수
// lt.merge(lt2) : lt2를 lt로 합병 정렬한다(오름차순)
// 합병은 두 list를 하나의 정렬된 list로 합병하므로 합병할 두 list는 정렬되어 있어야 한다.
// lt2의 원소는 합병되어 사라진다.
// 만약 정렬 기준이 틀렸거나 합병한 list가 정렬되어 있지 않았다면 merge() 멤버 함수는 실패하며 오류가 발생한다.
#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> lt1;
    list<int> lt2;

    lt1.push_back(10);
    lt1.push_back(20);
    lt1.push_back(30);
    lt1.push_back(40);
    lt1.push_back(50);

    lt2.push_back(25);
    lt2.push_back(35);
    lt2.push_back(60);

    list<int>::iterator iter;
    cout << "lt1 : ";
    for (iter = lt1.begin(); iter != lt1.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    cout << "lt2 : ";
    for (iter = lt2.begin(); iter != lt2.end(); ++iter)
        cout << *iter << " ";
    cout << endl << "==============" << endl;

    // lt2를 lt1으로 합병 정렬.
    lt1.merge(lt2);

    cout << "lt1 : ";
    for (iter = lt1.begin(); iter != lt1.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    cout << "lt2 : ";
    for (iter = lt2.begin(); iter != lt2.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    return 0;
}