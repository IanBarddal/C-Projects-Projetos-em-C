#include <stdio.h>
#include <locale.h>
#include <string.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    char nome[10];
    char sobrenome[17];

    scanf ("%s", nome);
    scanf ("%s", sobrenome);

    printf (strcat(nome,sobrenome));

    return (0);
}
