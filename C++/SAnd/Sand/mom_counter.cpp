#include "mom_counter.h"
using namespace std;

mom_counter::mom_counter(){
    total = 0;
    max = 9999;
}

void mom_counter::print(){
    //Magic Formula to add those pesky zeroes
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    dollar = static_cast<double>(total)/100;
    cout <<"$"<<dollar<<"\n";
}

void mom_counter::incr1000(){
    total += 1000;
    if (overflow() == true)
        total = max;
}

void mom_counter::incr100(){
    total += 100;
    if (overflow() == true)
        total = max;
}

void mom_counter::incr10(){
    total += 10;
    if (overflow() == true)
        total = max;
}

void mom_counter::incr1(){
    total +=1;
    if (overflow() == true)
        total = max;
}

void mom_counter::reset(){
    total = 0;
}

bool mom_counter::overflow(){
    if (total >= max){
        return true;
    }
    else{
        return false;
    }
}
