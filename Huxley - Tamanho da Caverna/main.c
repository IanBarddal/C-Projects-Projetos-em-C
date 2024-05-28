#include <stdio.h>
#include <locale.h>

int calculaBlocos (int base, int altura)
{
    int quantidadeDeBlocos;

    quantidadeDeBlocos = (base*base) * altura;

    printf ("A quantidade de blocos é %d.", quantidadeDeBlocos);

    return (quantidadeDeBlocos);
}

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int base, altura;

    printf ("Escreva a base: ");
    scanf ("%d", &base);

    printf ("Escreva a altura: ");
    scanf ("%d", &altura);

    calculaBlocos (base,altura);

    return (0);
}
