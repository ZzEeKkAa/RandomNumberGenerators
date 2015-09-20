#include <stdio.h>
#include <vector>

#include "RandGen.h"

#include "LinGen.h"
#include "SquareGen.h"
#include "FibGen.h"
#include "InvCongGen.h"
#include "UnionGen.h"

#include "ThreeSigGen.h"
#include "PolCordGen.h"
#include "RelGen.h"

#include "LnGen.h"
#include "ArensGen.h"

using namespace std;

void LoadRandomNumbersToVector(vector<double>& v, RandGen *r, int n){
    for(int i=0; i<n; ++i){
        v.push_back(r->GetNext());
    }
}

void PrintGist(double l, double r, int parts, vector<double>&v){
    int num=0;
    vector<int> nums;
    nums.assign(parts,0);

    double len=r-l;
    int pos;
    for(vector<double>::iterator t=v.begin(); t<v.end(); ++t){
        pos=(*t-l)/len*parts;
        if(pos<0) continue;
        if(pos<parts){
            ++nums[pos];
            ++num;
        }
    }

    printf("Total numbers at half-interval [%.1lf..%.1lf) is %d\n",l,r,num);
    double step=len/parts;
    for(int i=0; i<parts; ++i){
        double left=l+i*step;
        printf("[%.1lf;%.1lf)\t%.4lf\n",left,left+step, num?(nums[i]/(double)num):0.0 );
    }
}

int main(){
    const char*warnings;
    vector<double> num;

    RandGen *r=NULL;


    //r=new LinGen(10005,47,20008,0);
    //r=new SquareGen(10004,10005,47,20008,0);
    //r=new FibGen(2,1,10007);
    //r=new UnionGen(new LinGen(10005,47,20008,0),new FibGen(2,1,10007),20007);
    //r=new InvCongGen(98765,43210,1073676287,12345678);

    //r=new ThreeSigGen(new LinGen(10005,47,20008,0));
    //r=new PolCordGen(new LinGen(10005,47,20008,0));
    r=new RelGen(new LinGen(10005,47,20008,0),new FibGen(2,1,10007));

    //r=new LnGen(new LinGen(10005,47,20008,0),30);
    //r=new ArensGen(new LinGen(10005,47,20008,0),new SquareGen(10004,10005,47,20008,0),1);

    warnings = r->GetWarnings();
    printf("%s",warnings);

    LoadRandomNumbersToVector(num,r,100000); // Java style =)

    PrintGist(0,1,10,num);
    //PrintGist(0,20,10,num);
    //PrintGist(0,1.4,20,num);

    return 0;
}
