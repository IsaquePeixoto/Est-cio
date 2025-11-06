#include <stdio.h>

int main() { 


    // MOVIMENTO DA TORRE (usando for)
    int casasTorre = 5;//------------------------Define que a torre vai andar 5 casas
    printf("Movimento da Torre:\n");//-----------Título da parte da Torre

    // Estrutura "for" — usada quando sei quantas vezes repetir
    for (int i = 1; i <= casasTorre; i++) {//---- Começa em 1 e repete até 5 vezes
        printf("Direita\n");//------------------- Mostra o movimento da Torre (para a direita)
    }

    printf("\n");//------------------------------ Pula uma linha para separar os movimentos

    // MOVIMENTO DO BISPO (usando while)
    int casasBispo = 5;//------------------------ Define que o bispo vai andar 5 casas
    int contadorBispo = 1;//--------------------- Contador que começa em 1
    printf("Movimento do Bispo:\n");//----------- Título da parte do Bispo

    //------------------------------------------- Estrutura "while" — repete enquanto a condição for verdadeira
    while (contadorBispo <= casasBispo) {//------ Enquanto o contador for menor ou igual a 5
        printf("Cima, Direita\n");//------------- Mostra o movimento do bispo (diagonal)
        contadorBispo++;//----------------------- Aumenta o contador em 1
    }

    printf("\n");//------------------------------ Pula uma linha para separar os movimentos


    // MOVIMENTO DA RAINHA (usando do-while)
    int casasRainha = 8;//----------------------- Define que a rainha vai andar 8 casas
    int contadorRainha = 1;//-------------------- Contador começa em 1
    printf("Movimento da Rainha:\n");//---------- Título da parte da Rainha

    //------------------------------------------- Estrutura "do-while" — executa pelo menos uma vez antes de verificar a condição
    do {
        printf("Esquerda\n");//------------------- Mostra o movimento da Rainha (para a esquerda)
        contadorRainha++;//----------------------- Aumenta o contador em 1
    } while (contadorRainha <= casasRainha);//---- Repete até chegar a 8

    printf("\n"); //------------------------------ Pula uma linha para separar os movimentos


    // MOVIMENTO DO CAVALO (usando loops aninhados)
    // O cavalo se move em L — duas casas para uma direção e depois uma para outra.
    // Neste caso: duas casas para BAIXO e uma para a ESQUERDA!!.

    int casasBaixo = 2;//-------------------------- Quantas casas o cavalo vai descer
    int casasEsquerda = 1;//----------------------- Quantas casas o cavalo vai para a esquerda

    printf("Movimento do Cavalo:\n");//------------ Título da parte do Cavalo

    //--------------------------------------------- Usando um loop "for" (obrigatório) e um "while" aninhado
    for (int i = 1; i <= casasBaixo; i++) {//------ Primeiro movimento: duas casas para baixo
        printf("Baixo\n");//----------------------- Mostra o movimento para baixo

        int j = 1;//-------------------------------- Contador do loop interno (para o movimento lateral)
        while (j <= casasEsquerda) {//-------------- Depois de descer, move uma casa para o lado
            if (i == casasBaixo) {//---------------- Só faz o movimento lateral no último passo do "L"
                printf("Esquerda\n");//------------- Mostra o movimento para a esquerda
            }
            j++;//---------------------------------- Aumenta o contador interno
        }
    }

    printf("\nSimulação concluída!\n");//----------- Mostra que todos os movimentos terminaram

    return 0; //------------------------------------ Finaliza o programa
}
