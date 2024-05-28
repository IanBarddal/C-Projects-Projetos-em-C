#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int cha, x;
    int testado;
    int contador = 0;

    printf ("Digite o chá escolhido: ");
    scanf ("%d", &cha);

    for (x = 0; x < 5; x++)
    {
        scanf ("%d", &testado);

        if (cha == testado)
        {
            contador++;
        }
    }

    printf ("Houve %d acertos.", contador);

    return (0);
}
