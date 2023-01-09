#include<iostream>
using namespace std;
void addition(int a,int b){
    int sum = a + b;
    cout << "Sum = " << sum<<endl;
}
void subtraction(int a,int b){
    int sum = a - b;
    cout << "Sum = " << sum<<endl;
}
void multiplaction(int a,int b){
    int sum = a * b;
    cout << "Sum = " << sum<<endl;
}
void division(int a,int b){
    int sum = a / b;
    cout << "Sum = " << sum<<endl;
}

int main(){
    addition(20, 10);
    subtraction(20, 10);
    multiplaction(20, 10);
    division(20, 10);
    return 0;
}