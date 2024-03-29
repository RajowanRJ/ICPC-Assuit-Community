#include <iostream>
using namespace std;

int main ()
{
    int a, r;
    cin >> a;
    if (a > 999 && a <= 9999) {
        if ((a / 1000) % 2 == 0) {
            cout << "EVEN";
        }
        else {
            cout << "ODD";
        }
    }
}