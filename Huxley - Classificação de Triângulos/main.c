#include <stdio.h>

int main ()
{
    int a,b,c;

    scanf ("%d %d %d", &a,&b,&c);

    if ((a == b) && (b == c))
    {
        printf ("equilatero\n");
    }
    else if ((a == b) && (b != c))
    {
        printf ("isosceles\n");
    }
    else if ((a != b) && (b == c))
    {
        printf ("isosceles\n");
    }
    else if ((a == c) && (c != b))
    {
        printf ("isosceles\n");
    }

    else
    {
        printf ("escaleno\n");
    }

    return (0);
}
