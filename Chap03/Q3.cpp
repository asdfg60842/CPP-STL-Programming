//
// Created by LJW on 2023/06/25.
//
// Q3. 다음 Adder 클래스의 객체가 add 일 때 두 정수의 합을 반환하는 Adder 클래스를 작성하세요.
#include <iostream>
using namespace std;

class Adder
{
public:
    int operator()(int left, int right) const
    {
        return left + right;
    }
};

int main()
{
    Adder add;
    int sum = add(10, 20);

    cout << "sum = " << sum << endl;

    return 0;
}