#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int n, m;
    int x;
    int contaMultiplos = 0;

    printf ("Digite o primeiro número: ");
    scanf ("%d", &n);

    printf ("Digite o segundo número: ");
    scanf ("%d", &m);

    for (x = 1; x < 50; x++)
    {
        if (x % n == 0 && x % m == 0)
        {
            contaMultiplos++;
            printf ("%d\t", x);
        }

    }

    putchar ('\n');

    printf ("%d e %d têm %d múltiplos em comum.", n, m, contaMultiplos);

    return (0);
}
