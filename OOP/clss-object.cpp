#include<iostream>
using namespace std;
class Student{
    public:
    int id;
    double cgpa;
};
int main(){
    Student Tareque, Rahat;
    Tareque.id = 400;
    Tareque.cgpa = 4.00;

    cout << " ID: " << Tareque.id << " " <<"CGPA "<< Tareque.cgpa<<endl;

    Rahat.id = 100;
    Rahat.cgpa = 5.00;

    cout << " ID: " << Rahat.id << " "
         << "CGPA " << Rahat.cgpa << endl;

    return 0;
}