#include<iostream>
using namespace std;
int main(){
    int a = 32;
    int c;
    c = a << 3;//32*2,64*2,128*2=256
    cout << c << endl;
    c = a >> 3; //32/2,16/2,8/2=4
    cout << c << endl;
    return 0;
}