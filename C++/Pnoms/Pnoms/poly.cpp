#include "poly.h"


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

bool operator ==(const Poly& lhs, const Poly& rhs){

}
bool operator !=(const Poly& lhs, const Poly& rhs){

}
bool operator >(const Poly& lhs, const Poly& rhs){

}
bool operator <(const Poly& lhs, const Poly& rhs){

}

Term& Poly::operator[](int order) const{

}


Poly operator +(const Poly& lhs, const Term& t){

}
Poly operator +(const Poly& lhs, const Poly& rhs){

}

Poly operator -(const Poly& p){

}
Poly operator - (const Poly& lhs, const Poly& rhs){

}

Poly operator *(const Poly& lhs, const Term& t){

}
Poly operator *(const Poly& lhs, const Poly& rhs){

}

Poly operator /(const Poly& lhs, const Poly& rhs){

}
Poly operator %(const Poly& lhs, const Poly& rhs){//B gave code
    Poly div = lhs / rhs;
    return lhs - div * rhs;
}

ostream& operator <<(ostream& outs, const Poly& p){
}
istream& operator >>(istream& ins, Poly& p){
}
