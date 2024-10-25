#include <iostream>
#include <iomanip>
#include <fstream>
#include <conio.h>
#include <string>
#include "phonebook.h"
using namespace std;

int main(){
    ifstream book;
    int sc=0, size=0, nw=0;
    cout<<"Enter phonebook size: ";
    cin>>size;
    cin.ignore(); 
    phoneb users[size];
    string command;
    book.open("phonebook.txt");
    for (int i=0; i<size; i++){
        users[i].filevvod(book);
    }    

    for (int i=0; i<size; i++){
        cout<<"\n";
        users[i].vivod();
    }
    string person;
    cout<<"Enter the full name of the person you want to delete: ";
    getline(cin, person);
    int zap=0;
    for (int i=0; i<size; i++){
        if (users[i].getname()==person){
            zap+=1;
        }
        if (zap!=0 && i+1!=size){
            users[i]=users[i+1];
        }else if (zap!=0 && i+1==size){
            users[i].delet();
        }
    }
    zap=0;
    for (int i=0; i<size; i++){
        cout<<"\n";
        users[i].vivod();
    }

    ofstream bookin;
    bookin.open("phonebook.txt");
    for (int i=0; i<size; i++){
        users[i].filevivod(bookin);
    }
    bookin.close();


    cout<<"Enter the name of the person you are looking for: ";
    _getch();
    return 0;
}


    // ofstream out;
    // out.open ("FILENAME",std::ios::trunc | std::ios::binary);
    // out.open("phonebook.txt");
    // while(h==1){
    //     out<<"user "<<users<<" :";
    //     cout<<"write \"break\" if you want to end\nwrite \"enter\" if you want to continue\n";
    //     cin>>command;
    //     cout<<"user "<<users<<" :"<<endl;
    //     if (command=="break"){
    //         break;
    //     } else{
    //         cout<<"";
    //     }
    //     user.vvod();
    //     user.vivod();
    //     users+=1;
    // }
    // out.close();

    // for (int i; i<size; i++){
    //     users[i].vvod();
    // }