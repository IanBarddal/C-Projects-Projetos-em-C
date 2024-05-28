#include <stdio.h>
#include <locale.h>

void calculaMultiplos (int f, int g, int i)
{
    int x;

    for (x = f; x <= g; x++)
    {
        if (x % i == 0)
        {
            printf ("%d\t", x);
        }
    }
}

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int i,f,g;

    printf ("Digite o intervalo: ");
    scanf ("%d", &f);
    printf ("Digite o fim do intervalo: ");
    scanf ("%d", &g);

    printf ("Digite o número cujos múltiplos quer encontrar: ");
    scanf ("%d", &i);

    calculaMultiplos (f,g,i);

    return (0);
}
