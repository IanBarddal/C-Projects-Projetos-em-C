#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    float num1, num2, num3, media;
    int contador;

    scanf ("%f %f %f", &num1, &num2, &num3);

    media = (num1 + num2 + num3) / 3;

    contador = 0;

    if (num1 > media)
    {
        contador+=1;
    }
    if (num2 > media)
    {
        contador+=1;
    }
    if (num3 > media)
    {
        contador+=1;
    }

    printf ("A m�dia entre os n�meros � %.2f.\n", media);
    printf ("%d est�o acima da m�dia.", contador);

    return (0);
}
