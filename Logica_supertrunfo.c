#include <stdio.h>

int main() {
    // Carta 1
    char estado1;               // Variável para armazenar o estado da carta (A-H)
    char codigo1[4];           // Variável para armazenar o código da carta (ex: A01)
    char nomeCidade1[50];     // Variável para armazenar o nome da cidade
    int populacao1;          // Variável para armazenar a população da cidade
    float area1;            // Variável para armazenar a área da cidade
    float pib1;            // Variável para armazenar o PIB da cidade
    int pontosTuristicos1;// Variável para armazenar o número de pontos turísticos da cidade
    float densidade1;    // Variável para armazenar a densidade populacional da cidade
    float pibPerCapita1;// Variável para armazenar o PIB per capita da cidade

    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;     // Variável para armazenar a densidade populacional da cidade
    float pibPerCapita2; // Variável para armazenar o PIB per capita da cidade

    // Entrada de dados da Carta 1
    printf("Cadastro da Carta 1\n"); 

    printf("Estado (A-H): ");                 // Solicita o estado da carta
    scanf(" %c", &estado1);                  // O espaço antes de %c ignora espaços em branco

    printf("Código da Carta (ex: A01): "); // Solicita o código da carta
    scanf("%s", codigo1);                 // Lê o código da carta

    printf("Nome da Cidade: ");         // Solicita o nome da cidade
    scanf(" %[^\n]", nomeCidade1);     // O espaço antes de %[^\n] ignora espaços em branco e lê até a nova linha
    
    printf("População: ");           // Solicita a população da cidade
    scanf("%d", &populacao1);       // Lê a população da cidade

    printf("Área (em km²): ");       // Solicita a área da cidade
    scanf("%f", &area1);            // Lê a área da cidade

    printf("PIB (em bilhões de reais): ");  // Solicita o PIB da cidade
    scanf("%f", &pib1);                    // Lê o PIB da cidade

    printf("Número de Pontos Turísticos: "); // Solicita o número de pontos turísticos
    scanf("%d", &pontosTuristicos1);        // Lê o número de pontos turísticos da cidade

    // Entrada de dados da Carta 2
    printf("\nCadastro da Carta 2\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos para a Carta 1
    densidade1 = populacao1 / area1;                              // Calcula densidade populacional (hab/km²)
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;            // Calcula PIB per capita (reais por pessoa)

    // Cálculos para a Carta 2
    densidade2 = populacao2 / area2;                           // Calcula densidade populacional (hab/km²)
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;         // Calcula PIB per capita (reais por pessoa)

    // menuzao
    int opcao;                                              // Variável para armazenar a opção escolhida pelo usuário
    printf("\n=== Bora comparar as cartas ===\n");         // Título do menu
    printf("1 - Populacao\n");                            // Opção 1: População
    printf("2 - Area\n");                                // Opção 2: Área
    printf("3 - PIB\n");                                // Opção 3: PIB      
    printf("4 - Pontos Turisticos\n");                 // Opção 4: Pontos Turísticos
    printf("5 - Densidade (quanto menor melhor)\n");  // Opção 5: Densidade populacional
    printf("6 - PIB per capita\n");                  // Opção 6: PIB per capita 
    printf("Escolhe ai uma opcao: ");               // Solicita ao usuário que escolha uma opção
    scanf("%d", &opcao);                           // Lê a opção escolhida pelo usuário

    // switchzao bruto
    switch (opcao) {                                                        // Inicia o switch para tratar as diferentes opções
        case 1:                                                            // Caso a opção seja 1 (População)                                    
            printf("\nPopulacao:\n");                                     // Título da seção
            printf("Carta 1 - %s: %d hab\n", nomeCidade1, populacao1);   // Exibe a população da Carta 1
            printf("Carta 2 - %s: %d hab\n", nomeCidade2, populacao2);  // Exibe a população da Carta 2
            if (populacao1 > populacao2) { // -------------------------------------------------------------Compara as populações     
                printf(">>> Carta 1 - %s ganhou, fi!\n", nomeCidade1); // Exibe o resultado
            } else if (populacao2 > populacao1) { // ----------------------------------------------------------Compara as populações
                printf(">>> Carta 2 - %s ganhou, fi!\n", nomeCidade2);// Exibe o resultado
            } else {                         // ---------------------------------------------------------------Caso as populações sejam iguais
                printf(">>> Empatou, mano!\n");// Exibe o resultado
            }
            break; // ---------------------------------------------------------------------------------------------------Sai do switch

        case 2:                                                             // Caso a opção seja 2 (Área)
            printf("\nArea:\n");                                           // Título da seção
            printf("Carta 1 - %s: %.2f km²\n", nomeCidade1, area1);       // Exibe a área da Carta 1
            printf("Carta 2 - %s: %.2f km²\n", nomeCidade2, area2);      // Exibe a área da Carta 2
            if (area1 > area2) { // --------------------------------------------------------------Compara as áreas
                printf(">>> Carta 1 - %s ganhou, fi!\n", nomeCidade1); // Exibe o resultado
            } else if (area2 > area1) { // -----------------------------------------------------------Compara as áreas
                printf(">>> Carta 2 - %s ganhou, fi!\n", nomeCidade2);// Exibe o resultado
            } else {                        // ---------------------------------------------------------------Caso as áreas sejam iguais
                printf(">>> Empatou, mano!\n");                     // Exibe o resultado
            }
            break;  // ---------------------------------------------------------------------------------------------------Sai do switch

        case 3:                                                              // Caso a opção seja 3 (PIB)
            printf("\nPIB:\n");                                             // Título da seção
            printf("Carta 1 - %s: %.2f bilhoes\n", nomeCidade1, pib1);     // Exibe o PIB da Carta 1
            printf("Carta 2 - %s: %.2f bilhoes\n", nomeCidade2, pib2);    // Exibe o PIB da Carta 2
            if (pib1 > pib2) { // ---------------------------------------------------------------Compara os PIBs
                printf(">>> Carta 1 - %s ganhou, fi!\n", nomeCidade1);  // Exibe o resultado
            } else if (pib2 > pib1) { // ------------------------------------------------------------Compara os PIBs
                printf(">>> Carta 2 - %s ganhou, fi!\n", nomeCidade2);// Exibe o resultado
            } else {                       // ---------------------------------------------------------------Caso os PIBs sejam iguais
                printf(">>> Empatou, mano!\n");                     // Exibe o resultado
            }
            break;

        case 4:
            printf("\nPontos turisticos:\n");
            printf("Carta 1 - %s: %d pts\n", nomeCidade1, pontosTuristicos1);
            printf("Carta 2 - %s: %d pts\n", nomeCidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf(">>> Carta 1 - %s ganhou, fi!\n", nomeCidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf(">>> Carta 2 - %s ganhou, fi!\n", nomeCidade2);
            } else {
                printf(">>> Empatou, mano!\n");
            }
            break;

        case 5:                                                                 //caso a opção seja 5 (Densidade populacional) 
            printf("\nDensidade:\n");                                          // Título da seção
            printf("Carta 1 - %s: %.2f hab/km²\n", nomeCidade1, densidade1);  // Exibe a densidade populacional da Carta 1
            printf("Carta 2 - %s: %.2f hab/km²\n", nomeCidade2, densidade2); // Exibe a densidade populacional da Carta 2
            if (densidade1 < densidade2) { // --------------------------------------------------Compara as densidades (quanto menor, melhor)
                printf(">>> Carta 1 - %s ganhou, fi!\n", nomeCidade1);      // Exibe o resultado
            } else if (densidade2 < densidade1) { // -----------------------------------------------Compara as densidades (quanto menor, melhor)
                printf(">>> Carta 2 - %s ganhou, fi!\n", nomeCidade2);     // Exibe o resultado
            } else {                       // ---------------------------------------------------------------Caso as densidades sejam iguais
                printf(">>> Empatou, mano!\n");                           // Exibe o resultado
            } 
            break; // ---------------------------------------------------------------------------------------------------Sai do switch

        case 6:
            printf("\nPIB per capita:\n");
            printf("Carta 1 - %s: %.2f\n", nomeCidade1, pibPerCapita1);
            printf("Carta 2 - %s: %.2f\n", nomeCidade2, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2) {
                printf(">>> Carta 1 - %s ganhou, fi!\n", nomeCidade1);
            } else if (pibPerCapita2 > pibPerCapita1) {
                printf(">>> Carta 2 - %s ganhou, fi!\n", nomeCidade2);
            } else {
                printf(">>> Empatou, mano!\n");
            }
            break;

        default:                                                         // Caso a opção seja inválida
            printf("\nVoce digitou errado ai, parça...\n");             // Mensagem de erro
    }

    return 0;
}

