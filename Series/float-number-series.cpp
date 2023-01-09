#include<iostream>
using namespace std;
int main(){
    double n;
    double sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    for (double i = 1.5; i <=n; i++)
    {
         sum = sum + i;
         //cout << i << endl;
    }
    cout << sum <<endl;
    return 0;
}