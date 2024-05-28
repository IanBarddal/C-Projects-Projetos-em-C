#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int n, m, soma, x;
    int digito1, digito2, digito3, digito4, digito5;
    int somaDigitos;
    int contaSoma = 0;
    int maiorSoma = 0;

    printf ("Digite o in�cio do intervalo: ");
    scanf ("%d", &n);

    printf ("Digite o final do intervalo: ");
    scanf ("%d", &m);

    printf ("Digite a soma dos d�gitos desejada: ");
    scanf ("%d", &soma);

    for (x = n; x <= m; x++)
    {
        digito1 = x / 10000;
        digito2 = (x / 1000) % 10;
        digito3 = (x / 100) % 10;
        digito4 = (x / 10) % 10;
        digito5 = x % 10;

        somaDigitos = digito1 + digito2 + digito3 + digito4 + digito5;

        if (soma == somaDigitos)
        {
            contaSoma++;
            maiorSoma = 0;
            if (x > maiorSoma)
            {
                maiorSoma = x;
            }
        }
    }

    if (contaSoma > 0)
    {
        printf ("O maior n�mero � %d", maiorSoma);
    }
    else if (contaSoma == 0)
    {
        printf ("N�o h� n�mero que satisfa�a a condi��o.");
    }

    return (0);
}
