// Starting in the name of Almighty Allah
#include <stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);

    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
         b[i] = a[i];
    }
    int tmp;
    for (int i = 0, j = n-1; i < j; i++,j--)
    {
        tmp = a[0];
        a[i] = a[j];
        a[j] = tmp;
    }
    
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
        {
            flag++;
        }
        else flag = 0;
    }  
    (flag == 0) ? printf("NO") : printf("YES");
}