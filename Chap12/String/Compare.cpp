//
// Created by LJW on 8/9/23.
//
// s.compare(s2) : s와 s2를 비교
// s1 > s2 : 0보다 큰 값을 반환
// s1 == s2 : 0 반환
// s1 < s2 : 0보다 작은 값을 반환
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1("ABCDE");
    string s2("AKABC");
    const char* sz = "AKABC";

    // s : string 객체
    // sz : '\0' 문자열
    // off : 시작 위치
    // n : 길이
    cout << "s1.compare(s) : " << s1.compare(s2) << endl;
    cout << "s1.compare(off, n, s) : " << s1.compare(2, 3, s2) << endl;
    cout << "s1.compare(off, n, s, off2, n2) : " << s1.compare(0, 3, s2, 2, 3) << endl;
    cout << "s1.compare(sz) : " << s1.compare(sz) << endl;
    cout << "s1.compare(off, n, sz) : " << s1.compare(2, 3, sz) << endl;
    cout << "s1.compare(off, n, sz, n2) : " << s1.compare(0, 1, sz, 1) << endl;

    return 0;
}