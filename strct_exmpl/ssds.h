#ifndef SSDS_H
#define SSDS_H
#include <string>
using namespace std;

class SSDS
{
    public:
        SSDS();
        virtual ~SSDS();
        SSDS(const SSDS& other);
        SSDS& operator=(const SSDS& other);
        int cnt;
        string onoma,smart_value1,smart_value2,smart_value3;
        int insert_in(int cnt,string onoma,string smart_value1,string smart_value2,string smart_value3){
            this->cnt=cnt;
            this->onoma=onoma;
            this->smart_value1=smart_value1;
            this->smart_value2=smart_value2;
            this->smart_value3=smart_value3;
        }
        int show_at(int cnt){return this->cnt;};
        string show_other_at(int cnt){
                                    string s;
                                    s+=to_string(this->cnt);
                                    s+=" ";
                                    s+=this->onoma;
                                    s+=" ";
                                    s+=this->smart_value1;
                                    s+=" ";
                                    s+=this->smart_value2;
                                    s+=" ";
                                    s+=this->smart_value3;
                                    s+="\n";
                                    return s;
                                    }
        string show_onoma(string onoma){return this->onoma;}
        string show_onoma_at(int cnt){return this->onoma;}
        string show_smartone(string smart_value1){return this->smart_value1;}
        string show_smarttwo(string smart_value2){return this->smart_value2;}
        string show_smartthree(string smart_value3){return this->smart_value3;}

    protected:

    private:
};

#endif // SSDS_H
