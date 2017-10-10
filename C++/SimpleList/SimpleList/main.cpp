using namespace std;
#include <iostream>

#include "list_simple.h"
#include "node.h"

void TestFun();

int main(){
    cout <<endl<<endl<< "-------------------------------" << endl;

    TestFun();

    cout <<endl<<endl<< "-------------------------------" << endl;
    return 0;
}

void TestFun(){
    char ans='x';
    int in;
    node<int>* temp=nullptr;
    List<int> l;
    temp = l.Begin();


    do{
       l.Print();
       cout<<"\n\n [R]andom [A]fter [B]efore [D]elete [S]earch [P]revious  [N]ext  [H]ome  [E]nd e[X]it\n";
       cout<<": "; cin>>ans;

       switch (toupper(ans)) {
       case 'R':
           l.InsertRandom(temp);
           break;
       case 'A':
           cin>>in;
           l.InsertAfter(in,temp);
           break;
       case 'H':
           cin>>in;

           break;
       default:
           break;
       }

    }while(ans!='x');

}
