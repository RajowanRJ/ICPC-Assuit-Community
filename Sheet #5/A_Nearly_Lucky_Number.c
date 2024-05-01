// Starting in the name of Almighty Allah
#include <stdio.h>

int Lucky_Number(long long int n)
{   
    int r, flag = 0;
    while (n)
    {
        if (n % 10 != 4 && n % 10 != 7)
        flag++;
        n = n / 10;
    }
    if (flag == 0)
    return 1;
    else 
    return 0;
}

int main ()
{
    long long int n;
    scanf("%lld", &n);

    int x = Lucky_Number (n);
    (x == 1) ? printf("YES") : printf("NO");
}