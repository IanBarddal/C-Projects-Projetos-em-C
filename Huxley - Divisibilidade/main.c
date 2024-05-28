#include <stdio.h>

int main ()
{
    int x;

    scanf ("%d", &x);

    if (x % 4 == 0 && x % 7 == 0 && x % 5 != 0)
    {
        printf ("sim");
    }
    else
    {
        printf ("nao");
    }

    return (0);
}
