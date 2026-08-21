#include <stdio.h>
#include <string.h>

int calculoNumeros(char texto[])
{
    int quantidade = 0;

    for (int i = 0; texto[i] != '\0'; i++)
    {
        if (texto[i] >= '0' && texto[i] <= '9')
        {   
            quantidade++;
        }
    }

        return quantidade;
}
int main()
{
    char descricao[100];

    printf("Digite o numero do protocolo: ");
    fgets(descricao, 100, stdin);

    printf("total de numeros: %d\n", calculoNumeros(descricao));

    return 0;
}