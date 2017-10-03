#include <iostream>
#include "poly.h"
using namespace std;



int main(){
    cout << "\n\n\n\n======================================================================================================\n\n\n\n";

    T test[10] = {1,0,2,0,1};
    T test2[10] = {1,0,2,1};

    Poly pnom(test,4);
    Poly pnom2(test2,5);
    cout<<pnom;
    cout<<endl<<pnom2;

    if(pnom>pnom2){
        cout<<"\n\n yup";
    }
    if(pnom<pnom2){
        cout<<"\n\n nope";
    }








    cout <<"\n\n\n======================================================================================================\n\n";
    return 0;
}
