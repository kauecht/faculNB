#include <stdio.h>
    int main()
{   
        int numero;
    printf("Digite um numero:\n");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("O numero digitado e par\n");
    }
    else
    {
        printf("O numero digitado e impar\n");
    }

    return 0;
}