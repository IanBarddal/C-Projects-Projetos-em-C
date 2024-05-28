#include <stdio.h>

int main ()
{
    int n;

    n = 0;
    while (n < 1000)
    {
        printf ("%d\t", n+1);
        n = n + 1;
    }

    return (0);
}
