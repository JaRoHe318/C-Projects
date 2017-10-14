using namespace std;
#include <iostream>
#include <ctime>
#include "list_simple.h"
#include "node.h"

void TestFun();
void TestDelete();
void Printer(node<int> *marker, List<int> l);



int main(){
    cout <<endl<<endl<< "-------------------------------" << endl;
    srand(time(0));
    
        TestFun();
//    TestDelete();
    
    cout <<endl<<endl<< "-------------------------------" << endl;
    return 0;
}

void TestDelete(){
    List<int> l;
    node<int>* temp=l.Begin();
    node<int>* marker=l.Begin();

    for(int i = 0;i<10;i++){
        marker=l.InsertHead(i);
    }
    Printer(marker,l);

    l.Delete(marker);

    Printer(marker,l);
}

void Printer(node<int>* marker,List<int> l){
    node<int>* walker = l.Begin();
    cout<<"H-> ";
    while (walker!=NULL){
        if(walker==marker){
            cout<<"{"<<*walker<<"} ";
            walker = walker->_next;
        }else{
            cout<<"["<<*walker<<"] ";          //print this node
            walker = walker->_next; //go to the next node
        }
    }
    cout<<" ->|||"<<endl;
}

void TestFun(){
    char ans='x';
    int in=0;
    node<int>* marker=NULL;
    List<int> l;
    //    marker = l.Begin();
    
    cout<<l;
    do{
        //        cout<<l;
        //        Printer(marker,l);
        cout<<"\n\n [R]andom [A]fter [B]efore [D]elete [S]earch [P]revious  [N]ext  [H]ome  [E]nd e[X]it\n";
        cout<<": "; cin>>ans;
        
        switch (toupper(ans)) {
        case 'R':
            marker=l.InsertRandom(marker);
            break;
        case 'A':
            cout<<": "; cin>>in;
            marker=l.InsertAfter(in, marker);
            break;
        case 'M'://---------------------------------
            cout<<": "; cin>>in;
            marker=l.InsertHead(in);
            break;
        case 'B':
            cout<<": "; cin>>in;
            marker=l.InsertBefore(in,marker);
            break;
        case 'D':
            marker=l.Delete(marker);
            break;
        case 'S':
            cout<<": "; cin>>in;
            marker=l.Search(in);
            break;
        case 'P':
            marker=l.Prev(marker);
            break;
        case 'N':
            marker=l.Next(marker);
            break;
        case 'H':
            marker=l.Begin();
            break;
        case 'E':
            marker=l.End();
            break;
        default:
            break;
        }
        //        cout<<l;
        Printer(marker,l);
    }while(ans!='x');
    
}
