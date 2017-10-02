using namespace std;
#include <iostream>
#include "big3.h"
#include <cassert>
#include <cstring>


typedef char T;

T *allocate(int size);
T* copy_array(T* src, int size);
T* resize(T* src, int oldSize, int newSize);
void delete_array(T* &a);


int main(){
    cout << "\n\n\n\n======================================================================================================\n\n\n\n";

    abnormal a;


    cout <<"\n\n\n======================================================================================================\n\n";
    return 0;
}

T* allocate(int size){
    T* al;
    T* temp;
    al = new T[size];
    temp=al;
    for(int i = 0;i<size;i++){
        *temp=0;
        temp++;
    }

    return al;
}

T* copy_array(T* src, int size){
    T* copy = new T[size];
    T* p;
    p=copy;
    for(int i=0; i<size; i++){
        *p = *src;
        p++;
        src++;
    }
    return copy;
}

T* resize(T* src,int oldSize, int newSize){
    T* temp;
    T* w;
    w=src;
    temp=allocate(newSize);
    for(int i = 0;i<oldSize;i++){
       *temp=*w;
        temp++;
        w++;
    }

    delete [] src; // may not need ?
    return temp;
}

void delete_array(T* &a){
    delete [] &a;
}




//int main(int argc, char *argv[]){//Big3
//    cout <<endl<<endl<<endl<< "===================" << endl;

//    abnormal func_ret = return_abnormal();
//    cout<<"Here is what we got back from func: "<<
//    func_ret<<endl;

//    cout <<endl<<endl<<endl<< "===================" << endl;
//    return 0;
//}

