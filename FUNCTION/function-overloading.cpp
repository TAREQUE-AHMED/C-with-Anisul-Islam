#include<iostream>
using namespace std;
void add(int a,int b){
    int sum = a + b;
    cout << "Sum"
         << " = " << sum << endl;
}
void add(int a,int b,int c){
    int sum = a + b+ c;
    cout << "Sum"
         << " = " << sum << endl;
}
int main(){
    add(10, 20);
    add(10, 20, 30);
}