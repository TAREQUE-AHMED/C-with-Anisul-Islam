//2+4+6+.......+n
#include<iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 2; i <=n; i=i+2)
    {
        sum = sum + i;
    }
    cout << sum;
}