// Starting in the name of Almighty Allah
#include <stdio.h>

int main ()
{
    char s;
    scanf("%c", &s);

    int n, m;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        while (m--)
        {
            printf("%c", s);
        }
        printf("\n");
    }
    
}