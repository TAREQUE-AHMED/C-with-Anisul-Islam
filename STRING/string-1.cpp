#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    // char message[6] = {'h', 'e', 'l', 'l', 'o'};
    // cout<< message;
    char name[30];
    cout << "Enter you name: ";
    gets(name);
    cout << "Welcome " << name << endl;
    return 0;
}