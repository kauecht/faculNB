#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define LINHAS 3
#define COLUNAS 5
int main()
{
    srand(time(NULL));
    int mat[LINHAS][COLUNAS];

    for (i=0; i<LINHAS; i++)
    {
        for (j=0; j<COLUNAS; j++)
        {
            mat[i][j]= rand()%(LINHAS * COLUNAS) +1;
        }
    }
return 0;
}