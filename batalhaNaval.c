#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.
#define LINHA 10
#define COLUNA 10

int main() {
    
    //Letras das colunas
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    int num = 1;


    //Criação do tabuleiro
    int tabuleiro[LINHA][COLUNA] = {0};

    //Navio 1 (Vertical)
    for (int i = 4; i < 7; i++)
    {
        tabuleiro[i][7] = 3;
    }
    //Navio 2 (Horizontal)
    for (int j = 5; j < 8; j++)
    {
        tabuleiro[8][j] = 3;
    }
    //Navio 3 (Diagonal)
    for (int i = 1; i < 4; i++)
    {
        tabuleiro[i][i] = 3;
    }
    //Navio 4 (Diagonal)
    for (int i = 9; i > 6; i--)
    {
        tabuleiro[9 - i][i] = 3;
    }

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
