#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int livros, alunos;
    int conceito;

    printf ("Escreva a quantidade de livros: ");
    scanf ("%d", &livros);

    printf ("Escreva a quantidade de alunos: ");
    scanf ("%d", &alunos);

    conceito = alunos / livros;

    if (conceito <= 8)
    {
        printf ("Conceito A");
    }
    else if (conceito >= 9 && conceito <= 12)
    {
        printf ("Conceito B");
    }
    else if (conceito >= 13 && conceito <= 18)
    {
        printf ("Conceito C");
    }
    else if (conceito > 18)
    {
        printf ("Conceito D");
    }

    return (0);
}
