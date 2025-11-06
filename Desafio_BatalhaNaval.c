#include <stdio.h>

#define TAM 10//--------------------- define o tamanho do tabuleiro (10x10)
#define NAVIO 3//-------------------- define o numero que vai representar o navio no tabuleiro
#define TAM_NAVIO 3//---------------- define o tamanho do navio (3 posicoes)

int main() {
    int tabuleiro[TAM][TAM];//------- cria o tabuleiro, que e uma matriz 10x10
    int i, j;//---------------------- variaveis pra usar nos loops

    //------------------------------- inicializa o tabuleiro com 0 (agua)
    for (i = 0; i < TAM; i++) { //--- roda as linhas (horizontal)
        for (j = 0; j < TAM; j++) {// roda as colunas (vertical)
            tabuleiro[i][j] = 0;//--- coloca 0 em cada posicao, quer dizer que tem agua
        }
    }

    //------------------ cria dois navios (um horizontal e um vertical) 
    int navioHorizontal[TAM_NAVIO] = {NAVIO, NAVIO, NAVIO};// navio na horizontal
    int navioVertical[TAM_NAVIO] = {NAVIO, NAVIO, NAVIO}; // navio na vertical

    //-------------------------- define onde cada navio vai comecar
    int linhaHorizontal = 2;//---------------------------- linha onde o navio horizontal comeca
    int colunaHorizontal = 4;//--------------------------- coluna onde ele comeca
    int linhaVertical = 5;//------------------------------ linha onde o navio vertical comeca
    int colunaVertical = 7;//----------------------------- coluna onde o navio vertical fica

    //---------------------------------------------------- confere se o navio cabe no tabuleiro 
    if (colunaHorizontal + TAM_NAVIO > TAM || linhaVertical + TAM_NAVIO > TAM) {
        //-------------------------------------------------se passar do tamanho do tabuleiro, da erro
        printf("Erro: navio passou do limite do tabuleiro.\n");
        return 1; //---------------------------------------para o programa
    }

    //---------------------------------------------------- coloca o navio horizontal no tabuleiro
    for (i = 0; i < TAM_NAVIO; i++) { //------------------ roda o tamanho do navio
        tabuleiro[linhaHorizontal][colunaHorizontal + i] = navioHorizontal[i]; // coloca o 3 nas posicoes certas
    }

    //--------------------------------------- coloca o navio vertical no tabuleiro
    for (i = 0; i < TAM_NAVIO; i++) {
        //----------------------------------- confere se ja tem outro navio ali
        if (tabuleiro[linhaVertical + i][colunaVertical] == NAVIO) {
            printf("Erro: um navio ta em cima do outro!\n");
            return 1; //--------------------- para o programa se tiver sobreposicao
        }
        //------------------------------------ coloca o navio vertical no tabuleiro
        tabuleiro[linhaVertical + i][colunaVertical] = navioVertical[i];
    }

    //---------------------------------------- mostra o tabuleiro na tela
    printf("\n=== TABULEIRO BATALHA NAVAL ===\n\n"); // titulo bonitinho
    for (i = 0; i < TAM; i++) {         //------------- roda as linhas
        for (j = 0; j < TAM; j++) {     //------------- roda as colunas
            printf("%d ", tabuleiro[i][j]); //--------- mostra o valor da posicao (0 = agua, 3 = navio)
        }
        printf("\n"); //------------------------------- quebra a linha pra deixar organizado
    }

    return 0;
}
