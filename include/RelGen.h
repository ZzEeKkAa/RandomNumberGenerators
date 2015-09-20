#ifndef RELGEN_H
#define RELGEN_H

#include <UnifDistrGen.h>


class RelGen : public RandGen
{
    public:
        RelGen(UnifDistrGen *r1,UnifDistrGen *r2);
        virtual ~RelGen();
        double GetNext();
    protected:
        UnifDistrGen *r1, *r2;
    private:
};

#endif // RELGEN_H
