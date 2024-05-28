#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int max, a, b;
    char operacao;

    printf ("Entre com o número máximo: ");
    scanf ("%d", &max);

    printf ("Entre com o primeiro número: ");
    scanf ("%d", &a);

    getchar ();

    printf ("Entre com o tipo de operação (soma ou multiplicação): ");
    scanf ("%c", &operacao);

    printf ("Entre com o segundo número: ");
    scanf ("%d", &b);

    if (operacao == '+')
    {
        if (a + b <= max)
        {
            printf ("OK");
        }
        else
        {
            printf ("OVERFLOW");
        }
    }

    else if (operacao == '*')
    {
        if (a * b <= max)
        {
            printf ("OK");
        }
        else
        {
            printf ("OVERFLOW");
        }
    }

    return (0);
}
