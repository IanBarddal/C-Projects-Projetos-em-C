#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int dias, diaria, x;
    int kmrodado;
    int quilometragem, quilometragemextra;
    float conta;

    scanf ("%d", &dias);
    scanf ("%d", &kmrodado);

    diaria = dias*90;
    conta = diaria;

    if (kmrodado <= 100)
    {
        printf ("%.2f", conta);
    }

    else if (kmrodado > 100)
    {
        for (x = 100; x <= kmrodado ; x++)
        {
            quilometragem = kmrodado - 100;
            quilometragemextra = quilometragem * 12;
        }

        conta = diaria + quilometragemextra;
        printf ("%.2f", conta);
    }

    return (0);
}
