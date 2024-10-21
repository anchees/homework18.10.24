#include <iostream>
#include <cstring>
using namespace std;

class phoneb{
private:
    char *name;
    string homep;
    string workp;
    string mobilep;
    string moreinfo;
public:
    phoneb() : name(nullptr), homep(""), workp(""), mobilep(""), moreinfo("None") {}
    phoneb(const char* nname, const string& nhomep, const string& nworkp,
    const string& nmobilep, const string& nmoreinfo) : homep(nhomep), 
    workp(nworkp), mobilep(nmobilep), moreinfo(nmoreinfo) {
        name = new char[strlen(nname)+1];
        strcpy(name, nname);
    }


    ~phoneb(){
        delete[] name;
    }
    inline const char* getname() {return name;}
    inline const string gethomrp() {return homep;}
    inline const string getworkp() {return workp;}
    inline const string getmobilep() {return mobilep;}
    inline const string getmoreinfo() {return moreinfo;}
    void vivod();
    void vvod();
};