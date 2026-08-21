#include <stdio.h>
#include <string.h>

int main()
{
    char nome[20];
    int contador = 0;

    printf("Digite seu nome:\n");
    fgets(nome, 20, stdin);
    for(int i = 0; nome[i]; i++) {
        if(nome[i] != ' ' && nome[i] != '\n') {
            contador++;
        }
    }

    printf("Seu nome tem: %d letras", contador);

    return 0;
}