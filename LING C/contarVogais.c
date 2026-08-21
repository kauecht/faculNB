#include <stdio.h>
#include <string.h>

int main()
{
    char texto[100];
    char vogais = 0;
    int contador = 0;

    printf("Digite o texto para contar as vogais\n");
    fgets(texto, 100, stdin);

    for(int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u' ) {
            contador++; 
        }
    }

    printf("o texto tem %d vogais.", contador);

    return 0;
}