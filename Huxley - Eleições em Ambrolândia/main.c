#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int voto = 0;
    int aliBaba = 0;
    int alCapone = 0;
    int branco = 0;
    int nulos = 0;
    float votos = 0;

    float mediaAliBaba = 0;
    float mediaAlCapone = 0;

    while (voto != -1)
    {
        printf ("Digite o voto: ");
        scanf ("%d", &voto);
        votos++;

        if (voto == 83)
        {
            aliBaba++;
        }
        else if (voto == 93)
        {
            alCapone++;
        }
        else if (voto == 0)
        {
            branco++;
        }
        else if (voto != -1 && voto != 93 && voto != 83 && voto != 0)
        {
            nulos++;
        }
    }

    votos = aliBaba + alCapone + branco;

    printf ("%d\n%d\n%d\n%d\n", aliBaba, alCapone, branco, nulos);

    if (aliBaba > alCapone)
    {
        printf ("O vencedor é 83!\n");
    }
    else
    {
        printf ("O vencedor é 93!\n");
    }

    if (votos != 0)
    {
        mediaAlCapone =  (alCapone / votos) * 100;
        mediaAliBaba = (aliBaba / votos) * 100;
    }

    printf ("Ali Baba teve %.2f por cento dos votos válidos.\n", mediaAliBaba);
    printf ("Al-Capone teve %.2f por cento dos votos válidos.\n", mediaAlCapone);

    return (0);
}
