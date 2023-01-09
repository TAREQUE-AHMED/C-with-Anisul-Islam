//1+2+3+4+5+6+7+..............+n
#include<iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 1; i <=n; i++)
    {
        sum = sum + i;
    }
    cout << sum;
    return 0;
}