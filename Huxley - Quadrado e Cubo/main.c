#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale (LC_ALL, "portuguese");

    int x, numerosLidos;
    int quadrado, cubo;

    printf ("Digite um n�mero a ser lido: ");
    scanf ("%d", &numerosLidos);

    for (x = 0; x < numerosLidos; x++)
    {
        quadrado = pow(x+1,2);
        cubo = pow(x+1,3);
        printf ("N�mero: %d, Quadrado: %d, Cubo: %d\n", x+1, quadrado, cubo);
    }

	return (0);
}
