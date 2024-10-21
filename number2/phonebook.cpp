#include <iostream>
#include <iomanip>
#include <conio.h>
#include <fstream>
#include "phonebook.h"
using namespace std;

void phoneb::vivod(){
    ofstream out;
    out.open("phonebook.txt");
    cout<<"Full name: "<< name << endl;
    cout<<"Home phone: "<< homep << endl;
    cout<<"Work phone: "<< workp << endl;
    cout<<"Mobile phone: "<< mobilep << endl;
    cout<<"More info: "<< moreinfo << endl; 

    out<<"Full name: "<< name << endl;
    out<<"Home phone: "<< homep << endl;
    out<<"Work phone: "<< workp << endl;
    out<<"Mobile phone: "<< mobilep << endl;
    out<<"More info: "<< moreinfo << endl; 
}

void phoneb::vvod(){
    cout<<"Enter full name: ";
    cin>>name;
    cout<<"Enter home phone: ";
    cin>>homep;
    cout<<"Enter work phone: ";
    cin>>workp;
    cout<<"Enter mobile phone: ";
    cin>>mobilep;
    cout<<"Enter more info: ";
    cin>>moreinfo;
}