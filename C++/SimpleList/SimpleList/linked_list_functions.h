//#ifndef LINKED_LIST_FUNCTIONS_H
//#define LINKED_LIST_FUNCTIONS_H

//#endif // LINKED_LIST_FUNCTIONS_H

#ifndef LINKED_LIST_FUNCTIONS_H
#define LINKED_LIST_FUNCTIONS_H

using namespace std;
#include <iostream>
#include "node.h"
#include <ctime>

template<class U>
ostream& _print_list(ostream &outs,node<U>* head_ptr){
    node<U>* walker = head_ptr;
    outs<<"H->";
    while (walker!=NULL){
        outs<<*walker;          //print this node
        walker = walker->_next; //go to the next node
    }
    outs<<"|||"<<endl;
    return outs;
}

template <class T>
node<T>* _search_list(node<T>* &head_ptr, const T& item){
    node<T>* w;
    for (w = head_ptr; w!=NULL;w=w->_next){
        if (w->_item == item)
            return w;
    }
    return NULL;
}

template <class T>
node<T>* _insert_head(node<T>* &head_ptr, const T& item){

    cout << "\ninsert header called\n";
    node<T>* temp = new node<T>(item);
    temp->_next = head_ptr;
    head_ptr = temp;

    return temp;//was return head_ptr
}

template <class T>
node<T>* _insertAfter(node<T>* &head,node<T>* &afterThis ,const T &insertThis){
    cout<<"\nin _insertAfter\n";
    if(afterThis==NULL){
        cout<<"\n null\n";
    }else{
    node<T>* temp = new node<T>(insertThis);
    temp->_next=afterThis;
    afterThis = temp;

    }
    return afterThis;
}

template<class T>
node<T>* _insertRand(node<T>* head,node<T>* afterThis){
    srand(time(0));
    int ran=rand() % 100;
    _insertAfter(head, afterThis, ran);

}

template<class T>
node<T>* _insertBefore(node<T>* head,node<T>* beforeThis ,const T &insertThis){

}
template<class T>
node<T>* _previousNode(node<T>* head, node<T>* prevToThis){

}
template<class T>
T _deleteNode(node<T>* &head, node<T>* deleteThis){

}

template<class T>
node<T>* _copyList(node<T>* head){

}

template<class T>
node<T>* _lastNode(node<T>* head){

}


#endif // LINKED_LIST_FUNCTIONS_H
