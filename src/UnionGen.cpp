#include "UnionGen.h"
#include <cstring>

UnionGen::UnionGen(UnifDistrGen*r1,UnifDistrGen*r2,int m):UnifDistrGen(0,m)
{
    //ctor
    this->r1=r1;
    this->r2=r2;
}

UnionGen::~UnionGen()
{
    //dtor
}

int UnionGen::GetNextInt(){
    x=r1->GetNextInt()-r2->GetNextInt();
    x%=m;
    if(x<0) x+=m;
    return x;
}

void UnionGen::Check(){
    warnings[0]=0;
    if(r1->GetWarnings()[0]>0) strcat(warnings,"First random generation warnings:");
    strcat(warnings,r1->GetWarnings());
    if(r2->GetWarnings()[0]>0) strcat(warnings,"Second random generation warnings:");
    strcat(warnings,r2->GetWarnings());
}
