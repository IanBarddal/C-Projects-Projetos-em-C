#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    /* pre�o do gal�o em reais: 16,15 -> 3,8 litros*/
    /* pre�o do litro da gasolina: 4,49 -> 1 litro */

    float gasolinaUS;
    float litro;
    float galao = 3.8;
    float dolar;
    float precoAmericano;

    printf ("Digite o valor do gal�o de gasolina nos Estados Unidos, em d�lares: ");
    scanf ("%f", &gasolinaUS);

    printf ("Digite o valor do litro de gasolina no Brasil, em reais: ");
    scanf ("%f", &litro);

    printf ("Digite a cota��o do d�lar, em reais: ");
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
        printf ("Mesmo pre�o");
    }

    return (0);
}
