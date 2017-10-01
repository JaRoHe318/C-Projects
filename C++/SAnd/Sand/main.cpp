using namespace std;
#include <iostream>
#include "big3.h"
#include <cassert>
#include <cstring>


typedef char T;

T *allocate(int size);
T* copy_array(T* src, int size);
T* resize(T* src, T* old, T* newA);
void delete_array(T* &a);


int main(){
    cout << "\n\n\n\n======================================================================================================\n\n\n\n";
//    T meh[10]={0,2,3,4,4,5};
//    T meh[20]= "bannaa";
      T* meh = new T[20];
      meh = "choco";
//    allocate(10);
    cout<<"meh: "<<meh<<endl<<endl;

//    cout<<copy_array(meh,10)<<endl;

    delete_array(meh);

    cout<<"d meh: "<<meh<<endl<<endl;




    cout <<"\n\n\n======================================================================================================\n\n";
    return 0;
}

T* allocate(int size){
    T* al;
    al = new T[size];
    return al;
}

T* copy_array(T* src, int size){
    T* newA;
    cout<<" newA: "<<newA<<endl;
    newA = allocate(size);
    newA = src;
    cout<<" newA2: "<<newA<<endl;
    return newA;
}

T* resize(T* src, T* old, T* newA){

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

