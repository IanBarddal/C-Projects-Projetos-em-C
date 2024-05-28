#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int x, n;
    int soma = 0;

    printf ("Digite um número limite: ");
    scanf ("%d", &n);

    for (x = 1; x < n; x++)
    {
        if (x % 3 == 0 || x % 5 == 0)
        {
            soma+=x;
        }
    }

    printf ("A soma é dos múltiplos é %d.", soma);

    return (0);
}
