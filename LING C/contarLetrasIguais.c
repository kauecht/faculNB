#include <stdio.h>
#include <string.h>

int contagemLetras(char texto[100], char letra)
{
    int contagem = 0;

    for(int i = 0; texto[i] != '\0'; i++) {
        if(texto[i] == letra){
            contagem++;
        }
    }

        return contagem;
}

int main()
{
    char texto[100];
    char entrada[3];
    char letra;
    int contagem;

    printf("Digite o texto:");
    fgets(texto, 100, stdin);

    printf("Digite a letra para contagem:");
    fgets(entrada, 3, stdin);
    letra = entrada[0];

    contagem = contagemLetras(texto, letra);
    printf("A letra digitada aparece: %d vezes", contagem);

    return 0;
}