#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    float valorArvore;
    int x;
    int quantidadeEnfeites[3];
    float valorEnfeite[3];
    float enfeite[3];

    /* OBS: N�o estava calculando o custo do enfeite porque os arrays "quantidadeEnfeites", "valorEnfeite" e "enfeite" n�o estavam inicializados em um n�mero. */

    float custoEnfeites;

    float totalGasto;
    float valorPago;

    printf ("Digite o valor da �rvore: ");
    scanf ("%f", &valorArvore);

    for (x = 0; x < 3; x++)
    {
        printf ("Digite a quantidade de enfeites: ");
        scanf ("%d", &quantidadeEnfeites[x]);

        printf ("Digite o valor unit�rio dos enfeites: ");
        scanf ("%f", &valorEnfeite[x]);

        enfeite[x] = valorEnfeite[x] * quantidadeEnfeites[x];

        custoEnfeites += enfeite[x];
    }

    totalGasto = custoEnfeites + valorArvore;
    valorPago = totalGasto / 21;

    printf ("Total gasto: R$ %.2f\n", totalGasto);
    printf ("Valor a ser pago por cada colaborador: R$ %.2f\n", valorPago);

    return (0);

}
