#include<iostream>
using namespace std;
int x = 12;
int main(){
    int x = 50;
    ::x = 62;
    //cout << x << endl;
    cout <<::x << endl;
    return 0;
}