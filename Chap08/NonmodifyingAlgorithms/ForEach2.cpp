//
// Created by LJW on 2023/07/21.
//
// for_each() 알고리즘의 함수류를 함수가 아닌 함수자로 변경하면 다양한 출력 패턴을 구현할 수 있다.
// 일반 함수는 부가적인 정보를 전달할 수 없지만 함수자는 객체이므로 상태 변수를 사용하여 부가적인 정보를 전달하고 변경할 수 있기 때문이다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class PrintFunctor
{
    char fmt;

public:
    explicit PrintFunctor(char c = ' ')
        : fmt(c)
    {

    }

    void operator()(int n) const
    {
        cout << n << fmt;
    }
};

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    // 원소 구분을 ' ' 로
    for_each(v.begin(), v.end(), PrintFunctor());
    cout << endl;

    // 원소 구분을 ',' 로
    for_each(v.begin(), v.end(), PrintFunctor(','));
    cout << endl;

    // 원소 구분을 '\n' 로
    for_each(v.begin(), v.end(), PrintFunctor('\n'));
    cout << endl;

    return 0;
}