#include <stdio.h>
#include <locale.h>

float conversor (float t_C);

int main ()
{
    setlocale (LC_ALL, "portuguese");

    float t_C;
    printf ("Digite a temperatura em graus Celsius: ");
    scanf ("%f", &t_C);

    conversor (t_C);

    // a fun��o "conversor" est� EM FUN��O de t_C, ou seja, do valor da temperatura em Celsius digitado pelo usu�rio.

    printf ("%1.0f graus em Celsius corresponde a %1.1f Fahrenheit!", t_C, conversor (t_C));

    // a fun��o conversor RETORNA o valor da convers�o, ent�o, %1.1f corresponde ao valor retornado por "conversor (t_C)", como especificado acima.

    return (0);
}

float conversor (float t_C)
{
    float x;

    x = (t_C *9/5) + 32;
    return (x);
}
