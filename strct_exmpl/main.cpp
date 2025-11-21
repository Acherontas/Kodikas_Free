#include <iostream>
#include "ssds.h"
using namespace std;

// we create a class with 10 instances
//each instance contains a array of variables


int main(int argc,char** argv)
{
    SSDS ssds[10];
    int counter;
    string onoma,smart_value1,smart_value2,smart_value3;
    for(int i=1;i<=2;i++){
            cout<<"enter counter ,onoma kai 3 values\n";
            cin>>counter;
            cin>>onoma;
            cin>>smart_value1;
            cin>>smart_value2;
            cin>>smart_value3;
            ssds[i].insert_in(counter,onoma,smart_value1,smart_value2,smart_value3);
    }
    int x;
    while(x!=4){
        cout<<"enter a number lower than 4 \n";
        cout<<"to show a line\n";
        cin>>x;
        cout<<"ABC" <<ssds[x].show_other_at(x);
        cout<<"enter again \n";
        cin>>x;
        cout<<"ADD " <<ssds[x].show_onoma_at(x);
        cout<<"\n";
    }

    return 0;
}
