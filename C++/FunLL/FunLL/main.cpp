#include <iostream>
using namespace std;
#include "node.h"
#include "nodefunct.h"

int main(){
    cout << "\n\n\n\n======================================================================================================\n\n\n\n";

    Node<int>* banana = NULL;

    for(int i=0;i<10;i++){
       InsertHead(banana, i);
    }

    PrintLists(banana);


    cout << "\n\n\n======================================================================================================\n\n\n\n";
    return 0;
}

