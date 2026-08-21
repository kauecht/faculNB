#include <stdio.h>
#include <string.h>

int main()
{
    char texto[50];
    char trocar[3];
    char trocada[3];

    printf("Digite o texto:");
    fgets(texto, 50, stdin);

    printf("Digite a letra para substituir:");
    fgets(trocar, 3, stdin);
    
    printf("Digite a letra substituta:");
    fgets(trocada, 3, stdin);

    for(int i = 0; texto[i] != '\0'; i++) {
        if(texto[i] == trocar[0]) {
            texto[i] = trocada[0];
        }
    }

    printf("%s", texto);

    return 0;
}