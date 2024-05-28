#include <stdio.h>
#include <locale.h>
#include <math.h>

float calculoIMCh (float massacorporeah);

float calculoIMCm (float massacorpoream);

int main ()
{
    setlocale (LC_ALL, "portuguese");

    puts ("Você é homem ou mulher? Digite 'H' para 'homem' e 'M' para 'mulher'.");

    char resposta;

    scanf ("%c", &resposta);

    char massacorporeah;
    char massacorpoream;

    if (resposta == 'H')
    {
        calculoIMCh(massacorporeah);
    }
    else if (resposta == 'M')
    {
        calculoIMCm(massacorpoream);
    }
    else
        puts ("Digite uma resposta válida!");

    return (0);
}

float calculoIMCh (float massacorporeah)
{
    float altura;
    float imc;

    puts ("Digite sua altura: ");
    scanf ("%f", &altura);

    imc = pow(altura,2) *22;

    printf ("Seu IMC (peso ideal) é %.2f", imc);

    return (imc);
}

float calculoIMCm (float massacorpoream)
{
    float altura;
    float imc;

    puts ("Digite sua altura: ");
    scanf ("%f", &altura);

    imc = pow(altura,2) *21;

    printf ("Seu IMC (peso ideal) é %.2f", imc);

    return (imc);
}
