#include <stdio.h>
#include <locale.h>
#include <string.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    char inst1[10], inst2[10], inst3[10];

    printf ("Escreva o primeiro instrumento: ");
    scanf ("%s", inst1);

    printf ("Escreva o segundo instrumento: ");
    scanf ("%s", inst2);

    printf ("Escreva o terceiro instrumento: ");
    scanf ("%s", inst3);

    if (strcmp(inst1,inst2) != 0 && strcmp(inst1, inst3) != 0 && strcmp(inst2, inst3) != 0)
    {
        printf ("SIM, podem formar a banda!");
    }
    else
    {
        printf ("NÃO, não podem formar a banda!");
    }

    return (0);

}
