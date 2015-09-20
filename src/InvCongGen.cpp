#include "InvCongGen.h"
#include "HelpFuncs.h"

#include <stdio.h>

InvCongGen::InvCongGen(int a, int c, int p, int x):UnifDistrGen(x,p)
{
    //ctor
    this->a=a;
    this->c=c;
}

InvCongGen::~InvCongGen()
{
    //dtor
}

int InvCongGen::GetNextInt(){
    int invx=HelpFuncs::pow(x,m-2,m);
    x=((long long) a*invx+c)%m;
    //printf("%d\n",x);
    return x;
}
