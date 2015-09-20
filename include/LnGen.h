#ifndef LNGEN_H
#define LNGEN_H

#include <UnifDistrGen.h>


class LnGen : public RandGen
{
    public:
        LnGen(UnifDistrGen*randGen, double m);
        virtual ~LnGen();
        double GetNext();
    protected:
        double m;
        UnifDistrGen*randGen;
    private:
};

#endif // LNGEN_H
