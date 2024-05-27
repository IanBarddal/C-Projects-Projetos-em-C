#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int x, n, i;
    int multiplo[n];
    int contaMultiplos = 0;

    printf ("Digite o valor do n�mero cujos m�ltiplos voc� deseja encontrar: \n");
    scanf ("%d", &x);

    printf ("Digite o n�mero limite: \n");
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

    printf ("H� %d m�ltiplos de %d menores que %d!", contaMultiplos, x, n);

    return (0);

}
