#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int B, T;

    int areaFelix;
    int areaMarzia;

    printf ("Escreva o tamanho do pedaço: ");

    scanf ("%d", &B);
    scanf ("%d", &T);

    areaMarzia = (((160-B) + (160-T))*70) / 2;
    areaFelix = ((B + T)*70) / 2;

    if (areaFelix == areaMarzia)
    {
        printf ("O valor da nota se perdeu!");
    }
    else if (areaMarzia > areaFelix)
    {
        printf ("Marzia ficou com a nota de 100");
    }
    else
    {
        printf ("Felix ficou com a nota de 100");
    }

    return (0);
}
