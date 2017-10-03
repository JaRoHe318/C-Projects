#include "poly.h"

//Poly Class=====================================================
Poly::Poly(){
    cout<<"in this poly";
    _order = 1;
    functions a;
    _coefs=a.allocate(_order);

}

Poly::Poly(T* coefs, int order){
    _order=order;
    cout<<"\n Poly(binary)\n";
    functions a;
    _coefs=coefs;

}

//the BIG 3
Poly::Poly(const Poly& other){
    functions calc;
    cout<<"\n\n Copy Const! \n\n";
    _coefs=calc.copy_array(other._coefs,_order);
}
Poly& Poly::operator =(const Poly& rhs){
    functions calc;
    cout<<"\n\n Assignment OP"<<rhs<<endl;
    if(this != &rhs){
        _coefs=calc.delete_array(_coefs);
        _coefs = calc.copy_array(rhs._coefs, _order);
    }
    return *this;
}
Poly::~Poly(){
    functions calc;
    "\n\n I am destroyer of wrlds\n\n";
    _coefs=calc.delete_array(_coefs);
}




//High lvl(no _coefs)
Poly operator %(const Poly& lhs, const Poly& rhs){
    Poly div = lhs / rhs;
    return lhs - div * rhs;
}
Poly operator /(const Poly& lhs, const Poly& rhs){

    //    return (Poly());
}
Poly operator *(const Poly& lhs, const Poly& rhs){

    //    return (Poly());
}
Poly operator -(const Poly& lhs, const Poly& rhs){

    //    return (Poly());
}

istream& operator >>(istream& ins, Poly& p){
    Term t;

    do{
        cout<<" In input p :";
        cin>>t;
        p._coefs[t._exp]=t._coef;

    }while(t._exp!=0);

    return ins;
}

Poly operator +(const Poly& lhs, const Poly& rhs){
    //    return (Poly());
}

ostream& operator <<(ostream& outs, const Poly& p){
    cout<<"\n\n order:"<<p._order<<endl;
    for(int i=p._order;i>=0;i--){
        if(i==0){
            outs<<p[i];
        }else{
            //            outs<<p[i]<<" + ";
            outs<<p[i];
        }
    }
    return outs;
}

//Low Level (Little Access to _coefs)===========================
Poly operator -(const Poly& p){

}
Term Poly::operator[](int order) const{
    T coefs = _coefs[order];
    return Term(coefs,order);
}
Poly operator *(const Poly& lhs, const Term& t){

}
Poly operator +(const Poly& lhs, const Term& t){
    if(lhs._order==t._exp){
        Term poly = lhs[t._exp];
        T co = poly._coef+t._coef;
        //        lhs[t._exp]=co;
    }
}

bool operator ==(const Poly& lhs, const Poly& rhs){
    int temp = lhs._order;
    int temp2 = rhs._order;

    if(temp!=temp2){
        return false;
    }else if(temp==temp2){
        while(temp>=0){
            if(lhs[temp]!=rhs[temp2]){
                return false;
            }
            temp--;
            temp2--;
            continue;
        }
        return true;
    }
}

bool operator !=(const Poly& lhs, const Poly& rhs){
    if(lhs==rhs){
        return false;
    }else{
        return true;
    }
}

bool operator >(const Poly& lhs, const Poly& rhs){
    if(lhs._order>rhs._order){
        return true;
    }else{
        return false;
    }
}

bool operator <(const Poly& lhs, const Poly& rhs){
    if(lhs>rhs){
        return false;
    }else{
        return true;
    }

}


