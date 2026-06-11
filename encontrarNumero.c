#include <stdio.h>
#include <string.h>
 
int numDigitados(char texto[], char localizar)
{
    int encontrar = 0;
    for( int i = 0; texto[i] != '\0'; i++)
    {
        if(texto[i] == localizar)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    char numeros[10];
    char localizar;

    printf("Digite os numeros: ");
    fgets(numeros, 10, stdin);

    printf("Digite o numero a ser encontrado: ");
    scanf("%c", &localizar);

    if(numDigitados(numeros, localizar))
    {
        printf("Numero encontrado!\n");
    }
    else
    {
        printf("Numero inexistente!\n");
    }

    return 0;
}