// DESENVOLVIDO POR KAUE CHATAN

#include <stdio.h>  //necessario para printf e scanf
#include <stdlib.h>  //necessario para system
#include <ctype.h>  //necessario para toupper
#include <windows.h>  //necessario para beep

#define N 10  //tamanho da matriz do labirinto

//mostra o labirinto e a posicao do jogador
void mostrarLabirinto(int labirinto[N][N], int x, int y)
{
    int i, j;

    printf("    1  2  3  4  5  6  7  8  9 10\n");
    for (i = 0; i < N; i++)
    {
        printf("%2d  ", i + 1);
        for (j = 0; j < N; j++)
        {
            if (i == x && j == y)
            {
                printf("@  ");
            }
            else if (labirinto[i][j] == 1)
            {
                printf("X  ");
            }
            else if (labirinto[i][j] == -1)
            {
                printf("O  ");
            }
            else if (labirinto[i][j] == 2)
            {
                printf("!  ");
            }
            else
            {
                printf(".  ");
            }
        }
        printf("\n");
    }
}

//verifica o movimento
int validarMovimento(int labirinto[N][N], int novoX, int novoY)
{
    if (novoX >= 0 && novoX < N && novoY >= 0 && novoY < N &&
        labirinto[novoX][novoY] != 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// tocar sons
void tocarSom(int tipo)
{
    if (tipo == 1) // cima
    {
        Beep(900, 60);
    }
    else if (tipo == 2) // baixo
    {
        Beep(600, 60);
    }
    else if (tipo == 3) // esquerda
    {
        Beep(700, 50);
        Beep(500, 50);
    }
    else if (tipo == 4) // direita
    {
        Beep(500, 50);
        Beep(700, 50);
    }
    else if (tipo == 5) // parede
    {
        Beep(250, 350);
    }
    else if (tipo == 6) // armadilha
    {
        Beep(650, 100);
        Beep(300, 200);
    }
    else if (tipo == 7) // vitoria
    {
        Beep(600, 120);
        Beep(800, 120);
        Beep(1000, 300);
    }
}

int main()
{
    //matriz do labirinto
    // 0 = caminho, 1 = parede, 2 = armadilha, -1 = saida
    int labirinto[N][N] =
    {
        {0, 1, 0, 0, 0, 0, 1, 0, 0, 0},
        {0, 1, 0, 1, 1, 0, 1, 0, 1, 0},
        {0, 0, 0, 1, 0, 0, 0, 0, 1, 0},
        {1, 1, 0, 1, 0, 1, 1, 0, 1, 0},
        {0, 0, 2, 0, 0, 1, 0, 0, 0, 0},
        {0, 1, 1, 1, 0, 1, 0, 1, 1, 0},
        {0, 0, 0, 1, 0, 0, 2, 0, 1, 0},
        {0, 1, 0, 0, 0, 1, 1, 0, 1, 0},
        {0, 1, 1, 1, 0, 0, 0, 1, 1, 0},
        {0, 0, 0, 0, 0, 1, 0, 0, 0, -1}  // -1 indica saida
    };

    int x = 0, y = 0;  // posicao do jogador
    int passos = 0, pontos = 0;
    int novoX, novoY;  
    int jogando = 1;  //controle do loop principal do jogo
    char comando;  //variavel que armazena o comando do jogador

    system("color 0A");

    //loop principal do jogo
    while (jogando)
    {
        //limpa a tela
        system("cls");

        printf("Jogo do Labirinto 10x10\n");
        printf("Use W (cima), S (baixo), A (esquerda), D (direita)\n");
        printf("@ jogador | X parede | O saida | ! armadilha\n");
        printf("Posicao: linha %d, coluna %d\n", x + 1, y + 1);
        printf("Passos: %d | Pontos: %d\n\n", passos, pontos);
        mostrarLabirinto(labirinto, x, y);

        if (labirinto[x][y] == -1)
        {
            system("color 0B");
            tocarSom(7);
            printf("\nParabens! Voce encontrou a saida!\n");
            printf("Voce fez %d passos e terminou com %d pontos.\n", passos, pontos);
            break;
        }

        printf("\nDigite seu movimento (W/A/S/D): ");
        scanf(" %c", &comando);
        comando = toupper(comando);

        novoX = x;
        novoY = y;
        if (comando == 'W')
        {
            novoX--;
        }
        else if (comando == 'S')
        {
            novoX++;
        }
        else if (comando == 'A')
        {
            novoY--;
        }
        else if (comando == 'D')
        {
            novoY++;
        }
        if (novoX == x && novoY == y)
        {
            printf("Comando invalido!\n");
        }
        else if (validarMovimento(labirinto, novoX, novoY))
        {
            x = novoX;
            y = novoY;
            passos++;
            pontos += 10;
            system("color 0A");

            //penalidade da armadilha
            if (labirinto[x][y] == 2)
            {
                pontos -= 15;
                system("color 0E"); 
                tocarSom(6);
            }
            //ganha ponto quando encotrar a saida
            else if (labirinto[x][y] == -1)
            {
                pontos += 50;
            }
            else if (comando == 'W')
            {
                tocarSom(1);
            }
            else if (comando == 'S')
            {
                tocarSom(2);
            }
            else if (comando == 'A')
            {
                tocarSom(3);
            }
            else if (comando == 'D')
            {
                tocarSom(4);
            }
        }
        //penalidade ao tocar na parede
        else
        {
            pontos -= 5;
            system("color 0C");
            tocarSom(5);
            printf("Parede ou limite! -5 pontos.\n");
        }
    }

    return 0;
}
