#include <iostream>
#include "da_class.h"
using namespace std;

int main()
{
    da_class *dcls=new da_class();
    dcls->insertt("sandisk","1","2","3");
    dcls->insertt("western","3","4","5");
    int x=-1;
    cout<<"1 to insert\n";
    cout<<"2 to show at pos\n";
    cout<<"3 to delete at pos\n";
    cout<<"4 to show_all\n";
    cout<<"5 to exit\n";
    while(x!=5){
        cin>>x;
        if(x==1){
            string nam;
            string xo;
            string xt;
            string xty;
            cout<<"enter name val1 val2 val3\n";
            cin>>nam;
            cin>>xo;
            cin>>xt;
            cin>>xty;
            dcls->insertt(nam,xo,xt,xty);
        }
        if(x==2){
            int xy=0;
            cout<<"enter pos\n";
            cin>>xy;
            dcls->show_at_pos(xy);
        }
        if(x==3){
            int xy=0;
            cout<<"enter pos to delete\n";
            cin>>xy;
            dcls->delete_at_pos(xy);
        }
        if(x==4){
            dcls->show_all();
        }
        if(x==5){break;}
    }
    return 0;
}
