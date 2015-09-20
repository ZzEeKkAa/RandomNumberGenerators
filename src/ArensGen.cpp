#include "ArensGen.h"

#include <cmath>

ArensGen::ArensGen(UnifDistrGen*r1,UnifDistrGen*r2,double a)
{
    //ctor
    this->r1=r1;
    this->r2=r2;
    this->a=a;
}

ArensGen::~ArensGen()
{
    //dtor
}

double ArensGen::GetNext(){
    double x,y;

    y=atan(M_PI*r1->GetNext());
    x=sqrt(2*a-1)*y+a-1;
    if(x<=0) return GetNext();
    double v=r2->GetNext();
    if(v>(1+y*y)*exp((a-1)*log(x/(a-1))-sqrt(2*a-1)*y)) return GetNext();
    return x;
}
