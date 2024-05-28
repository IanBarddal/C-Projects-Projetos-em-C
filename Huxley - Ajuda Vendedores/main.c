#include <stdio.h>

int main ()
{
    float valor, desconto, prazo, comissaoAvista, comissaoAprazo;

    scanf ("%f", &valor);

    desconto = valor*0.9;
    prazo = valor/3;
    comissaoAvista = valor*0.9*0.05;
    comissaoAprazo = valor*0.05;

    printf ("A vista com desconto de 10%: %.2f\n", desconto);
    printf ("Valor da parcela em 3x sem juros: %.2f\n", prazo);
    printf ("Comissao do vendedor a vista: %.2f\n", comissaoAvista);
    printf ("Comissao do vendedor a prazo: %.2f\n", comissaoAprazo);

    return (0);
}
