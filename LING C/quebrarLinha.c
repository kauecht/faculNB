#include <stdio.h>
#include <string.h>

int main()
{
    char texto[50];

    printf("Digite o texto:");
    fgets(texto, 50, stdin);
    for(int i = 0; texto[i] != '\0'; i++) {
        printf("%c\n", texto[i]);
    }

    return 0;
}