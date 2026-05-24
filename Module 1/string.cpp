#include <iostream>
using namespace std;

int main()
{

    int x;
    // string s;
    cin >> x;
    cin.ignore(); // Ignore the newline character left in the input buffer
    char s[100];
    cin.getline(s, 100);
    cout << x << endl
         << s << endl;

    return 0;
}