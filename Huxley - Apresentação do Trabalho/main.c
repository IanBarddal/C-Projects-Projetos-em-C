#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int quesito1Grafico, quesito2IA, quesito3encap, quesito4indent, quesito5structs;
    int avaliado = 0;

    printf ("O trabalho tem interface gr�fica? 1 PARA SIM / 2 PARA N�O\n");
    scanf ("%d", &quesito1Grafico);

    printf ("O trabalho tem intelig�ncia artificial? 1 PARA SIM / 2 PARA N�O\n");
    scanf ("%d", &quesito2IA);

    printf ("O trabalho tem encapsulamento? 1 PARA SIM / 2 PARA N�O\n");
    scanf ("%d", &quesito3encap);

    printf ("O trabalho tem indenta��o? 1 PARA SIM / 2 PARA N�O\n");
    scanf ("%d", &quesito4indent);

    printf ("O trabalho tem structs? 1 PARA SIM / 2 PARA N�O\n");
    scanf ("%d", &quesito5structs);

    if (quesito1Grafico == 1 || quesito2IA == 1)
    {
        avaliado++;
    }

    if (quesito3encap == 1 && quesito4indent == 1)
    {
        avaliado++;
    }

    if (quesito5structs == 1)
    {
        avaliado++;
    }

    if (avaliado >= 3)
    {
        printf ("Resultado: %d.AVALIADO", avaliado);
    }
    else
    {
        printf ("Resultado: %d. N�O AVALIADO", avaliado);
    }

    return (0);
}
