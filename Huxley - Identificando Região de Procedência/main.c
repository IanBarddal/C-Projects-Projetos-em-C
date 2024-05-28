#include <stdio.h>

int main ()
{
    int regiao;

    scanf ("%d", &regiao);

    if (regiao == 1)
    {
        printf ("Nordeste");
    }
    else if (regiao == 2)
    {
        printf ("Norte");
    }
    else if (regiao == 3 || regiao == 4)
    {
        printf ("Centro-Oeste");
    }
    else if (regiao >= 5 && regiao <= 9)
    {
        printf ("Sul");
    }
    else if (regiao > 9 && regiao <= 15)
    {
        printf ("Sudeste");
    }

    return (0);
}
