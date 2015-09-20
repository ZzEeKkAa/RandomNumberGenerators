#include "ThreeSigGen.h"

ThreeSigGen::ThreeSigGen(UnifDistrGen*randGen)
{
    //ctor
    this->randGen=randGen;
}

ThreeSigGen::~ThreeSigGen()
{
    //dtor
}

double ThreeSigGen::GetNext(){
    double sum = 0;
    for(int i=0; i<12; ++i) sum+=randGen->GetNext();
    return sum/12;
}
