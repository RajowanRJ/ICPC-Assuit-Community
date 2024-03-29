#include <iostream>
using namespace std;

int main ()
{
    float x;
    cin >> x;
    int y = x;

    if (y - x < 0) {
        cout << "float " << y << " " << x - y;
    }
    else {
        cout << "int " << y;
    }
}