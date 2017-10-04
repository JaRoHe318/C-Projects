#ifndef LINKEDLIST_H
#define LINKEDLIST_H

using namespace std;
#include <iostream>

template<class T>
class LinkedList{

public:

    T _item;
    LinkedList<T>* _next;

    LinkedList(T item= T());

    template <class U>//if you have an op in a Template that is being defined outside of this?
    friend ostream& operator<<(ostream& outs, const LinkedList<U>& print_me);

};

#endif // LINKEDLIST_H
