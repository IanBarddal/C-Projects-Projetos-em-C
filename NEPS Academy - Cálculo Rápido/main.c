#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int soma, a, b, x;
    int digito1, digito2, digito3, digito4, digito5, digito6, digito7, digito8, digito9, digito10;
    int soma1 = 0;
    int soma2 = 0;
    int soma3 = 0;
    int contaSoma = 0;

    printf ("Digite um número: ");
    scanf ("%d", &soma);

    printf ("Digite um intervalo: ");
    scanf ("%d", &a);
    scanf ("%d", &b);

    for (x = a; x <= b; x++)
    {
        if (x > 0 && x < 100)
        {
            digito1 = x / 10;
            digito2 = x % 10;

            soma1 = digito1 + digito2;

            if (soma1 == soma)
            {
                contaSoma++;
            }
        }

        if (x >= 100 && x < 1000)
        {
            digito3 = x / 100; /* Ok! */
            digito4 = (x / 10) % 10; /* Ok! */
            digito5 = x % 10;

            soma2 = digito3 + digito4 + digito5;

            if (soma2 == soma)
            {
                contaSoma++;
                printf ("%d vezes", contaSoma);
            }
        }

        if (x >= 1000 && x <= 10000)
        {
            digito6 = x / 10000;
            digito7 = (x / 1000) % 10;
            digito8 = (x / 100) % 10;
            digito9 = (x / 10) % 10;
            digito10 = x % 10;

            soma3 = digito6 + digito7 + digito8 + digito9 + digito10;

            if (soma3 == soma)
            {
                contaSoma++;
            }
        }
    }

    printf ("%d vezes", contaSoma);

    return (0);
}
