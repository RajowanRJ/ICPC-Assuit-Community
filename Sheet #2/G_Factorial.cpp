// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    long long n;
    cin >> t;
    for (int j = 0; j < t; j++)
    {   
        long long x = 1;
        cin >> n;
    if (n == 0)
        {
            cout << "1" << endl;
        }    
        else {
            for (int i = 1; i <= n; i++) {
                x *= i;
            }
            cout << x << endl;
        }
    }
    
}