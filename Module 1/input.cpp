#include<iostream>
using namespace std;
int main(){
    int x;
    char c;
    double d;
    cin>> x >> c >> d;
    cout<< "Your Favorite number is "<<x<<endl;
    cout << "Your Favorite character is "<<c<<endl;
    cout << "Your Favorite double is "<<d<<endl;

    char e = 'A';
    int ascii = e;
    cout << "The ASCII value of " << e << " is " << ascii << endl;
    e = 'Z';
    cout << (int)e <<endl;
    int f = 68;
    cout<<(char)f<<endl;
    return 0;
}