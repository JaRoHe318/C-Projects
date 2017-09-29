
#include <iostream>
#include "mathe.h"
using namespace std;

/*------------------------------------------
*Program Name: rational_num_class
*Author: J. Hernandez
*Purpose:
*/

int main(){
    mathe a,b,c;
    char operat,command;

    //1st Input
    cout<<"\n Enter two fractions and the operator you wish to use (ex 1/2 + 1/2): \n\n";
    cout<<" Fraction a: ";
//    a.input();
    cin>>a;

    cout<<" [+][-][*][/]: ";
    cin>>operat;

    cout<<" Fraction b: ";
//    b.input();
    cin>>b;

    //Golden While Loop?
    while (command != 'x'){
        switch(operat){
            case '+':
                c = a + b;
                break;
            case '-':
                c = a - b;
                break;
            case '*':
                c = a * b;
                break;
            case '/':
                c = a / b;
                break;
        }

        //error checking
        if ((a.check_fract() == false)||(b.check_fract()==false)||(c.check_fract()==false)){
            cout<<"Err... Enter correct fractions \n";
        }
        else{
            cout<<"\n The answer is: ";
//            c.output();
            cout<<c;
            cout<<"\n";
        }

        cout<<" Input another variable [a] or [b]\n or e[x]it? \n: ";
        cin>>command;
        switch(command){
            case 'a':
            case 'b':
                cout<<" Fraction a: ";
//                a.input();
                cin>>a;

                cout<<" [+][-][*][/]: ";
                cin>>operat;

                cout<<" Fraction b: ";
//                b.input();
                cin>>b;
                break;
        }//switch
    }//while

    return 0;
}
