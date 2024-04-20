// Starting in the name of ALmighty Allah
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, count = 0; 
    cin >> n;

    for (int i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
        count++;
    }
    if(count != 0 || n == 0 || n == 1)
    {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
    }
    
}