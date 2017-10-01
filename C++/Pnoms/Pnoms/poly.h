#ifndef POLY_H
#define POLY_H

using namespace std;
#include <iostream>
#include <cassert>
#include <cstring>



struct Term{
    double _coef;
    int _exp;

    Term(double coef, int exp);
    friend bool operator ==(const Term& lhs, const Term& rhs);
    friend bool operator !=(const Term& lhs, const Term& rhs);
    friend bool operator >(const Term& lhs, const Term& rhs);
    friend bool operator <(const Term& lhs, const Term& rhs);

    //used in Poly division operator
    friend Term operator / (const Term& lhs, const Term& rhs);

    friend ostream& operator <<(ostream& outs, const Term& t);
};



class Poly{

public:
    Poly();
    Poly(double* coefs, int order);

    //the BIG 3
    Poly(const Poly& other);
    Poly& operator =(const Poly& rhs);
    ~Poly();


    //High lvl
    friend Poly operator %(const Poly& lhs, const Poly& rhs);
    friend Poly operator /(const Poly& lhs, const Poly& rhs);
    friend Poly operator *(const Poly& lhs, const Poly& rhs);
    friend Poly operator - (const Poly& lhs, const Poly& rhs);
    friend istream& operator >>(istream& ins, Poly& p);

    friend Poly operator +(const Poly& lhs, const Poly& rhs);
    friend ostream& operator <<(ostream& outs, const Poly& p);

    friend Poly operator -(const Poly& p);
    Term& operator[](int order) const;
    friend Poly operator *(const Poly& lhs, const Term& t);
    friend Poly operator +(const Poly& lhs, const Term& t);





    friend bool operator ==(const Poly& lhs, const Poly& rhs);
    friend bool operator !=(const Poly& lhs, const Poly& rhs);
    friend bool operator >(const Poly& lhs, const Poly& rhs);
    friend bool operator <(const Poly& lhs, const Poly& rhs);

    int order() const { //may give trouble?
        return _order;
    }

private:
    void fix_order();           //get rid of highest terms with zero coefs
    int _order;
    double* _coefs;

};


#endif // POLY_H
