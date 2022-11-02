#include<iostream>
using namespace std;
int main(){
    double far, cels;
    cout << "Enter celcius value: ";
    cin >> cels;
    far = 1.8 * cels + 32;
    cout << "Value in fahrenheit is= " << far;
    return 0;
}