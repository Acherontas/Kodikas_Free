#ifndef DA_CLASS_H
#define DA_CLASS_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class da_class
{
    public:
        da_class();
        virtual ~da_class();
        da_class(const da_class& other);
        da_class& operator=(const da_class& other);
        vector<int> cnt;
        vector<string> nm;
        vector<string> vlone;
        vector<string> vltwo;
        vector<string> vlthree;
        int insertt(string name,string vlonne,string vlttwo,string vltthree);
        void show_at_pos(int pso);
        int delete_at_pos(int pso);
        int show_all();

    protected:
        int cnti=0;
    private:
};

#endif // DA_CLASS_H
