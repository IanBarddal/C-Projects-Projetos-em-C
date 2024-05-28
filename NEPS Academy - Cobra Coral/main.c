#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int array[4];
    int x;

    for (x = 0; x < 4; x++)
    {
        scanf ("%d", &array[x]);
    }

    for (x = 0; x < 4; x++)
    {
        if (array[x] == array[x+2] || array[x+1] == array[x+3])
        {
            printf ("V");
            break;
        }
        else
        {
            printf ("F");
            break;
        }
    }

    return (0);
}
