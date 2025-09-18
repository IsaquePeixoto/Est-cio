#include <stdio.h>

int main() {
    // Carta 1
    char estado1; // Variável para armazenar o estado da carta (A-H)
    char codigo1[4]; // Variável para armazenar o código da carta (ex: A01)
    char nomeCidade1[50]; // Variável para armazenar o nome da cidade
    int populacao1; // Variável para armazenar a população da cidade
    float area1; // Variável para armazenar a área da cidade
    float pib1; // Variável para armazenar o PIB da cidade
    int pontosTuristicos1; // Variável para armazenar o número de pontos turísticos da cidade
    float densidade1; // Variável para armazenar a densidade populacional da cidade
    float pibPerCapita1; // Variável para armazenar o PIB per capita da cidade

    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2; // Variável para armazenar a densidade populacional da cidade
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

    printf("Área (em km²): ");    // Solicita a área da cidade
    scanf("%f", &area1);         // Lê a área da cidade

    printf("PIB (em bilhões de reais): ");     // Solicita o PIB da cidade
    scanf("%f", &pib1);                       // Lê o PIB da cidade

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
    densidade1 = populacao1 / area1;                   // Calcula densidade populacional (hab/km²)
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // Calcula PIB per capita (reais por pessoa)

    // Cálculos para a Carta 2
    densidade2 = populacao2 / area2;                   // Calcula densidade populacional (hab/km²)
    pibPerCapita2 = (pib2 * 1000000000) / populacao2; // Calcula PIB per capita (reais por pessoa)

    // Exibição da Carta 1 
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibição da Carta 2
    printf("\nCarta 2:\n");                                    //Inicia a exibição dos dados da Carta 
    printf("Estado: %c\n", estado2);                          // Exibe o estado da carta
    printf("Código: %s\n", codigo2);                         // Exibe o código da carta
    printf("Nome da Cidade: %s\n", nomeCidade2);            // Exibe o nome da cidade
    printf("População: %d\n", populacao2);                 // Exibe a população da cidade
    printf("Área: %.2f km²\n", area2);                    // Exibe a área da cidade 
    printf("PIB: %.2f bilhões de reais\n", pib2);        // Exibe o PIB da cidade
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);// Exibe o número de pontos turísticos da cidade
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2); // Variável para armazenar a densidade populacional da cidade
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);       // Variável para armazenar o PIB per capita da cidade

    return 0;
}


