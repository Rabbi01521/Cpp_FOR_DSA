#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100]; // 100 byte
    int roll;       // 4 byte
    char section;   // 1 byte
    double gpa;     // 8 byte
};

int main()
{

    Student a, b;

    cin.getline(a.name, 100);

    cin >> a.roll >> a.gpa;
    cin.ignore();
    //getchar();
    cin.getline(b.name, 100);
    cin >> b.roll >> b.gpa;

    // a.roll = 113;
    // a.gpa = 2.95;
    // char temp[100] = "Rabbi";
    // strcpy(a.name, temp);

    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;

    return 0;
}