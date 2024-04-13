#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    float fatura;
    float faturaMarco;
    float faturaAbril;
    float juros;

    printf ("Digite o valor da sua fatura:\n");
    scanf ("%f", &fatura);

    faturaMarco = fatura * 0.50;
    juros = 0.065 * faturaMarco;
    faturaAbril = faturaMarco + juros;

    printf ("Você pagará em março R$ %.2f.\n", faturaMarco);
    printf ("Você pagará em abril R$ %.2f.\n", faturaAbril);

    return (0);
}
