#include <stdio.h>
#include <locale.h>
#include <string.h>

/* Foi necessário tirar o caractere "nova linha (\n)" e o caractere nulo (\0). */

int main ()
{
    setlocale (LC_ALL, "portuguese");

    char frase[100];
    int contaA = 0;
    int contaE = 0;
    int contaI = 0;
    int contaO = 0;
    int contaU = 0;
    int tamanho, x;
    float porcentagem = 0;

    printf ("Digite uma frase: ");
    fgets (frase, 99, stdin);

    tamanho = strlen(frase);
    if (frase[tamanho - 1] == '\n') {
        frase[tamanho - 1] = '\0';
        tamanho--;
    }

    x = 0;
    while (frase[x] != '\0')
    {

        if (frase[x] == 'A' || frase[x] == 'a')
        {
            contaA++;
        }
        if (frase[x] == 'E' || frase[x] == 'e')
        {
            contaE++;
        }
        if (frase[x] == 'I' || frase[x] == 'i')
        {
            contaI++;
        }
        if (frase[x] == 'O' || frase[x] == 'o')
        {
            contaO++;
        }
        if (frase[x] == 'U' || frase[x] == 'u')
        {
            contaU++;
        }
        x++;
    }

    porcentagem = ((contaA + contaE + contaI + contaO + contaU) / (double) tamanho) * 100;

    printf ("a %d\n", contaA);
    printf ("e %d\n", contaE);
    printf ("i %d\n", contaI);
    printf ("o %d\n", contaO);
    printf ("u %d\n", contaU);
    printf ("%.2f%%", porcentagem);

    return (0);

}
