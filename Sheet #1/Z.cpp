// Starting in the name of Almighty Allah!

#include <iostream>
#include <cmath>
using namespace std;

int main () 
{
    int a, c;
    long b, d;
    cin >> a >> b >> c >> d;
    
    if (pow(a,b) > pow (c,d))
    {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}