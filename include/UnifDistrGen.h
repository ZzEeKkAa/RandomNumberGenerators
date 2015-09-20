#ifndef UNIFDISTRGEN_H
#define UNIFDISTRGEN_H

#include <RandGen.h>


class UnifDistrGen : public RandGen
{
    public:
        UnifDistrGen(int x, int m);
        virtual ~UnifDistrGen();
        double GetNext();
        virtual int GetNextInt();
    protected:
        int x, m;
    private:
};

#endif // UNIFDISTRGEN_H
