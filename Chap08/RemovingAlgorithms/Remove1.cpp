// 제거 알고리즘(removing algorithms)
// 제거 알고리즘은 '원소를 수정하는 알고리즘'의 특수한 형태이다.
// 원소를 실제로 제거하지 않고 논리적으로 제거(다음 원소로 덮어쓰기)하기 때문에 순차열의 size를 실제로 변경하지 않는다.
// 실제 size를 변경하려면 컨테이너의 erase() 멤버 함수를 이용하면 된다.
// p = remove(b, e, x) : 구간 [b, e)의 순차열을 x 원소가 남지 않도록 덮어쓰기로 이동한다. 알고리즘 수행 후 순차열은 [b, p)가 된다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    cout << "v : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    vector<int>::iterator iter_end;
    // 구간 [v.begin(), v.end())의 순차열에서 30 원소를 남지 않게 한다. 알고리즘 수행 후의 순차열은 [v.begin(), iter_end)가 된다.
    iter_end = remove(v.begin(), v.end(), 30);

    cout << "v : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;

    cout << "remove 후 [v.begin(), iter_end) 순차열 : ";
    for (vector<int>::iterator iter = v.begin(); iter != iter_end; ++iter)
        cout << *iter << " ";
    cout << endl;

    return 0;
}
