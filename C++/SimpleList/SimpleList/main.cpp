//#include <iostream>

//using namespace std;

//int main()
//{
//    cout << "Hello World!" << endl;
//    return 0;
//}
using namespace std;
#include <iostream>

#include "list_simple.h"
#include "node.h"


int main(){

    node<int>* p;
    List<int> l;
    cout<<"on empty list: ";
    p = l.search_list(20);
    if (p){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

    for (int i= 0; i<10; i++){
        l.insert_head(i*10);
        cout<<"The list so far: "<<l<<endl;
    }
    cout<<"here is your list: "<<endl;
    cout<<l<<endl;
    cout<<"searching for 20: ";
    p = l.search_list(20);
    if (p){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

    cout<<"searching for -20: ";
    p = l.search_list(-20);
    if (p){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }


    cout <<endl<<endl<< "-------------------------------" << endl;
    return 0;
}
