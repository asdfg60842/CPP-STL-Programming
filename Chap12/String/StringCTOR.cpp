// String
// string은 vector 컨테이너와 비슷한 컨테이너이다. 시퀀스 컨테이너이며 배열 기반 컨테이너의 범주에 속한다. 표준 C++ 라이브러리는 문자와 관련된 두 컨테이너 (string, wstring)를 제공한다..
// string은 char 형식의 문자를 관리하기 위한 basic_string<char> 컨테이너의 typedef 형식이며, wstring은 유니코드 문자(wchar_t)를 관리하기 위한 basic_string<wchar_t> 컨테이너의 typedef 형식이다.
// string 컨테이너는 문자열만을 원소로 저장하고 문자열을 조작할 목적으로 만들어진 컨테이너로 이처럼 C++ 표준 컨테이너의 요구사항을 모두 만족하지 않는 컨테이너를 유사 컨테이너라 한다.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string t("Hello!");
    const char* p1 = "Hello!";
    const char* p2 = p1 + 6;

    string s1;
    string s2("Hello!");
    string s3("Hello!", 2);
    string s4(5, 'H');
    string s5(t.begin(), t.end());
    string s6(p1, p2);

    // s : string 객체
    // sz '\0' 문자열
    // c : 문자
    // n : 길이
    // iter : 반복자
    // p : 포인터
    cout << "s1() : " << s1 << endl;
    cout << "s2(sz) : " << s2 << endl;
    cout << "s3(sz, n) : " << s3 << endl;
    cout << "s4(n, c) : " << s4 << endl;
    cout << "s5(iter1, iter2) : " << s5 << endl;
    cout << "s6(p1, p2) : " << s6 << endl;

    return 0;
}
