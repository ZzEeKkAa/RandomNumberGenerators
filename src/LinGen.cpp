#include "LinGen.h"
#include "HelpFuncs.h"
#include <cstddef>
#include <cstring>
#include <cmath>

LinGen::LinGen(int a, int c, int m, int x):UnifDistrGen(x,m)
{
    //ctor
    this->a=a;
    this->c=c;
}

LinGen::~LinGen()
{
    //dtor
}

int LinGen::GetNextInt(){
    x=(a*x+c)%m;
    return x;
}

void LinGen::Check(){
    warnings[0]=0;

    if(HelpFuncs::gcd(c,m)>1) strcat(warnings,"Warning: gcd(c,m) not equal 1 (%d) !\n");

    int b=a-1;
    int del=m;
    for(int i=sqrt(del); i>1; --i){
        if(del%i==0 && (del/i)%i==0)  {del/=i; --i;}
    } if(del%2==0) del/=2;

    if(b%del != 0) strcat(warnings,"Warning: a-1 have to be divided by all easy p!\n");

    if(m%4==0 && b%4!=0) strcat(warnings,"Warning: 4|m, but not 4|(a-1)!\n");
}


