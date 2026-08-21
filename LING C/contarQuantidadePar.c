#include <stdio.h>
#include <string.h>

    int calculoPares(char texto[])
{
    int quantidade = 0;

    for (int i = 0; texto[i] != '\0'; i++)
    {
        if (texto[i] >= '0' && texto[i] <= '9')
        {
            int numero = texto[i] - '0';

            if (numero %2 == 0)
            {   
               quantidade++;   
            }
        }
    }

    return quantidade;
}


int main()
{
    char numeros[50];
    int num;

    printf("Digite os numeros: ");
    scanf("%d", num);
    fgets(numeros, 50, stdin);

    printf("Numeros digitados: %d\n", num);
    printf("Quantidade de numeros pares digitados:%d\n", calculoPares(numeros));

    return 0;
}
