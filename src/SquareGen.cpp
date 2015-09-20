#include "SquareGen.h"
#include "HelpFuncs.h"
#include <cstddef>
#include <cstring>
#include <cmath>

SquareGen::SquareGen(int d,int a,int c,int m,int x):LinGen(a,c,m,x)
{
    //ctor
    this->d=d;
}

SquareGen::~SquareGen()
{
    //dtor
}

int SquareGen::GetNextInt(){
    int _x=x;
    x=LinGen::GetNextInt();
    x+=(d*_x%m)*_x%m;
    x%=m;
    return x;
}

void SquareGen::Check(){

    warnings[0]=0;

    if(HelpFuncs::gcd(c,m)>1) strcat(warnings,"Warning: gcd(c,m) not equal 1 (%d) !\n");

    int del=m;
    for(int i=sqrt(del); i>1; --i){
        if(del%i==0 && (del/i)%i==0)  {del/=i; --i;}
    } if(del%2==0) del/=2;

    if((a-1)%del != 0) strcat(warnings,"Warning: a-1 have to be divided by all easy p!\n");
    if(d%del != 0) strcat(warnings,"Warning: d have to be divided by all easy p!\n");

    if(m%4==0 && (d%2!=0 || d%4!=(a-1)%4) ) strcat(warnings,"Warning: 4|m, but not 4|(a-1)!\n");
}
