#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
    //Letras das colunas
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    int num = 1;


    //Criação do tabuleiro
    int tabuleiro[10][10] = {0};

    //Posicionando navios
    int navio1[3] = {3, 3, 3};
    int navio2[4] = {3, 3, 3, 3};
    //Navio 1 (Vertical)
    tabuleiro[4][2] = 3;
    tabuleiro[5][2] = 3;
    tabuleiro[6][2] = 3;
    //Navio 2 (Horizontal)
    tabuleiro[8][5] = 3;
    tabuleiro[8][6] = 3;
    tabuleiro[8][7] = 3;
    tabuleiro[8][8] = 3;

    //Exibição das letras
    printf("   ");
    for (int j = 0; j < 10; j++)
    {
        printf("%c ", linha[j]);
    }

    printf("\n");

    //Exibição do tabuleiro
    for (int i = 0; i < 10; i++)
    {
        //Arrumando o espaçamento
        for(int k = 0; k < 1; k++)
        {
            printf("%d", num);
            num++;
        }
        for(int k = 0; k < 1; k++)
        {
            printf(" ");
            if (i == 9) continue;
            printf(" ");
        }

        //Tabuleiro
        for (int j = 0; j < 10; j++)
        {   
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }


    printf ("\n");
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
