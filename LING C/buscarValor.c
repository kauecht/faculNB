#include <stdio.h>
#include <string.h>

int main()
{
    char texto[50];
    char entrada[5];
    char letra;
    int contador = 0;

    printf("Digite o texto:");
    fgets(texto, 50,stdin);

    printf("Digite a letra a ser contada:");
    fgets(entrada, 5, stdin);
    letra = entrada[0];

    for(int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == letra) {
            contador++;
        } 
    }

     printf("A letra digitada apareceu %d vezes", contador);

    return 0;
}