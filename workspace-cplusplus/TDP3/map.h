#ifndef MAP_H
#define MAP_H
#include <iostream>
using namespace std;

template <class Key, class T, class Cmp = less <Key>, class A = allocator <T> >
class map
{
public:
    typedef Key key_type;
    typedef T mapped_type;
    typedef pair<const key_type, mapped_type> value_type;
    typedef value_type* iterator;

    void insert(const value_type&);
    iterator find(const key_type& k);
};
#endif // MAP_H