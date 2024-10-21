#include <iostream>
#include <iomanip>
#include <fstream>
#include <conio.h>
#include "phonebook.h"
using namespace std;

int main(){
    ofstream out;
    phoneb user;
    string command;
    int users=1, h=1;
    out.open("phonebook.txt");
    while(h==1){
        out<<"user "<<users<<" :";
        cout<<"write \"break\" if you want to end\nwrite \"enter\" if you want to continue\n";
        cin>>command;
        cout<<"user "<<users<<" :"<<endl;
        if (command=="break"){
            break;
        } else{
            cout<<"";
        }
        user.vvod();
        user.vivod();
        users+=1;
    }
    out.close();
    _getch();
    return 0;
}