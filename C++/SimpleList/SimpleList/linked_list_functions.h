//#ifndef LINKED_LIST_FUNCTIONS_H
//#define LINKED_LIST_FUNCTIONS_H

//#endif // LINKED_LIST_FUNCTIONS_H

#ifndef LINKED_LIST_FUNCTIONS_H
#define LINKED_LIST_FUNCTIONS_H

using namespace std;
#include <iostream>

#include "node.h"

template <class T>
node<T>* _insert_head(node<T>* & head_ptr, const T& item);

template <class T>
node<T>* _search_list(node<T>* & head_ptr, const T& item);

template<class T>
ostream& _print_list(ostream& outs, node<T>* head_ptr);

template <class T>
node<T>* _insert_head(node<T>* & head_ptr, const T& item){
    /*
     *
     *
     */
    //1. create a new node(item)
    node<T>* temp = new node<T>(item);
    //2. temp's next points to where head is pointing to:
    temp->_next = head_ptr;
    //3.point head_ptr to this new node:
    head_ptr = temp;

    return head_ptr;
}

template<class T>
ostream& _print_list(ostream &outs, node<T>* head_ptr){
    //1. walker to head_ptr
    node<T>* walker = head_ptr;
    //loop and print until walker hits NULL;
    outs<<"H->";
    while (walker!=NULL){
        outs<<*walker;          //print this node
        walker = walker->_next; //go to the next node
    }
    outs<<"|||"<<endl;
    return outs;
}


template <class T>
node<T>* _search_list(node<T>* & head_ptr, const T& item){
    node<T>* w;
    for (w = head_ptr; w!=NULL;w=w->_next){
        if (w->_item == item)
            return w;
    }
    return NULL;
}









#endif // LINKED_LIST_FUNCTIONS_H
