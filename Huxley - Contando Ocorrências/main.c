#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    char texto[61];
    char ocorrencia;
    int indice = 0;
    int contador = 0;

    printf ("Escreva alguma coisa: ");
    fgets (texto, 60, stdin);

    printf ("Escreva o caractere de que você quer informações: ");
    scanf (" %c", &ocorrencia);

    while (texto[indice] != '\0')
    {
        if (texto[indice] == ocorrencia)
        {
            contador++;
        }

        indice++;
    }

    if (contador > 0)
    {
        printf ("O caractere buscado ocorre %d vezes na sequencia.", contador);
    }
    else
    {
        printf ("Caractere não encontrado.");
    }

    return (0);
}
