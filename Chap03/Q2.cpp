//
// Created by LJW on 2023/06/25.
//
// Q2. 다음 Equal 클래스의 객체가 cmp 일 때 두 정수가 같으면 true, 아니면 false를 반환하는 Equal 클래스를 작성하세요.
#include <iostream>
using namespace std;

class Equal
{
public:
    bool operator()(int left, int right) const
    {
        return left == right;
    }
};

int main()
{
    Equal cmp;

    if (cmp(10, 20))
        cout << "같다" << endl;
    else
        cout << "다르다" << endl;

    return 0;
}