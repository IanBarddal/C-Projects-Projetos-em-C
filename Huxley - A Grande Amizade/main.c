#include <stdio.h>
#include <locale.h>

struct pessoa
{
    char nome[20];
    int idade;
};
struct pessoa Amigo;

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int nAmigos, x;
    int contador = 0;
    int idadeInteresse;

    printf ("Digite a quantidade de amigos: ");
    scanf ("%d", &nAmigos);

    struct pessoa Amigo[nAmigos];

    for (x = 0; x < nAmigos; x++)
    {
        printf ("Digite o nome do amigo: ");
        scanf ("%19s", Amigo[x].nome);
        getchar();

        printf ("Digite a idade do amigo: ");
        scanf ("%d", &Amigo[x].idade);
        getchar();
    }

    printf ("Qual a idade de interesse? ");
    scanf ("%d", &idadeInteresse);

    for (x = 0; x < nAmigos; x++)
    {
        if (idadeInteresse == Amigo[x].idade)
        {
            contador++;
            printf ("%s ", Amigo[x].nome);
        }
    }

    if (contador == 0)
        {
            printf ("Eleven nao tem amigos dessa idade.");
        }

    printf ("Eleven tem %d amigos com %d anos.", contador, idadeInteresse);
}
