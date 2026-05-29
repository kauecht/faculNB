#include <stdio.h>
// i = indice   vetor armazenador de dados\numeros   
// v[] o vetor   tamanho: quantos numeors existem nele
int soma_vetor(int v[], int tamanho)
{
// s0ma começa em 0   i = é usado pra passar por cada posição do vetor nesse casso 2,4,6,8   
 int soma = 0, i;
   
// f0r é usado para repitir nesse caso vai repetir enquanto i for menor que o tamanho do vetor

for (i = 0; i < tamanho; i++)
    {
        soma += v[i];
    }
    return soma;
}
int main()
{
    // numer0s = vetor   4 = tamanho
    int numeros[4] = {2, 4, 6, 8};  //<-- indice
    printf("Soma do vetor = %d\n", soma_vetor(numeros, 4));

    return 0;
}
