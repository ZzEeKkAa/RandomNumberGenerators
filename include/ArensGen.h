#ifndef ARENSGEN_H
#define ARENSGEN_H

#include <UnifDistrGen.h>


class ArensGen : public RandGen
{
    public:
        ArensGen(UnifDistrGen*r1,UnifDistrGen*r2,double a);
        virtual ~ArensGen();
        double GetNext();
    protected:
        UnifDistrGen*r1,*r2;
        double a;
    private:
};

#endif // ARENSGEN_H
