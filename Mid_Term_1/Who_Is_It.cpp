#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[100]; // Changed from string to char array
    char section;
    int marks;

    // Constructor
    Student(int i, char n[], char s, int m)
    {
        id = i;
        strcpy(name, n); // Copies the char array content
        section = s;
        marks = m;
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int id1, id2, id3;
        char name1[100], name2[100], name3[100]; // Changed to char arrays
        char sec1, sec2, sec3;
        int marks1, marks2, marks3;

        // Input for 3 students
        cin >> id1 >> name1 >> sec1 >> marks1;
        cin >> id2 >> name2 >> sec2 >> marks2;
        cin >> id3 >> name3 >> sec3 >> marks3;

        // Create objects
        Student s1(id1, name1, sec1, marks1);
        Student s2(id2, name2, sec2, marks2);
        Student s3(id3, name3, sec3, marks3);

        // Assume s1 is best
        Student best = s1;

        // Compare with s2
        if (s2.marks > best.marks ||
            (s2.marks == best.marks && s2.id < best.id))
        {
            best = s2;
        }

        // Compare with s3
        if (s3.marks > best.marks ||
            (s3.marks == best.marks && s3.id < best.id))
        {
            best = s3;
        }

        // Output
        cout << best.id << " "
             << best.name << " "
             << best.section << " "
             << best.marks << endl;
    }

    return 0;
}