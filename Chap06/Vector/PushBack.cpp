// vector 멤버 함수
// v.push_back(x) : v의 끝에 x를 추가한다.
// vector는 앞쪽에는 원소를 추가/제거 할 수 없으며, 뒤쪽에만 추가/제거가 가능하다.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    // v.size()는 unsigned int 타입을 반환하기 때문에 int 타입인 i 사용시 경고 발생
    // 따라서 vector 내에 typedef된 멤버 형식을 사용하는 것이 좋다.
    for (int i = 0; i < v.size(); ++i)
        cout << v[i] << endl;

    return 0;
}
