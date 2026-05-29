#include <stdio.h>
#include <string.h>

int calculoPar(char texto[])

{
    int tamanho;
    tamanho = strlen(texto)-1;

    return tamanho;
}

int main()
// quando executar a pessoa digita a quantidade de letras, o fgets vai reservar um espaco de 100 linhas e vai la para alinha 4 calcular a quantidade de letras,
// o strlen vai calcular as letras e dimnuir 1 (no caso o enter do printf, apos o calculo vai la para baixo  linha 21 e faz a divisao se o resto da divisao for 0 sera par se não sera impar)
{
    char descricao[100];
    printf("Digite o texto: ");
    fgets(descricao, 100, stdin);

    if (calculoPar(descricao) %2 == 0)
    {
        printf("quantidade par\n");
    }
    else
    {
        printf("quantidade impar\n");
    }

    return 0;

}