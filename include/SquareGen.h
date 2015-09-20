#ifndef SQUAREGEN_H
#define SQUAREGEN_H

#include <LinGen.h>


class SquareGen : public LinGen
{
    public:
        SquareGen(int d,int a,int c,int m,int x);
        virtual ~SquareGen();
        int GetNextInt();
    protected:
        int d;
        void Check();
    private:
};

#endif // SQUAREGEN_H
