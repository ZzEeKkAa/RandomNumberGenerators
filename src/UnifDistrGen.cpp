#include "UnifDistrGen.h"

UnifDistrGen::UnifDistrGen(int x, int m)
{
    //ctor
    this->x=x;
    this->m=m;
}

UnifDistrGen::~UnifDistrGen()
{
    //dtor
}

double UnifDistrGen::GetNext(){
    return m==0?0:GetNextInt()/(double)m;
}

int UnifDistrGen::GetNextInt(){};
