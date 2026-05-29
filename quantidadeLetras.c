#include <stdio.h>
#include <string.h>

int calcularTamanho(char texto[])

{
    int tamanho;
    tamanho = strlen(texto)-1;

    return tamanho;
}

int main()
{
    char descricao[100];
    printf("Digite uma descricao: ");
    fgets(descricao, 100, stdin);
    printf("Total de caracteres: %d\n",
            calcularTamanho(descricao));
    
    return 0;

}