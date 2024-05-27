#include <stdio.h>
#include <locale.h>
#include <string.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    char texto[100];
    int contador, indice;

    contador = 0;

    printf ("Escreva alguma coisa e eu direi quantas vezes 'a' apareceu.\n");
    fgets (texto, 100, stdin);

    indice = 0;
    while (texto[indice] != '\0')
    {
        if (texto[indice] == 'a' || texto[indice] == 'A')
        {
            contador++;
        }
        indice++;
    }

    printf ("A letra 'a' apareceu %d vezes no texto.\n", contador);

    return (0);

}
