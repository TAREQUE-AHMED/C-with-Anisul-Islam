#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
   while (1)
   {
       int gessingNumber, randomNumber;
       cout << "Enter guess between 1 to 5: ";
       cin >> gessingNumber;
        randomNumber = rand() % 5 + 1;
       if (gessingNumber==randomNumber)
       {
           cout << "You won the game" << endl
                << endl;
       }
       else{
           cout << "You lost the game.Try Again"<<endl;
           cout << "Gussing number was: " << randomNumber << endl
                << endl;
       }
   }
   return 0;
}