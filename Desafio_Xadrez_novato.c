#include <stdio.h>

int main() { 

    
                                                // MOVIMENTO DA TORRE (usando for)
    int casasTorre = 5;                        // Define que a torre vai andar 5 casas
    printf("Movimento da Torre:\n"); 
                                             // Estrutura de repetição "for" — usada quando sei quantas vezes repetir
    for (int i = 1; i <= casasTorre; i++) { // Começa em 1 e repete até 5 vezes
        printf("Direita\n");               // A cada repetição, mostra que a torre se move uma casa para a direita
    }

    printf("\n");            // Pula uma linha para separar os movimentos
    
                                                 // MOVIMENTO DO BISPO (usando while)
    int casasBispo = 5;                         // Define que o bispo vai andar 5 casas
    int contadorBispo = 1;                     // Contador que começa em 1
    printf("Movimento do Bispo:\n");          // Mostra o título dessa parte

                                           // Estrutura "while" — repete enquanto a condição for verdadeira
    while (contadorBispo <= casasBispo) { // Enquanto o contador for menor ou igual a 5
        printf("Cima, Direita\n");       // Mostra o movimento do bispo (diagonal)
        contadorBispo++;                // Aumenta o contador em 1 (para não repetir infinitamente)
    }

    printf("\n");            // Pula uma linha para separar os movimentos

   
                                        // MOVIMENTO DA RAINHA (usando do-while)
    int casasRainha = 8;               // Define que a rainha vai andar 8 casas
    int contadorRainha = 1;           // Contador começa em 1
    printf("Movimento da Rainha:\n");// Mostra o título dessa parte

                                                // Estrutura "do-while" — executa o bloco pelo menos uma vez antes de verificar a condição
    do {
        printf("Esquerda\n");                  // Mostra o movimento da rainha (para a esquerda)
        contadorRainha++;                     // Aumenta o contador em 1
    } while (contadorRainha <= casasRainha); // Repete enquanto o contador for menor ou igual a 8

    printf("\nSimulação concluída!\n");    // Mostra que todos os movimentos terminaram

    return 0;
}
