#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int n, x;

    scanf ("%d", &n);

    for (x = 1; x <= n; x++)
    {
        printf ("%d %d %d\n", x, x*x, x*x*x);
        printf ("%d %d %d\n", x, (x*x)+1, (x*x*x) + 1);
    }

    return (0);
}
