#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int x, n, i;
    int multiplo[n];
    int contaMultiplos = 0;

    printf ("Digite o valor do número cujos múltiplos você deseja encontrar: \n");
    scanf ("%d", &x);

    printf ("Digite o número limite: \n");
    scanf ("%d", &n);

    for (i = 1; i < n; i++)
    {
        multiplo[i] = x * i;

        if (multiplo[i] < n)
        {
            printf ("%d\t\n", multiplo[i]);
            contaMultiplos++;
        }
    }

    printf ("Há %d múltiplos de %d menores que %d!", contaMultiplos, x, n);

    return (0);

}
