#include <stdio.h>
#include <stdlib.h>

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

    int valor_habilidade = 1; // Número que representa a habilidade no mapa

    //Habilidade em Cone
    int centro_cone = 4; // Coluna central do cone (onde fica a ponta)
    int linha_topo_cone = 0; // Em qual linha o cone começa
    int altura_cone = 3; // Quantas linhas o cone vai ocupar
    
    // PERCORRENDO O TABULEIRO
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            
            // 1. Verificamos se estamos nas linhas que o cone ocupa
            // (da linha do topo até a linha do topo + altura)
            if (i >= linha_topo_cone && i < linha_topo_cone + altura_cone) {
                
                // Calculamos qual é o "nível" atual do cone (0, 1 ou 2...)
                int nivel = i - linha_topo_cone;

                // 2. A Condição do Cone:
                // A coluna deve estar entre (centro - nivel) e (centro + nivel)
                if (j >= (centro_cone - nivel) && j <= (centro_cone + nivel) && j >= 0 && j < 10) {
                    tabuleiro[i][j] = valor_habilidade;
                }
            }
        }
    }
    

    //Habilidade em Octaedro
    int centro_linha_oct = 7;  
    int centro_coluna_oct = 2; 
    
    int raio_oct = 1; 
    
    // PERCORRENDO O TABULEIRO
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            
            // 1. Calculamos a distância da linha atual para o centro
            // abs() transforma números negativos em positivos
            int dist_vertical = abs(i - centro_linha_oct);
            
            // 2. Calculamos a distância da coluna atual para o centro
            int dist_horizontal = abs(j - centro_coluna_oct);

            // 3. A SOMA das distâncias deve ser menor ou igual ao raio
            // Fórmula matemática do losango/octaedro
            if (dist_vertical + dist_horizontal <= raio_oct) {
                
                // Verificação de segurança para não pintar fora do mapa
                if(i >= 0 && i < 10 && j >= 0 && j < 10) {
                     tabuleiro[i][j] = valor_habilidade;
                }
            }
        }
    }

    //Habilidade em Cruz
    int centro_linha_cruz = 5;  
    int centro_coluna_cruz = 6; 
    
    // Define tamanhos diferentes para horizontal e vertical
    // Raio 2 na horizontal = 1 centro + 2 esquerda + 2 direita = 5 casas de largura
    int raio_horizontal_cruz = 2; 
    
    // Raio 1 na vertical = 1 centro + 1 cima + 1 baixo = 3 casas de altura
    int raio_vertical_cruz = 1;

    // PERCORRENDO O TABULEIRO
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            
            // 1. Parte Horizontal
            // Deve estar na linha certa E dentro do limite de largura
            int parte_horizontal = (i == centro_linha_cruz) && (abs(j - centro_coluna_cruz) <= raio_horizontal_cruz);

            // 2. Parte Vertical
            // Deve estar na coluna certa E dentro do limite de altura
            int parte_vertical = (j == centro_coluna_cruz) && (abs(i - centro_linha_cruz) <= raio_vertical_cruz);

            // Se for parte da horizontal OU parte da vertical, pinta
            if (parte_horizontal || parte_vertical) {
                tabuleiro[i][j] = valor_habilidade;
            }
        }
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
    
    return 0;
}
