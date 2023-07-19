//
// Created by LJW on 2023/06/23.
//
// 배열 인덱스 연산자 오버로딩
// 일반적으로 많은 객체를 저장하고 관리하는 객체(컨테이너 객체)에 사용된다.
#include <iostream>
using namespace std;

class Array
{
    int *arr;
    int size;
    int capacity;

    // 복사생성자, 복사대입연산자 생략
public:
    Array(int cap = 100)
        : arr(0), size(0), capacity(cap)
    {
        arr = new int[capacity];
    }

    ~Array()
    {
        delete [] arr;
    }

    void Add(int data)
    {
        if (size < capacity)
            arr[size++] = data;
    }

    int Size() const
    {
        return size;
    }

    // operator[] 함수는 쓰기 연산도 제공해야하므로 아래와 같이 const 메서드, 비 const 메서드 모두 제공해야함.
    // const 메서드
    int operator[](int idx) const
    {
        return arr[idx];
    }

    // 비 const 메서드
    int& operator[](int idx)
    {
        return arr[idx];
    }
};

int main()
{
    Array ar(10);
    ar.Add(10);
    ar.Add(20);
    ar.Add(30);

    // ar.operator[](int) 호출
    cout << ar[0] << endl;
    cout << endl;

    // 상수형 객체에 복사 생성
    const Array& ar2 = ar;

    // ar2.operator[](int) 호출
    cout << ar2[0] << endl;
    cout << endl;

    ar[0] = 100;

    // 상수 객체를 반환하므로 값을 대입할 수 없음.
    // ar2[0] = 100;

    return 0;
}