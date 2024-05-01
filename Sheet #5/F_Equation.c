// Starting in the name of Almighty Allah
#include <stdio.h>
#include <math.h>

long long int Equation (int x, long long int n)
{
    int i = 2;
    long long int sum = 0;
    while (i <= n)
    {
        sum += pow(x, i);
        i += 2;
    }
    return sum;
}

int main ()
{
    int x, n;
    scanf("%d %d", &x, &n);

    printf("%lld", Equation(x, n));
}