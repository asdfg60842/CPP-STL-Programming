// Q2. STL의 less<T> 함수 객체와 같은 동작을 하는 사용자 Less<T> 함수 객체를 구현하세요. 단, Less<T>는 어댑터 적용이 가능해야 합니다.
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

template<typename T>
struct Less: public binary_function<T, T, T>
{
    bool operator()(const T& left, const T& right) const
    {
        return left < right;
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

    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    sort(v.begin(), v.end(), Less<int>());

    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    cout << "30보다 작은 원소의 개수 : " << count_if(v.begin(), v.end(), bind2nd<Less<int>>(Less<int>(), 30)) << endl;

    return 0;
}
