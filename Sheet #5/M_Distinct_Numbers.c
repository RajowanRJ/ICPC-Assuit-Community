// Starting in the name of Almighty Allah
#include <stdio.h>

int Distinct ()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]); 
    }
    // Sorting Part
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    // Counting part
    
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if(a[i] != a[i - 1])
        count++;
    }
    return count;
}

int main ()
{
    printf("%d", Distinct());
}