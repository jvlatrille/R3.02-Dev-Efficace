#ifndef LIST_H
#define LIST_H
#include <iostream>
using namespace std;

template <class T, class A = allocator<T>>
class list
{
public:
    typedef T value_type;
    typedef value_type* iterator;

    void push_back(const value_type&);
    iterator begin();
    iterator end();
};
#endif // LIST_H