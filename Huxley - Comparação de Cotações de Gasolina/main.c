#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    /* preço do galão em reais: 16,15 -> 3,8 litros*/
    /* preço do litro da gasolina: 4,49 -> 1 litro */

    float gasolinaUS;
    float litro;
    float galao = 3.8;
    float dolar;
    float precoAmericano;

    printf ("Digite o valor do galão de gasolina nos Estados Unidos, em dólares: ");
    scanf ("%f", &gasolinaUS);

    printf ("Digite o valor do litro de gasolina no Brasil, em reais: ");
    scanf ("%f", &litro);

    printf ("Digite a cotação do dólar, em reais: ");
    scanf ("%f", &dolar);

    precoAmericano = (gasolinaUS / galao) * dolar;

    if (litro > precoAmericano)
    {
        printf ("Gasolina EUA: R$ %.2f\n", precoAmericano);
        printf ("Gasolina Brasil: R$ %.2f\n", litro);
        printf ("Mais vantajosa nos Estados Unidos!");
    }

    else if (litro < precoAmericano)
    {
        printf ("Gasolina EUA: R$ %.2f\n", precoAmericano);
        printf ("Gasolina Brasil: R$ %.2f\n", litro);
        printf ("Mais vantajosa no Brasil!");
    }

    else if (litro == precoAmericano)
    {
        printf ("Gasolina EUA: R$ %.2f\n", precoAmericano);
        printf ("Gasolina Brasil: R$ %.2f\n", litro);
        printf ("Mesmo preço");
    }

    return (0);
}
