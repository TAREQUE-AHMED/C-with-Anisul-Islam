#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 1; i <=n; i++)
    {
        sum = sum + pow(i,2);
    }
    cout << sum;
    return 0;
}