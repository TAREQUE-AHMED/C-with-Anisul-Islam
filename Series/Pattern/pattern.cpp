#include<iostream>
using namespace std;
int main(){
    int n, col, row;
    cout << "Enter the value of n: ";
    cin >> n;
    for (row = 1; row<=n; row++)
    {
        for (col = 1; col<=row; col++)
        {
            //cout << " " << col;
            //cout << " " << row;
           // cout << " " << col % 2;
            //cout << " " << row % 2;
            cout << " * ";
        }
        cout << endl;
    }
    
}