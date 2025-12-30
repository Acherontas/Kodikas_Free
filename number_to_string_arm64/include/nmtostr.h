#ifndef NMTOSTR_H
#define NMTOSTR_H
#include <iostream>
#include <sstream>
#include <iomanip>
#include <math.h>
using namespace std;

class nmtostr
{
    public:
        nmtostr();
        virtual ~nmtostr();
        nmtostr(const nmtostr& other);
        nmtostr& operator=(const nmtostr& other);
        string to_out;
        int stra(string stin);

    protected:

    private:
};

#endif // NMTOSTR_H
