#include "LnGen.h"

#include <cmath>

LnGen::LnGen(UnifDistrGen*randGen,double m)
{
    //ctor
    this->randGen=randGen;
    this->m=m;
}

LnGen::~LnGen()
{
    //dtor
}

double LnGen::GetNext(){
    return -m*log(randGen->GetNext());
}
