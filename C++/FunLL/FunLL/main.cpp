using namespace std;
<<<<<<< HEAD
#include "node.h"
#include "nodefunct.h"
=======
#include <iostream>
#include "linkedlist.h"



template<class T>
LinkedList<T>* insert_head(LinkedList<T>* &head_ptr, const T& item);

template<class T>
void print_lists(LinkedList<T>* head_ptr);
>>>>>>> 5c508ec1a491c5cf086d7d4df8366003badc0c0e

int main(){
    cout << "\n\n\n\n======================================================================================================\n\n\n\n";

<<<<<<< HEAD
    Node<int>* banana = NULL;

    for(int i=0;i<10;i++){
       InsertHead(banana, i);
=======
    LinkedList<int
            >* head=NULL;
    for(int i=0;i<6;i++){
        insert_head(head, i);
>>>>>>> 5c508ec1a491c5cf086d7d4df8366003badc0c0e
    }

    PrintLists(banana);


    print_lists(head);


<<<<<<< HEAD
=======


    cout <<"\n\n\n======================================================================================================\n\n";
    return 0;
}

template<class T>
void print_lists(LinkedList<T>* head_ptr){

    LinkedList<T>* walker = head_ptr;

    cout<<"H ->";
    while(walker!=NULL){
        cout<<*walker;
        walker = walker->_next;
    }
    cout<<" NULL";
}
template<class T>
LinkedList<T>* insert_head(LinkedList<T>* &head_ptr, const T& item){
    LinkedList<T>* temp = new LinkedList<T>(item);
    temp->_next = head_ptr;
    head_ptr = temp;
    return head_ptr;
}
>>>>>>> 5c508ec1a491c5cf086d7d4df8366003badc0c0e
