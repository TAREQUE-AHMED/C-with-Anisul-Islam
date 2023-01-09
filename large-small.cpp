#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout << "Enter your two number: ";
    cin >> num1 >> num2;
    if (num1>num2)
    {
        cout << "1st number is larger";
    }
    else{
        cout << "2nd number is larger";
    }
    return 0;
}