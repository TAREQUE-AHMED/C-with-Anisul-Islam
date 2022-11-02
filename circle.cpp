#include<iostream>
using namespace std;
int main(){
    double radius,pi;
    cout << "Enter the value of radius: ";
    cin >> radius;

    cout << "Enter the value of pi: ";
    cin >> pi;

    double area = 2 * pi * radius;
    cout << "Area of circle is= " << area;
    return 0;
}