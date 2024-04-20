// Starting in the name of ALmighty Allah
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, i, j, count = 0;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 2; j < i; j++)
        {
            count = 0;
            if (i % j == 0){
                count++;
                break;
            }
        }
        if (count == 0 && i != 1) {
            cout << i << " ";
           
        }
        
    }
    
    
}