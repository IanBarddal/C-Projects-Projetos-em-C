#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int eEstudante;
    int eIdoso;

    printf ("Cliente é estudante? 1-Sim 0-Não\n");
    scanf ("%d", &eEstudante);

    printf ("Cliente é idoso? 1-Sim 0-Não\n");
    scanf ("%d", &eIdoso);

    if (eEstudante == 1 || eIdoso == 1)
    {
        printf ("1");
    }
    else
    {
        printf ("0");
    }
}
