#include<iostream>
using namespace std;
int main(){
    double cels, farh;
    cout << "Enter the value of fahrenheit: ";
    cin >> farh;
    cels = (farh - 32) / 1.8;
    cout << "Value of celcius is: " << cels;
    return 0;
}