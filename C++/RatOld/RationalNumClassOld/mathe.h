#ifndef MATHE_H
#define MATHE_H


using namespace std;
#include <iostream>


class mathe{

public:
    mathe();

//    void input();
//    void output();

    //friend
    friend mathe operator + (mathe fract1,mathe fract2);
    friend mathe operator - (mathe fract1,mathe fract2);
    friend mathe operator * (mathe fract1,mathe fract2);
    friend mathe operator / (mathe fract1,mathe fract2);
    bool check_fract();

    friend ostream& operator <<(ostream& outs, const mathe& num);
    friend istream& operator >>(istream& ins,mathe& num);

private:
    double n,d;
    char op;

};

#endif // MATHE_H
