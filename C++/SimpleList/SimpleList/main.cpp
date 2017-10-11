using namespace std;
#include <iostream>

#include "list_simple.h"
#include "node.h"

void TestFun();
node<int> *WhereYou(node<int>* marker);
void Printer(List<int> l);

int main(){
    cout <<endl<<endl<< "-------------------------------" << endl;

    TestFun();

    cout <<endl<<endl<< "-------------------------------" << endl;
    return 0;
}

node<int>* WhereYou(node<int>* marker){

}

void Printer(List<int> l){

}

void TestFun(){
    char ans='x';
    int in;
    node<int>* marker=NULL;
    List<int> l;
    marker = l.Begin();


    do{
        cout<<l;
        cout<<"\n\n [R]andom [A]fter [B]efore [D]elete [S]earch [P]revious  [N]ext  [H]ome  [E]nd e[X]it\n";
        cout<<": "; cin>>ans;

        switch (toupper(ans)) {
        case 'R':
            l.InsertRandom(marker);
            break;
        case 'A':
            cout<<": "; cin>>in;
            l.InsertAfter(in,marker);
            break;
        case 'H'://---------------------------------

            cout<<": "; cin>>in;
            l.InsertHead(in);
            //            marker->_next/=
            break;
        case 'B':
            cout<<": "; cin>>in;
            l.InsertBefore(in,marker);
            break;
        case 'D':
            cout<<": "; cin>>in;
            l.Delete(marker);
            break;
        case 'S':
            cout<<": "; cin>>in;
            l.Search(in);
        default:
            break;
        }

    }while(ans!='x');

}
