
#include "mathe.h"

mathe::mathe(){
}

//    void mathe::input(){
//        cin>>n>>op>>d;
//    }//input

//    void mathe::output(){
//        cout<<n<<"/"<<d<<"\n";
//    }//output

    bool mathe::check_fract(){
        if (d == 0)
            return false;
        else
            return true;
    }//bool

    mathe operator + (mathe fract1,mathe fract2){
         mathe new_fract;
         new_fract.n = (fract1.n*fract2.d)+(fract2.n * fract1.d);
         new_fract.d = fract1.d*fract2.d;
        return new_fract;
    }//+

    mathe operator - (mathe fract1,mathe fract2){
        mathe new_fract;
        new_fract.n = (fract1.n*fract2.d)-(fract2.n * fract1.d);
        new_fract.d = fract1.d*fract2.d;
       return new_fract;
    }//-

    mathe operator * (mathe fract1,mathe fract2){
        mathe new_fract;
        new_fract.n = (fract1.n*fract2.n);
        new_fract.d = fract1.d*fract2.d;
        return new_fract;
    }//*

    mathe operator / (mathe fract1,mathe fract2){
        mathe new_fract;
        new_fract.n = (fract1.n*fract2.d);
        new_fract.d = fract1.d*fract2.n;
        return new_fract;
    }// '/'

    ostream& operator <<(ostream& outs, const mathe& num){

        outs<<num.n<<"/"<<num.d;
        return outs;
    }
    istream& operator >>(istream& ins,mathe& num){

        ins>>num.n>>num.op>>num.d;
//        cout<<num.n<<"/"<<num.d<<endl;
        return ins;
    }

