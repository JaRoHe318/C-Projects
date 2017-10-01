#include "poly.h"

typedef double T;

T *&allocate(int size);
T* copy_array(T* src, int size);
T* resize(T* src, T* old, T* newA);
void delete_array(T* &a);


//Term Class====================================================
Term::Term(double coef, int exp){

}

bool operator ==(const Term& lhs, const Term& rhs){

}

bool operator !=(const Term& lhs, const Term& rhs){

}

bool operator >(const Term& lhs, const Term& rhs){

}

bool operator <(const Term& lhs, const Term& rhs){

}

//used in Poly division operator
Term operator / (const Term& lhs, const Term& rhs){

}

ostream& operator <<(ostream& outs, const Term& t){

}






























//Poly Class=====================================================
Poly::Poly(){

}
Poly::Poly(double* coefs, int order){

}
















//the BIG 3
Poly::Poly(const Poly& other){

}
Poly& Poly::operator =(const Poly& rhs){

}
Poly::~Poly(){

}

















//High lvl(no _coefs)
Poly operator %(const Poly& lhs, const Poly& rhs){
    Poly div = lhs / rhs;
    return lhs - div * rhs;
}
Poly operator /(const Poly& lhs, const Poly& rhs){

}
Poly operator *(const Poly& lhs, const Poly& rhs){

}
Poly operator - (const Poly& lhs, const Poly& rhs){

}

istream& operator >>(istream& ins, Poly& p){

}

Poly operator +(const Poly& lhs, const Poly& rhs){

}

ostream& operator <<(ostream& outs, const Poly& p){

}





























//Low Level (Little Access to _coefs)===========================
Poly operator -(const Poly& p){

}
Term Poly::operator[](int order) const{
    double coefs = _coefs[order];
    return Term(coefs,order);
}
Poly operator *(const Poly& lhs, const Term& t){

}
Poly operator +(const Poly& lhs, const Term& t){

}

bool operator ==(const Poly& lhs, const Poly& rhs){

}

bool operator !=(const Poly& lhs, const Poly& rhs){

}

bool operator >(const Poly& lhs, const Poly& rhs){

}

bool operator <(const Poly& lhs, const Poly& rhs){

}


//Lowest Lvl Functions

T* &allocate(int size){
    T* al;
    al = new T[size];
    return al;
}

T* copy_array(T* src, int size){
    allocate(size)=src;
}

T* resize(T* src, T* old, T* newA){

}

void delete_array(T* &a){
    delete [] a;
}





