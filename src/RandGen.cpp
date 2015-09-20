#include "RandGen.h"

#include <cstddef>

RandGen::RandGen()
{
    //ctor
    warnings=new char[1024];
    warnings[0]=0;
}

RandGen::~RandGen()
{
    //dtor
    delete[] warnings;
}

const char* RandGen::GetWarnings(){
    Check();
    return warnings;
}

double RandGen::GetNext(){};

void RandGen::Check(){};
