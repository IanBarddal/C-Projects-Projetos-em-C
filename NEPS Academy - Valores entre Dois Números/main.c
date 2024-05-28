#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int a,b,temp;
    int x, m, n;

    printf ("Entre com o início do intervalo: ");
    scanf ("%d", &m);

    printf ("Entre com o fim do intervalo: ");
    scanf ("%d", &n);

    if (n < 0 || m > n)
    {
        for (x = n; x <= m; x++)
        {
            printf ("%d\t", x);
        }
    }
    else
    {
        for (x = m; x <= n; x++)
        {
            printf ("%d\t", x);
        }
    }

    return (0);

}
