#include <iostream>
#include <sstream>
#include <iomanip>
#include <math.h>
#include "nmtostr.h"
using namespace std;

int main(int argc,char** argv)
{
    cout<<"enter ur number enter precision\n";
    long double urnm;
    urnm=stold(argv[1]);
    int preci;
    string sti;
    sti+=to_string(urnm);
    preci=stold(argv[2]);
    nmtostr *nmst=new nmtostr();
    nmst->stra(sti);
    string fnl;
    fnl=nmst->to_out;
    cout<<urnm << " " << sti <<" " << nmst->to_out <<"  " << fnl <<"\n";
    return 0;
}
