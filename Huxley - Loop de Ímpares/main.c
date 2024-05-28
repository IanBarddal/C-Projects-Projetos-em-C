#include <stdio.h>

int main ()
{
    int a,b,n;

    scanf ("%d %d", &a, &b);

    while (n <= b)
    {
        if ((n % 2 != 0) && (n >= a))
        {
            printf ("%d\n", n);
        }
        n = n + 1;
    }

    return (0);
}
