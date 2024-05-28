#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    float valorProduto, valorAcrescimo, valorFinal;
    int garantia;

    printf ("Coloque o valor do produto: ");
    scanf ("%f", &valorProduto);

    printf ("Quanto tempo você quer de garantia? ");
    scanf ("%d", &garantia);

    if (garantia == 1)
    {
        valorAcrescimo = valorProduto * 0.03;
        valorFinal = valorAcrescimo + valorProduto;
        printf ("Valor final: R$ %.2f", valorFinal);
    }
    else if (garantia == 2)
    {
        valorAcrescimo = valorProduto * 0.05;
        valorFinal = valorAcrescimo + valorProduto;
        printf ("Valor final: R$ %.2f", valorFinal);
    }
    else if (garantia == 0)
    {
        printf ("Valor final: R$ %.2f", valorProduto);
    }

    return (0);
}
