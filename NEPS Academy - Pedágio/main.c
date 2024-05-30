#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int comprimentoEstrada, x;
    int distancia;
    int custo, custoKm;
    int valorPedagio, custoPedagio;
    int pedagios;
    int custoTotal;

    printf ("Digite o comprimento da estrada: ");
    scanf ("%d", &comprimentoEstrada);

    printf ("Digite a dist�ncia entre os ped�gios: ");
    scanf ("%d", &distancia);

    printf ("Digite o custo por km rodado da estrada: ");
    scanf ("%d", &custo);

    printf ("Digite o custo de cada ped�gio: ");
    scanf ("%d", &valorPedagio);

    for (x = 0; x <= distancia; x++)
    {
        pedagios = comprimentoEstrada / distancia;
        custoPedagio = valorPedagio * pedagios;
    }

    custoKm = custo * comprimentoEstrada;
    custoTotal = custoPedagio + custoKm;

    printf ("H� %d ped�gios na estrada.\n", pedagios);
    printf ("O custo da viagem ser� de R$ %d.", custoTotal);

    return (0);

}
