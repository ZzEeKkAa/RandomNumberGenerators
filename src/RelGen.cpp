#include "RelGen.h"

#include <cmath>

RelGen::RelGen(UnifDistrGen *r1,UnifDistrGen*r2)
{
    //ctor
    this->r1=r1;
    this->r2=r2;
}

RelGen::~RelGen()
{
    //dtor

}

double RelGen::GetNext(){
    double u=0,v;
    while (u==0) u=r1->GetNext();
    v=r2->GetNext();
    double x=1.7155277699211123134469717377417*(v-0.5)/u;
    double m=sqrt(5-5.13610166675141693517522223691495*u);
    return (x/m+3)/6;
}
