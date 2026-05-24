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

Student* fun(){ // function that returns an object
    Student karim(2,5,5.00);
    Student* ptr = &karim; // pointer to the object
    return ptr;
}

int main()
{
    Student* ptr = fun(); // object return from function
    
    cout << ptr->roll << " " << ptr->cls << " " << ptr->gpa << endl;

    return 0;
}