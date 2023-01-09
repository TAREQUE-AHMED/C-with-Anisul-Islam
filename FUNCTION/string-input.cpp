#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    char name[50];
    cout << "Enter your name: ";
    gets(name);
    cout << "Wlcome " << name;
    return 0;
}