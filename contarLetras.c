#include <stdio.h>
int main()
{
    char texto[50];
    char letra;
    int i, contador = 0;
    printf("Digite o texto: ");kaue
    fgets(texto, 50, stdin);
    for(i = 0; texto[i] != '\0'; i++)
    {
        if(texto[i] == letra)
        {
            printf("Letra: %c ", texto[i]);
        }
        contador++;
    }
    
    contador--;
    printf("Total: %d\n", contador);

    return 0;
}