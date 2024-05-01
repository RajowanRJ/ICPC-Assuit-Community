// Starting in the name of Almighty Allah
#include <stdio.h>

void fibo (int n)
{
    int sum = 0, a = 0, b = 1;
    for (int i = 0; i < n; i++)
    {
        
        printf("%d ", a);
        int sum = a + b;
        a = b;
        b = sum;
    }
    
}
int main ()
{
    int n;
    scanf("%d", &n);
    fibo(n);
}