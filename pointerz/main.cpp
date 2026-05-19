#include <iostream>
using namespace std;
int main(int argc,char** argv)
{
    int l;
    int *p;
    l=24443321;
    l=123456;
    p=&l;
    cout<<l<<"\n";
    cout<<*p<<" "<<p <<"\n";
    int x=0;
    for(;;){
      cout<<(*p+x)<<"\n";
      x+=1;
      if(x==10){break;}
    }
    string s;
    s+=to_string(l);
    int m=0;
    for(;;)
    {
        cout<<s.at(m)<<"\n";
        m+=1;
        if(m==s.size()){break;}
    }
    cout<<"\n";
    char k[]={'2','4','4','3','3','2','1'};
    cout<<"of char " << k[1]<<"\n";
    k[1]=char(l);
    cout<<"of char " << k[1]<<"\n";


    //-fpermissive
    char c=argv[0];
    cout<<"at addresss as text   " << &c<<"   "<< c<<"\n";
    char ka=(char)malloc(sizeof(argv[0]));
    ka='A';
    cout<<"at addresss as text   " <<&ka<<"    "<<ka <<"\n";


    cout<<"entering \n";
    int xi=0;
    string su;
    su+=argv[0];
    //cout<<su <<"\n";
    for(;;){
            char ckl=argv[0][xi];
            cout<<ckl<<"";
            xi+=1;
            if(xi==su.size()){cout<<"\n";break;}
    }

    xi=0;
    cout<<"\n";
    cout<<"entering second loop \n";
    cout<<"\n";
    for(;;){
            char ckl=argv[0][xi];
            cout<<ckl <<" ";
            xi+=1;
            if (xi==1784){ //allazei analogos to mixanima xD
                          cout<<"\n";
                          cout<<"isixia xD\n";
                          break;
                   }
    }

    char *ckl;
    ckl=argv[0];
    *ckl='B';
    cout<<ckl<<"\n";

    return 0;
}
