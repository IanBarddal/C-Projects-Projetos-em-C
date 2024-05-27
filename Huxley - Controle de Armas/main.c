#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int quantidadeArmas;
    int calibreArma;
    char ocupacao;
    char nacionalidade;

    printf ("Digite a nacionalidade - 'B' para brasileiro e 'E' para estrangeiro  ");
    scanf ("%c", &nacionalidade);
    getchar();

    printf ("Digite a ocupação - 'M' para militar, 'C' para caminhonheiro, 'T' para turista e 'O' para outro  ");
    scanf ("%c", &ocupacao);

    printf ("Digite a quantidade de armas:  ");
    scanf ("%d", &quantidadeArmas);

    printf ("Digite o calibre da(s) arma(s):  ");
    scanf ("%d", &calibreArma);

    if (ocupacao == 'M' && nacionalidade == 'B')
    {
        printf ("Liberado");
    }
    else if (nacionalidade == 'B' && ocupacao == 'C' && calibreArma <= 38 && quantidadeArmas <= 2)
    {
        printf ("Liberado");
    }
    else if (nacionalidade == 'B' && ocupacao == 'T' && calibreArma <= 22 && quantidadeArmas <= 1)
    {
        printf ("Liberado");
    }
    else if (nacionalidade == 'B' && ocupacao == 'O' && quantidadeArmas <= 1 && calibreArma <= 22)
    {
        printf ("Liberado");
    }
    else if (nacionalidade == 'E' && quantidadeArmas == 0)
    {
        printf ("Liberado");
    }
    else
    {
        printf ("Barrado");
    }
}
