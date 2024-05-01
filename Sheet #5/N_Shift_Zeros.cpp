// Starting in the name of Almighty Allah 
#include <bits/stdc++.h>
using namespace std;

void Shift_Zeros (int a[], int n)
{
    int tmp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == 0)
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }    
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main ()
{
    int n; 
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    Shift_Zeros(a, n);
}