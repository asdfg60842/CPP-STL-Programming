// multimap은 map과 같은 인터페이스, 템플릿 형식, 내장 멤버 형식을 제공한다.
// 단, 중복 key를 허용하는 multimap은 [] 연산자를 제공하지 않는다.
// 아래 예는 중복 원소(key)를 구성하고 count() 와 find() 멤버 함수를 사용한 예제이다.
#include <iostream>
#include <map>
using namespace std;

int main()
{
    multimap<int, int> mm;

    mm.insert(pair<int, int>(5, 100));
    mm.insert(pair<int, int>(3, 100));
    mm.insert(pair<int, int>(8, 30));
    mm.insert(pair<int, int>(3, 40));
    mm.insert(pair<int, int>(1, 70));
    mm.insert(pair<int, int>(7, 100));
    mm.insert(pair<int, int>(8, 50));

    multimap<int, int>::iterator iter;
    for (iter = mm.begin(); iter != mm.end(); ++iter)
        cout << "(" << iter->first << ',' << iter->second << ")" << " ";
    cout << endl;

    cout << "key 3의 원소의 개수는 " << mm.count(3) << endl;

    // p = mm.find(k) : p는 k 원소의 위치를 가리키는 반복자이다.
    iter = mm.find(3);
    if (iter != mm.end())
        cout << "첫 번째 key 3에 매핑된 value : " << iter->second << endl;

    return 0;
}
