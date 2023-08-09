// Q4. 다음은 v1 과 v2를 v3로 합병 정렬하는 코드입니다. 오류를 찾고 코드를 알맞게 고치세요.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v1;

    v1.push_back(10);
    v1.push_back(40);
    v1.push_back(50);

    vector<int> v2;

    v2.push_back(20);
    v2.push_back(30);
    v2.push_back(60);

    vector<int> v3(6);

    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    for (vector<int>::size_type i = 0; i < v3.size(); ++i)
        cout << v3[i] << endl;

    return 0;
}
