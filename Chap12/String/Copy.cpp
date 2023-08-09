//
// Created by LJW on 8/9/23.
//
// s.copy(buf, n) : buf로 n개의 문자를 복사
// copy() 알고리즘은 '\0' 문자 없는 문자열을 복사한다.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s("Hello!");
    char buf[100];

    // copy() 는 끝에 '\0' 문자를 포함하지 않는다.
    s.copy(buf, s.length());
    buf[s.length()] = '\0';
    cout << "전체 문자열[copy(buf, n)] : " << buf << endl;

    s.copy(buf, 4, 2);
    buf[4] = '\0';
    cout << "부분 문자열[copy(buf, n, off)] : " << buf << endl;

    return 0;
}