//
// Created by LJW on 8/5/23.
//
// 사용자 알고리즘을 구현할 때 STL 알고리즘처럼 일반화하면서도 반복자 종류의 특징에 따라 효율적인 동작을 하는 알고리즘을 구현하려면 STL이 제공하는 반복자 특성을 활용해야 한다.
// iterator_traits은 모든 반복자가 제공하는 다섯 가지 정보인 iterator_category, value_type, difference_type, pointer, reference를 하나의 템플릿 클래스로 제공하는 반복자의 공통된 인터페이스이다.
// iterator_traits을 이용해 반복자가 지원하는 정보를 확인하여 반복자에 맞춰 알고리즘을 효율적으로 구현할 수 있다.
#include <iostream>

// STL은 각 반복자 형식을 확인하기 위한 특징 정보 클래스인 iterator_traits 제공
template<class Iter>
struct iterator_traits
{
    typedef typename Iter::iterator_category iterator_category;
    typedef typename Iter::value_type value_type;
    typedef typename Iter::difference_type difference_type;
    typedef typename Iter::pointer pointer;
    typedef typename Iter::reference reference;
};

// STL 은 각 반복자를 구분하기 위한 반복자 태그 제공
struct input_iterator_tag {
};

struct output_iterator_tag {
};

struct forward_iterator_tag:public input_iterator_tag {
};

struct bidirectional_iterator_tag:public forward_iterator_tag {
};

struct random_access_iterator_tag:public bidirectional_iterator_tag {
};

template<typename T>
class Vector
{
public:
    // Vector 반복자
    class Iterator
    {
    public:
        // STL 반복자는 아래 자신만의 다섯가지 정보를 가짐
        typedef random_access_iterator_tag iterator_category;
        typedef T value_type;
        typedef int difference_type;
        typedef T* pointer;
        typedef T& reference;

        void operator+=(int)
        {

        }
    };
    void Push_back(const T& data)
    {

    }

    Iterator Begin()
    {
        return Iterator();
    }
};

template<typename T>
class List
{
public:
    // List의 반복자
    class Iterator
    {
    public:
        // STL 반복자는 아래 자신만의 다섯가지 정보를 가짐
        typedef bidirectional_iterator_tag iterator_category;
        typedef T value_type;
        typedef int difference_type;
        typedef T* pointer;
        typedef T& reference;

        void operator++()
        {

        }
    };

    void Push_back(const T& data)
    {

    }

    Iterator Begin()
    {
        return Iterator();
    }
};

// 양방향 반복자 Advance() 오버로딩 버전
template<typename Iter>
void _Advance(Iter& iter, int n, bidirectional_iterator_tag category_tag)
{
    for (int i = 0; i < n; ++i)
        ++iter;
    std::cout << "양방향 반복자 버전의 advance() ++iter 실행" << std::endl;
}

// dladml wjqrms qksqhrwk Advance() 오버로딩 버전
template<typename Iter>
void _Advance(Iter& iter, int n, random_access_iterator_tag category_tag)
{
    iter += n;
    std::cout << "임의 접근 반복자 버전의 advance() iter += n 실행" << std::endl;
}

// Advance() 반복자 보조 함수
template<typename Iter>
void Advance(Iter& iter, int n)
{
    _Advance(iter, n, iterator_traits<Iter>::iterator_category());
}

int main() {
    Vector<int> v;

    v.Push_back(10);
    v.Push_back(20);
    v.Push_back(30);

    List<int> lt;

    lt.Push_back(10);
    lt.Push_back(20);
    lt.Push_back(30);

    Vector<int>::Iterator viter(v.Begin());
    List<int>::Iterator liter(lt.Begin());

    Advance(viter, 2);
    Advance(liter, 2);

    return 0;
}