// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b, sum = 0;
        cin >> a >> b;

        for (int i = min(a,b)+1; i < max(a,b); i++)
        {
            if(i % 2 != 0)
            {
                sum += i;
            }
        }
        cout << sum << endl;
    }
}