// 변경 알고리즘(mutating algorithms)
// 순차열의 원소를 서로 교환하거나 이동하여 순차열 원소의 '순서'를 변경하는 알고리즘
// bool = next_permutation(b, e) : 구간 [b, e)의 순차열을 사전순 다음 순열이 되게 한다. 더 이상 다음 순열이 없는 마지막 순열이라면 bool은 false이다.
// 원소의 순서를 순열(permutation)처럼 변경할 때 next_permutation()과 prev_permutation() 알고리즘을 사용한다.
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

    cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
    cout << next_permutation(v.begin(), v.end()) << endl;
    cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
    cout << next_permutation(v.begin(), v.end()) << endl;
    cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
    cout << next_permutation(v.begin(), v.end()) << endl;
    cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
    cout << next_permutation(v.begin(), v.end()) << endl;
    cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
    cout << next_permutation(v.begin(), v.end()) << endl;
    cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
    // 마지막 순열이므로 next_permutation()은 false 반환
    cout << next_permutation(v.begin(), v.end()) << endl;
    cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;

    return 0;
}
