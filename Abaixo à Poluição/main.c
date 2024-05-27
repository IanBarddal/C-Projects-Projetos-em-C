#include <stdio.h>

int main ()
{
    int n,x;
    int casaMultada = 0;
    float valorMulta = 0;

    while (n != 999)
    {
        scanf ("%d", &n);

        if (n > 2 && n != 999)
        {
            casaMultada++;
            for (x = 2; x < n; x++)
            {
                valorMulta+=12.89;
            }

        }
    }

    printf ("%.2f reais arrecadados em multa; %d casas multadas.\n", valorMulta, casaMultada);

    return (0);
}
