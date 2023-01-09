#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    for (int i = 1; i <=5; i++)
    {
        /* code */
        int randomNumber = rand() % 5 + 1;
        cout << "Number is "
             << " " << randomNumber << endl;
    }
    
    
    return 0;
}