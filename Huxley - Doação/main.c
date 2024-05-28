#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int quantidadeFerro;
    int divisao;
    int excedente;

    printf ("Digite a quantidade de ferro: ");
    scanf ("%d", &quantidadeFerro);

    divisao = quantidadeFerro / 3;
    excedente = quantidadeFerro % 3;

    printf ("%d deve ser doado para cada vila.\n", divisao);
    printf ("%d deve ser jogado fora", excedente);

    return (0);
}
