#include <stdio.h>

int main ()
{
    int codigo, quantidade;
    float codigo1, codigo2, codigo3, codigo4, total1, total2, total3, total4, totalApagar, desconto;

    codigo1 = 5.30;
    codigo2 = 6.00;
    codigo3 = 3.20;
    codigo4 = 2.50;

    scanf ("%d %d", &codigo, &quantidade);

    total1 = quantidade*codigo1;
    total2 = quantidade*codigo2;
    total3 = quantidade*codigo3;
    total4 = quantidade*codigo4;

    if ((codigo == 1) && ((total1 >= 40) || (quantidade >= 15)))
    {
        total1 = codigo1*quantidade;
        desconto = total1 * 0.15;
        totalApagar = total1 - desconto;

        printf ("R$ %.2f\n", totalApagar);
    }

    else if ((codigo == 1) && ((total1 < 40) || (quantidade < 15)))
    {
        total1 = codigo1*quantidade;
        totalApagar = total1;

        printf ("R$ %.2f\n", totalApagar);
    }

    else if ((codigo == 2) && ((total2 >= 40) || (quantidade >= 15)))
    {
        total2 = codigo2*quantidade;
        desconto = total2 * 0.15;
        totalApagar = total2 - desconto;

        printf ("R$ %.2f\n", totalApagar);
    }

    else if ((codigo == 2) && ((total2 < 40) || (quantidade < 15)))
    {
        total2 = codigo2*quantidade;
        totalApagar = total2;

        printf ("R$ %.2f\n", totalApagar);
    }

    else if ((codigo == 3) && ((total3 >= 40) || (quantidade >= 15)))
    {
        total3 = codigo3*quantidade;
        desconto = total3 * 0.15;
        totalApagar = total3 - desconto;

        printf ("R$ %.2f\n", totalApagar);
    }

    else if ((codigo == 3) && ((total3 < 40) || (quantidade < 15)))
    {
        total3 = codigo3*quantidade;
        totalApagar = total3;

        printf ("R$ %.2f\n", totalApagar);
    }

    else if ((codigo == 4) && ((total4 >= 40) || (quantidade >= 15)))
    {
        total4 = codigo4*quantidade;
        desconto = total4 * 0.15;
        totalApagar = total4 - desconto;

        printf ("R$ %.2f\n", totalApagar);
    }

    else if ((codigo == 4) && ((total4 < 40) || (quantidade < 15)))
    {
        total4 = codigo4*quantidade;
        totalApagar = total4;

        printf ("R$ %.2f\n", totalApagar);
    }

    return (0);
}
