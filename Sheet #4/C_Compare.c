// Starting in the name of Almighty Allah
#include <stdio.h>
#include <string.h>

int main ()
{
    char a[22], b[22];
    scanf("%s %s", a, b);
    int val = strcmp(a, b);
    
    if(val < 0)
    {
        printf("%s", a);
    }
    
    else
    {
        printf("%s", b);
    }

}