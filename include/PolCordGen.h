#ifndef POLCORDGEN_H
#define POLCORDGEN_H

#include <UnifDistrGen.h>


class PolCordGen : public RandGen
{
    public:
        PolCordGen(UnifDistrGen*randGen);
        virtual ~PolCordGen();
        double GetNext();
    protected:
        bool odd;
        double x1,x2;
        UnifDistrGen*randGen;
    private:
};

#endif // POLCORDGEN_H
