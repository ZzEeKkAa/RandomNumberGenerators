#include "HelpFuncs.h"


int HelpFuncs::gcd(int a, int b){
    if(a==0 || b==0) return a+b;
    if(a>b) return gcd(a%b,b);
    return gcd(a,b%a);
}

int HelpFuncs::pow(int n, int p, int m){
    long long ans=1;
    int p0=1;
    long long n0=n;
    long long lm=m;
    for(int i=0; i<30; ++i){
        if(p0&p){
            ans*=n0;
            ans%=lm;
        }
        p0=p0<<1;
        n0=(n0*n0)%lm;
    }

    return (int)ans;
}
