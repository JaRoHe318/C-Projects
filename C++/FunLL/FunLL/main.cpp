#include <iostream>
using namespace std;
#include "linkedlist.h"

template<class T>
LinkedList<T>* insert_head(LinkedList<T>* &head_ptr, const T& item);
template<class T>
void print_lists(LinkedList<T>* head_ptr);

int main(){
    cout << "\n\n\n\n======================================================================================================\n\n\n\n";

    LinkedList<int>* banana = NULL;

    for(int i=0;i<10;i++){
       insert_head(banana, i);
    }


    cout << "\n\n\n======================================================================================================\n\n\n\n";
    return 0;
}

template<class T>
LinkedList<T>* insert_head(LinkedList<T>* &head_ptr, const T& item){
    //1. create a new node(item)
    LinkedList<T>* temp = new LinkedList<T>(item);
    //2. temp's next points to wehere head is poijnting to:
    temp->_next = head_ptr;
    //3. point head_ptr to this new node:
    head_ptr = temp;
    return head_ptr;
}


template<class T>
void print_lists(LinkedList<T>* head_ptr){
    //1. Walker to head_ptr
    LinkedList<T>* walker = head_ptr;
    //2. loop and print until walker hits NULL
    cout<<"H ->";
    while(walker!=NULL){
        cout<<*walker;  //print this node
        walker = walker->_next; //go to the next item
    }
    cout<<" NULL";
}
