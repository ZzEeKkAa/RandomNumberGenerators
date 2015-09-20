#ifndef FIBGEN_H
#define FIBGEN_H

#include <UnifDistrGen.h>


class FibGen : public UnifDistrGen
{
    public:
        FibGen(int x,int y, int m);
        virtual ~FibGen();
        int GetNextInt();
    protected:
        int y;
    private:
};

#endif // FIBGEN_H
