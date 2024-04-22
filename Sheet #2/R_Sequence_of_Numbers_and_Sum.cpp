// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int m, n;
    while (true) {
            cin >> m >> n;
            if (m <= 0 || n <= 0){
                break;
            }
            else {
        
                int sum = 0;
                for (int i = min (m,n); i <= max(m,n); i++)
                {
                    sum = sum + i;
                    cout << i << " ";
                }
                    cout << "sum =" << sum << endl;
        }
    }
    
    
     
}