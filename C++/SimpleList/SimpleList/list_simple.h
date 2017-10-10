
#ifndef LIST_SIMPLE_H
#define LIST_SIMPLE_H

#include "linked_list_functions.h"
#include "node.h"

//start
template <class T>
class List{

public:
    List();

    //    ~List();
    //    List(const List<T> &copyThis);
//        List& operator =(const List& RHS);

    node<T>* InsertHead(T i);           //inset i at the head of list

    node<T>* InsertAfter(T i, node<T>* iMarker);  //insert i after iMarker

    node<T>* InsertRandom(node<T>* iMarker);

    node<T>* InsertBefore(T i, node<T>* iMarker); //insert i before iMarker


    node<T>* InsertSorted(T i);         //insert i. Assume sorted list



    T Delete(node<T>* iMarker);         //delete node pointed to by iMarker



    void Print() const;                                 //print the list

    node<T>* Search(const T &key);      //return pointer to node containing
    //  key. NULL if not there

    node<T>* Prev(node<T>* iMarker);    //get the previous node to iMarker


    T& operator[](int index);                   //return the item at index

    node<T>* Begin() const;                     //return the head of the list

    node<T>* End() const;                       //return the tail of the list

    template <class U>
    friend ostream& operator <<(ostream& outs, /*const*/ List<U>& l); //insertion operator for list

private:
    node<T>* head;

};
//end

template <class T>
List<T>::List(){
    head = nullptr;
}

template <class T>
node<T>* List<T>::InsertHead(T i){
    return _insert_head(head, i);
}

template <class T>
node<T>* List<T>::InsertAfter(T i, node<T>* iMarker){
    return _insert_head(iMarker, i);
}

template <class T>
node<T>* List<T>::InsertRandom(node<T>* iMarker){
    return _insertRand(head,iMarker);
}

template <class T>
node<T>* InsertBefore(T i, node<T>* iMarker){

}

template <class T>
node<T>* InsertSorted(T i){

}

template <class T>
T Delete(node<T>* iMarker){

}

template<class T>
void List<T>::Print()const {
    List<T> l;
    cout<<l;
}

template <class T>
node<T>* List<T>::Search(const T& item){
    return _search_list(head, item);
}

template <class T>
node<T>* Prev(node<T>* iMarker){

}

template <class T>
T& List<T>::operator[](int index){
    T inside;
    return inside;
}

template <class T>
node<T>* List<T>::Begin() const{
    List l;
    return l.head;
}
template <class T>
node<T>* List<T>::End() const{

}


template<class U>
ostream& operator <<(ostream& outs,/*const*/ List<U>& l){
    return _print_list(outs, l.head);
}

#endif // LIST_SIMPLE_H
