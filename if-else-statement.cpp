#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter any integer number : ";
    cin >> num;

    if (num>0)
    {
        cout << "Positive"<<endl;
    }
    if (num<0)
    {
        cout << "Negative"<<endl;
    }
    if (num==0)
    {
        cout << "Zero"<<endl;
    }
    cout << "Hello";
    return 0;
}