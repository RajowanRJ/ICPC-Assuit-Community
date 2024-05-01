// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, x, a, b, sum = 0, isum = 0, m;
    cin >> n >> a >> b;
    
    for (int i = 1; i <= n; i++)
    {
        m = i;
        while (m != 0)
        {
            x = m % 10;
            sum += x;
            m /= 10;
        }
        if (sum >= a && sum <= b) {
            // cout << i << " - " << sum << endl;
            isum = isum + i;
        }
        sum = 0;
    }
    cout << isum;
}