#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char ck;
    char *mk;
    cout<<sizeof(char) << " " << sizeof(char *) <<"\n";
    cout<<sizeof(ck) << " with size of " << sizeof(mk) << " and " << sizeof(*mk) <<"\n";
    ck='C';
    *mk='A';
    cout<<sizeof(ck) << " with size of " << sizeof(mk) << " and " << sizeof(*mk) <<"\n";
    cout<<ck << " N " << *mk <<"\n";
    mk+=1;
    *mk='B';
    cout<<ck << " +1 pos " << *mk <<"\n";
    cout<<"\n";
    mk-=1;
    cout<<ck<<" -1 pos " <<*mk <<"\n";
    mk+=1;
    cout<<ck << " +1 pos " << *mk <<"\n";
    mk+=1;
    *mk='C';
    cout<<ck << " +1 pos null or C " << *mk <<"\n";
    cout<<"\n";
    mk-=1;
    cout<<ck << " -1 pos " << &mk <<" " << *mk <<"\n";
    mk+=1;
    cout<<ck << " +1 pos " << &mk <<" " << *mk <<"\n";
    mk-=1;
    cout<<"final " << &mk << " with  " << *mk <<"\n";
    mk-=1;
    cout<<"final " << &mk << " with  " << *mk <<"\n";

    return 0;
}
