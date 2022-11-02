#include<iostream>
using namespace std;
int main(){
    double width, height;
    cout << "Enter width: ";
    cin >> width;

    cout << "Enter height: ";
    cin >> height;

    double Area = width * height;
    cout << "Area of rectangle is= " << Area;
    return 0;
}