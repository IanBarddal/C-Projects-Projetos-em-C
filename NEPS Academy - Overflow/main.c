#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int max, a, b;
    char operacao;

    printf ("Entre com o n�mero m�ximo: ");
    scanf ("%d", &max);

    printf ("Entre com o primeiro n�mero: ");
    scanf ("%d", &a);

    getchar ();

    printf ("Entre com o tipo de opera��o (soma ou multiplica��o): ");
    scanf ("%c", &operacao);

    printf ("Entre com o segundo n�mero: ");
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
