#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int numero, x;

    printf ("Escreva um número: ");
    scanf ("%d", &numero);

    for (x = 0; x <= numero; x++)
    {
        if (x % 10 != 0)
        {
            printf ("%d\t", x);
        }
    }

    return (0);
}
