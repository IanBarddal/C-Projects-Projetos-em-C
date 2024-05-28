#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int chutes = 0;
    int tentativa;

    while (tentativa != 2024)
    {
        scanf ("%d", &tentativa);

        if (tentativa != 2024)
        {
            chutes++;
        }
    }

    printf ("Ele tentou %d vezes antes de acertar.", chutes);

    return (0);

}
