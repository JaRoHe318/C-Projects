#include "linkedlist.h"

template<class T>
LinkedList<T>::LinkedList(T item):_item(item), _next(NULL){

}

template <class U>
ostream& operator<<(ostream& outs, const LinkedList<U>& print_me){
    outs<<"["<<print_me._item<<"] ->";
    return outs;
}

