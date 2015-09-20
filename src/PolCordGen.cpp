#include "PolCordGen.h"

#include <cmath>

PolCordGen::PolCordGen(UnifDistrGen*randGen)
{
    //ctor
    this->randGen=randGen;
    odd=true;
}

PolCordGen::~PolCordGen()
{
    //dtor
}

double PolCordGen::GetNext(){
    odd=!odd;
    if(odd) return (x2+1)/2;

    double s,v1,v2;
    s=2.;
    while(s>=1)
    {
        v1=2.*randGen->GetNext()-1;
        v2=2.*randGen->GetNext()-1;
        s=v1*v1+v2*v2;
    }

    s=sqrt(-2*log(s)/s);
    x1=v1*s;
    x2=v2*s;

    return (x1+3)/6.; //sqrt(x1*x1+x2*x2)/2;
}
