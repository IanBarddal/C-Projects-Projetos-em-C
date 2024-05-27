#include <stdio.h>

int main ()
{
    float n;
    int x;
    int contador = 0;

    for (x = 0; x < 5; x++)
    {
        printf ("Digite um valor:\n");
        scanf ("%f", &n);
        if (n < 0)
        {
            contador++;
        }
    }

    printf ("Foram digitados %d numeros negativos", contador);

    return (0);
}
