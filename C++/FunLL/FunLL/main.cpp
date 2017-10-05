using namespace std;
#include <iostream>
#include "linkedlist.h"



template<class T>
LinkedList<T>* insert_head(LinkedList<T>* &head_ptr, const T& item);

template<class T>
void print_lists(LinkedList<T>* head_ptr);

int main(){
    cout << "\n\n\n\n======================================================================================================\n\n\n\n";

    LinkedList<int
            >* head=NULL;
    for(int i=0;i<6;i++){
        insert_head(head, i);
    }


    print_lists(head);




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
