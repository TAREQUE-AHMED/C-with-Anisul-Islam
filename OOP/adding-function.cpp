#include <iostream>
using namespace std;
class Student
{
public:
    int id;
    double cgpa;
    void display(){
        cout << " ID: " << id << " "
             << "CGPA " << cgpa << endl;
    }
    Student(int x,double y){
        id = x;
        cgpa=y;
    }
};
int main()
{
    Student Tareque(101, 3.98);

    Tareque.display();

    Student Rahat(102, 4.00);
    Rahat.display();

    return 0;
}