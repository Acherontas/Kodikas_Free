#include <iostream>
using namespace std;

int main(int argc,char** argv)
{

    cout<<"Ποια ειναι η αναπαράσταση του παρακάτω πίνακα στην μνήμη;\n";
    int ar[10];
    ar[0]=1;
    ar[1]=2;
    ar[2]=3;
    ar[3]=4;
    ar[4]=5;
    ar[5]=6;
    ar[6]=7;
    ar[7]=8;
    ar[8]=9;
    ar[9]=10;
    ar[10]=11;
    cout<<"with address of ar " << &ar << "\n";
    for(int i=0;i<=10;i++){
        cout<<"@ i " << i << " with value of " << ar[i] << " ---> ";
        cout<<"and address of ar[" << i << "] " << &ar[i] <<"\n";
    }
    return 0;
}
