#ifndef INVCONGGEN_H
#define INVCONGGEN_H

#include <UnifDistrGen.h>


class InvCongGen : public UnifDistrGen
{
    public:
        InvCongGen(int a, int c, int p, int x);
        virtual ~InvCongGen();
        int GetNextInt();
    protected:
        int a,c;
        //void Check();
    private:
};

#endif // INVCONGGEN_H
