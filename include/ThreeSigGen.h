#ifndef THREESIGGEN_H
#define THREESIGGEN_H

#include <UnifDistrGen.h>


class ThreeSigGen : public RandGen
{
    public:
        ThreeSigGen(UnifDistrGen*randGen);
        virtual ~ThreeSigGen();
        double GetNext();
    protected:
        UnifDistrGen*randGen;
    private:
};

#endif // THREESIGGEN_H
