#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int num1, num2;
    cout << "Enter two number: ";
    cin >> num1 >> num2;

    
    cout <<showpoint;
    cout << fixed;
    cout << setprecision(2);
    float sum = num1 + num2;
    cout << setw(20) <<"Sum is: " << sum;
    cout << endl;
    //cout << noshowpoint;
    float sub = num1 - num2;
    cout << "Substraction is: " << sub;
    cout << endl;

    float mul = num1 * num2;
    cout << "Multipilation is: " << mul;
    cout << endl;

    double div = (float)num1 / num2;
    cout << "Division is: " << div;
    cout << endl;

    return 0;
}