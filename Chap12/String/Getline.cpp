//
// Created by LJW on 8/9/23.
//
// getline(in, s) : 스트림에서 s로 한 줄을 읽음.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2;

    cout << "두 문자열 입력(공백 문자 가능) : " << endl;
    getline(cin, s1);
    // 세번째 인자에 종료 문자 지정 가능
    getline(cin, s2, '\n');
    cout << "s1 : " << s1 << endl;
    cout << "s2 : " << s2 << endl;

    return 0;
}