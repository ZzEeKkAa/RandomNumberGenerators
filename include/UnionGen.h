#ifndef UNIONGEN_H
#define UNIONGEN_H

#include <UnifDistrGen.h>


class UnionGen : public UnifDistrGen
{
    public:
        UnionGen(UnifDistrGen *r1, UnifDistrGen* r2, int m);
        virtual ~UnionGen();
        int GetNextInt();
    protected:
        void Check();
    private:
        UnifDistrGen *r1,*r2;
};

#endif // UNIONGEN_H
