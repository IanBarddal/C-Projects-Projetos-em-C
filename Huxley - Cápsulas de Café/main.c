#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    char caixa;
    int caixaCafe;
    int capsulas = 0;
    int xicaras;
    int xicarasProf;

    for (int x = 0; x < 14; x++)
        {
            scanf ("%d", &caixaCafe);
            scanf ("%c", &caixa);

        if (caixa == 'G' || caixa == 'g')
            {
                capsulas+=16 * caixaCafe;
            }
        if (caixa == 'P' || caixa == 'p')
            {
                capsulas+=10 * caixaCafe;
            }
    }

    xicaras = capsulas * 2;
    xicarasProf = xicaras / 7;

    printf ("Foram doadas %d cápsulas de café.\nCada professor poderá beber %d xícaras de café.\n", capsulas, xicarasProf);

}
