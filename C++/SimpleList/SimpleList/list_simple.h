//#ifndef LIST_SIMPLE_H
//#define LIST_SIMPLE_H

//#endif // LIST_SIMPLE_H


#ifndef LIST_SIMPLE_H
#define LIST_SIMPLE_H

#include "linked_list_functions.h"
#include "node.h"

template <class T>
class List{

public:
    List();
    //big three:
//    List(const List& other);
//    List& operator = (const List& rhs);
//    ~List();
    node<T>* insert_head(const T& item);
    node<T>* search_list(const T& item);
    template<class U>
    friend ostream& operator <<(ostream& outs, List<U> print_me);
private:
    node<T>* _head_ptr;
};

template <class T>
List<T>::List(){
    _head_ptr = NULL;
}

template <class T>
node<T>* List<T>::insert_head(const T& item){
    return _insert_head(_head_ptr, item);
}

template <class T>
node<T>* List<T>::search_list(const T& item){
    return _search_list(_head_ptr, item);
}

template<class U>
ostream& operator <<(ostream& outs, List<U> print_me){
    return _print_list(outs, print_me._head_ptr);
}

//template <class T>
//node<T>* List<T>::List(const List& other){
//    //_copy_list

//}

//template <class T>
//List& List<T>::operator = (const List& rhs){
//    //_copy_list
//}

//template <class T>
//List<T>::~List(){
//    //_destroy_list
//}



#endif // LIST_SIMPLE_H
