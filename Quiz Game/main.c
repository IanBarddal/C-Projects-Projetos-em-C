#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int pontuacao;
    char respostausuario;

    printf ("PRIMEIRA PERGUNTA: Qual a capital da Holanda?\nA) Bruxelas\nB) Amsterdam\nC) Ankara\nD) Buenos Aires\n");
    scanf ("%c", &respostausuario);
    getchar();

    pontuacao = 0;

    if (respostausuario == 'B')
    {
        printf ("CERTA RESPOSTA!\nSua pontuação é de %d PONTOS!\n\n", pontuacao = pontuacao +1);
    }
    else if (respostausuario == 'A' || respostausuario == 'C' || respostausuario == 'D')
    {
        printf ("RESPOSTA ERRADA!\nSua pontuação é de %d PONTOS!\n\n", pontuacao = pontuacao -1);
    }
    else
    {
        printf ("Essa não é uma tecla válida!\n");
        return (1);
    }

    // NOVA PERGUNTA

    char respostausuario1;

    printf ("SEGUNDA PERGUNTA: Quem foi o apresentador do programa \" Show do Milhão \"?\nA) João Kléber\nB) Luciano Huck\nC) Silvio Santos\nD) Marcos Mion\n");
    scanf ("%c", &respostausuario1);
    getchar();

    if (respostausuario1 == 'C')
    {
        printf ("CERTA RESPOSTA!\nSua pontuação é de %d PONTOS!\n\n", pontuacao = pontuacao +1);
    }
    else if (respostausuario1 == 'A' || respostausuario1 == 'B' || respostausuario1 == 'D')
    {
        printf ("CERTA RESPOSTA!\nSua pontuação é de %d PONTOS!\n\n", pontuacao = pontuacao -1);
    }
    else
        {
            printf ("Essa não é uma tecla válida!");
            return (1);
        }

    // NOVA PERGUNTA

    char respostausuario2;

    printf ("TERCEIRA PERGUNTA: Em que ano foi inventado o primeiro computador?\nA) 1946\nB) 1822\nC) 1992\nD) 1800 A.C.\n");
    scanf ("%c", &respostausuario2);
    getchar ();

    if (respostausuario2 == 'A')
    {
        printf ("CERTA RESPOSTA!\nSua pontuação é de %d PONTOS!\n\n", pontuacao = pontuacao +1);
    }
    else if (respostausuario2 == 'B' || respostausuario2 == 'C' || respostausuario2 == 'D')
    {
        printf ("CERTA RESPOSTA!\nSua pontuação é de %d PONTOS!\n\n", pontuacao = pontuacao -1);
        pontuacao = pontuacao +1;
    }
    else
        {
            printf ("Essa não é uma tecla válida!");
            return (1);
        }

    // NOVA PERGUNTA

    char respostausuario3;

    printf ("QUARTA PERGUNTA: O que é Vectra?\nA) Uma máquina de lavar roupa\nB) Um videogame\nC) Um quadro\nD) Um carro\n");
    scanf ("%c", &respostausuario3);
    getchar ();

    if (respostausuario3 == 'D')
    {
        printf ("CERTA RESPOSTA!\nSua pontuação é de %d PONTOS!\n\n", pontuacao = pontuacao +1);
    }
    else if (respostausuario3 == 'A' || respostausuario3 == 'B' || respostausuario3 == 'C')
    {
        printf ("CERTA RESPOSTA!\nSua pontuação é de %d PONTOS!\n\n", pontuacao = pontuacao -1);
        pontuacao = pontuacao +1;
    }
    else
        {
            printf ("Essa não é uma tecla válida!");
            return (1);
        }

    return (0);
}
