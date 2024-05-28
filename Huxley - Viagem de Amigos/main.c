#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int numeroPessoas;
    int cidadeEscolhida;
    int quantidadeQuartos;

    float passeioDeBarco;
    float parqueAquatico;
    float valorPorPessoa1 = 0;
    float valorPorPessoa2 = 0;
    float custoTotal = 0;

    printf ("Qual o número de pessoas? ");
    scanf ("%d", &numeroPessoas);

    printf ("Qual a cidade escolhida? ");
    scanf ("%d", &cidadeEscolhida);

    printf ("Quantos quartos? ");
    scanf ("%d", &quantidadeQuartos);

    if (cidadeEscolhida == 1 && quantidadeQuartos == 2)
    {
        printf ("A cidade escolhida foi Pipa\n");
        passeioDeBarco = numeroPessoas * 75;
        custoTotal = 600 + passeioDeBarco;
        printf ("O custo total é de R$ %.2f\n", custoTotal);

        valorPorPessoa1 = custoTotal / numeroPessoas;
        printf ("O custo por pessoa é de R$ %.2f\n", valorPorPessoa1);
    }

    else if (cidadeEscolhida == 1 && quantidadeQuartos == 3)
    {
        printf ("A cidade escolhida foi Pipa\n");
        passeioDeBarco = numeroPessoas * 75;
        custoTotal = 900 + passeioDeBarco;
        printf ("O custo total é de R$ %.2f\n", custoTotal);

        valorPorPessoa1 = custoTotal / numeroPessoas;
        printf ("O custo por pessoa é de R$ %.2f\n", valorPorPessoa1);
    }

    else if (cidadeEscolhida == 2 && quantidadeQuartos == 3)
    {
        printf ("A cidade escolhida foi Fortaleza\n");
        parqueAquatico = numeroPessoas * 60;
        custoTotal = 950 + parqueAquatico;
        printf ("O custo total é de R$ %.2f\n", custoTotal);

        valorPorPessoa2 = custoTotal / numeroPessoas;
        printf ("O custo por pessoa é de R$ %.2f\n", valorPorPessoa2);
    }

    else if (cidadeEscolhida == 2 && quantidadeQuartos == 4)
    {
        printf ("A cidade escolhida foi Fortaleza\n");
        parqueAquatico = numeroPessoas * 60;
        custoTotal = 1120 + parqueAquatico;
        printf ("O custo total é de R$ %.2f\n", custoTotal);

        valorPorPessoa2 = custoTotal / numeroPessoas;
        printf ("O custo por pessoa é de R$ %.2f\n", valorPorPessoa2);
    }
}
