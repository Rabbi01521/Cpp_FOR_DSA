#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa) // constructor
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main()
{
    // int r, c;
    // double g;

    // Student rahim(r, c, g);
    // Student rahim;
    // cin >> rahim.roll >> rahim.cls >> rahim.gpa;

    Student rahim(45, 5, 3.2);
    Student karim(2, 5, 5.00);

    // Student karim(r, c, g);
    // Student karim;
    // cin >> karim.roll >> karim.cls >> karim.gpa;

    // Student rahim(45, 5, 3.2);
    // Student karim(2, 5, 5.00);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    return 0;
}