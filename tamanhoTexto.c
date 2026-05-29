#include <stdio.h>
#include <string.h>
//char usado para armazenar, guarda 1 caractere por linha
//fgets pega tudo que for digitado para armazenar no char
//strlen conta quantas letras/nuemros estao armazenados 

    int main()
{
    char observacao[100];
    int tamanho;

    printf("Escreva a observacao: ");
    fgets(observacao, 100, stdin);

    tamanho = strlen(observacao);

    if (tamanho >= 20)
    {
        printf("texto longo!\n");
    }
    else
    {
        printf("texto pequeno!\n");
    }

    return 0;
}