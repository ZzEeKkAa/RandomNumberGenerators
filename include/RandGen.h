#ifndef RANDGEN_H
#define RANDGEN_H


class RandGen
{
    public:
        RandGen();
        virtual ~RandGen();
        virtual double GetNext();
        const char* GetWarnings();
    protected:
        char* warnings;
        virtual void Check();
    private:
};

#endif // RANDGEN_H
