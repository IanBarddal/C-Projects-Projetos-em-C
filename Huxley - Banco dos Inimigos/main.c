#include <stdio.h>
#include <locale.h>

struct personagens
{
    char nome[21];
    int ID;
    int level;
    int life;
    int atk;
    int def;
};
struct personagens monstros;

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int x, quantidade;

    printf ("Digite a quantidade de personagens a serem criados: ");
    scanf ("%d", &quantidade);

    struct personagens monstros[quantidade];

    for (x = 0; x < quantidade; x++)
    {
        printf ("Digite o nome do personagem: ");
        scanf (" %[^\n]", monstros[x].nome);
        printf ("Digite seu ID: ");
        scanf ("%d", &monstros[x].ID);
        printf ("Digite seu level: ");
        scanf ("%d", &monstros[x].level);
        printf ("Digite seu HP: ");
        scanf ("%d", &monstros[x].life);
        printf ("Digite seu ataque: ");
        scanf ("%d", &monstros[x].atk);
        printf ("Digite sua defesa: ");
        scanf ("%d", &monstros[x].def);
    }

    for (x = 0; x < quantidade; x++)
    {
        printf ("Nome: %s\n", monstros[x].nome);
        printf ("ID: %d\n", monstros[x].ID);
        printf ("Level: %d\n", monstros[x].level);
        printf ("HP: %d\n", monstros[x].life);
        printf ("ATK: %d\n", monstros[x].atk);
        printf ("DEF: %d\n", monstros[x].def);
    }

    return (0);
}
