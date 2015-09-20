#include "FibGen.h"
FibGen::FibGen(int x, int y, int m):UnifDistrGen(x,m)
{
    //ctor
    this->y=y;
}

FibGen::~FibGen()
{
    //dtor
}

int FibGen::GetNextInt(){
    y+=x;
    x=y-x;
    if(x<0) x=-x;
    y%=m;
    return y;
}
