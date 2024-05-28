#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int a, b, x;

    printf ("Digite o início do intervalo: ");
    scanf ("%d", &a);

    printf ("Digite o fim do intervalo: ");
    scanf ("%d", &b);

    for (x = a-1; x > b; x--)
    {
        printf ("%d\n", x);
    }

    return (0);
}
