#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout << "Enter the value of n: ";
    cin >> n;
    int students[n];
    for (int i = 0; i <n; i++)
    {
        cout << "Marks for student " << i + 1 << " = ";
        cin >> students[i];
        sum = sum + students[i];
    }
    float aveg = (float)sum / n;
    cout << "Total marks = " << sum << endl;
    cout << "Average = " << aveg << endl;
    int max = students[0];
    int min = students[0];
    for (int i = 0; i <n; i++)
    {
        if (max<students[i])
        {
            max = students[i];
        }
        if (min>students[i])
        {
            min = students[i];
        }
    }
    cout << "Maximum Marks: " << max << endl;
    cout << "Minimum Marks: " << min << endl;

    return 0;
}