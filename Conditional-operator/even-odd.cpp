#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter any integer: ";
    cin >> num;
    (num % 2 == 0) ? cout << num  << " is Even number" : cout << num << " is Odd number ";
    return 0;
}