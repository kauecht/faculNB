#include <stdio.h>
#include <string.h>

int main()
{
    char texto[50];
    int i;
    printf("Digite o texto: ");
    fgets(texto, 50, stdin);
    for(i = strlen(texto) -2; i >= 0; i--)
    {
        printf("%c", texto[i]);
    }

    return 0;
}