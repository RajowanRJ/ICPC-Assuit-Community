#include <iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;

    if (c >= 48 && c <= 57) { //from '0' to '9'
        cout << "IS DIGIT";
    }
    if (c >= 65 && c <= 90) { //from 'A' to 'Z'
        cout << "ALPHA" << endl << "IS CAPITAL";
    }
    if (c >= 97 && c <= 122) { //from 'a' to 'z'
        cout << "ALPHA" << endl << "IS SMALL";
    }
}