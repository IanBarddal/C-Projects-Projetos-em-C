#include <stdio.h>

int main ()
{
    int x,y;

    float soma1, soma2, soma3;
    float pastel, empada, kibe;

    float custos[4][4];

    for (x = 0; x < 4; x++)
    {
        for (y = 0; y < 4; y++)
        {
            scanf ("%f", &custos[x][y]);
        }
    }

    for (x = 0; x < 1; x++)
    {
        for (y = 0; y < 4; y++)
        {
            pastel = custos[0][y]*custos[3][y];
            soma1 += pastel;
        }
    }

    empada = 1;
    soma2 = 0;

    for (x = 1; x < 2; x++)
    {
        for (y = 0; y < 4; y++)
        {
            empada = custos[1][y]*custos[3][y];
            soma2 += empada;
        }
    }

    for (x = 2; x < 3; x++)
    {
        for (y = 0; y < 4; y++)
        {
            kibe = custos[2][y]*custos[3][y];
            soma3 += kibe;
        }
    }

    printf ("%.2f\n", soma1);
    printf ("%.2f\n", soma2);
    printf ("%.2f\n", soma3);

    return (0);
}
