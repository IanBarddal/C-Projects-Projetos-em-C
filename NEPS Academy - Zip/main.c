#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int cartasLia1;
    int cartasLia2;
    int cartasCarol1;
    int cartasCarol2;
    int pontuacaoLia;
    int pontuacaoCarol;

    printf ("Digite as cartas de Lia:\n");

    scanf ("%d", &cartasLia1);
    scanf ("%d", &cartasLia2);

    printf ("Digite as cartas de Carolina:\n");

    scanf ("%d", &cartasCarol1);
    scanf ("%d", &cartasCarol2);

    if (cartasLia1 == cartasLia2)
    {
        pontuacaoLia = 2*(cartasLia1 + cartasLia2);
    }

    else if (cartasLia1 - cartasLia2 == 1 || cartasLia2 - cartasLia1 == 1)
    {
        pontuacaoLia = 3*(cartasLia1 + cartasLia2);
    }

    else
    {
        pontuacaoLia = cartasLia1 + cartasLia2;
    }

    if (cartasCarol1 == cartasCarol2)
    {
        pontuacaoCarol = 2*(cartasCarol1 + cartasCarol2);
    }

    else if (cartasCarol1 - cartasCarol2 == 1 || cartasCarol2 - cartasCarol1 == 1)
    {
        pontuacaoCarol = 3*(cartasCarol1 + cartasCarol2);
    }

    else
    {
        pontuacaoCarol = cartasCarol1 + cartasCarol2;
    }

    if (pontuacaoLia > pontuacaoCarol)
    {
        printf ("Lia");
    }
    else if (pontuacaoLia == pontuacaoCarol)
    {
        printf ("empate");
    }
    else
    {
        printf ("Carolina");
    }

    return (0);

}
