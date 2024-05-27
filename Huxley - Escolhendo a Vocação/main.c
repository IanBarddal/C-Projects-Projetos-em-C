#include <stdio.h>
#include <locale.h>

struct atributos
{
    int forca;
    int inteligencia;
    int destreza;
    int furtividade;
    int peso;
};
struct atributos Skills;

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int pontos = 25;

    struct atributos Skills;

    printf ("Coloque o quanto de FORÇA terá seu personagem: ");
    scanf ("%d", &Skills.forca);
    pontos -= Skills.forca;
    printf ("Você tem %d pontos restantes.\n", pontos);

    printf ("Coloque o quanto de INTELIGÊNCIA terá seu personagem: ");
    scanf ("%d", &Skills.inteligencia);
    pontos -= Skills.inteligencia;
    printf ("Você tem %d pontos restantes.\n", pontos);

    printf ("Coloque o quanto de DESTREZA terá seu personagem: ");
    scanf ("%d", &Skills.destreza);
    pontos -= Skills.destreza;
    printf ("Você tem %d pontos restantes.\n", pontos);

    printf ("Coloque o quanto de FURTIVIDADE terá seu personagem: ");
    scanf ("%d", &Skills.furtividade);
    pontos -= Skills.furtividade;
    printf ("Você tem %d pontos restantes.\n", pontos);

    printf ("Coloque o quanto de PESO terá seu personagem: ");
    scanf ("%d", &Skills.peso);
    pontos -= Skills.peso;
    printf ("Você tem %d pontos restantes.\n", pontos);

    if (Skills.forca > 5 && Skills.peso > 5 && Skills.destreza > 5 && Skills.inteligencia < 5)
    {
        printf ("Knight");
    }

    else if (Skills.inteligencia > 5 && Skills.forca < 5 && Skills.peso < 5 && Skills.destreza < 5 && Skills.furtividade > 5)
    {
        printf ("Mage");
    }

    else if (Skills.destreza > 5 && Skills.peso < 5 && Skills.inteligencia > 5 && Skills.forca > 5)
    {
        printf ("Paladin");
    }

    else if (Skills.forca > 10 && Skills.inteligencia < 5 && Skills.destreza < 5 && Skills.furtividade < 5 && Skills.peso > 5)
    {
        printf ("Orc");
    }

    return (0);
}
