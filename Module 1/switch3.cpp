#include<iostream>
using namespace std;
int main(){
    char c;
    cin>> c;

    switch(c){
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout<< c << " is a vowel"<<endl;
            break;
        default:
            cout<< c << " is a consonant"<<endl;

    }
}