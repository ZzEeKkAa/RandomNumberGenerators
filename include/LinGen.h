#ifndef LINGEN_H
#define LINGEN_H

#include <UnifDistrGen.h>


class LinGen : public UnifDistrGen
{
    public:
        LinGen(int a, int c, int m, int x);
        virtual ~LinGen();
        int GetNextInt();
    protected:
        int a,c;
    private:
        void Check();
};

#endif // LINGEN_H
