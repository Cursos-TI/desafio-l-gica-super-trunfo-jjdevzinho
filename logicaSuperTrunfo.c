#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    // Carta 1
    char estado1;
    char codigo1[5];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    // Carta 2
    char estado2;
    char codigo2[5];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // Cadastro das Cartas:
    // Área para entrada de dados - Carta 1
    printf("=== CADASTRO DA CARTA 1 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (formato: A01 a H04): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nomeCidade1); // Lê uma string com espaços
    printf("Digite a população: ");
    scanf("%lu", &populacao1);  // Mudança para unsigned long int
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");

    // Área para entrada de dados - Carta 2
    printf("=== CADASTRO DA CARTA 2 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (formato: A01 a H04): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nomeCidade2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);  // Mudança para unsigned long int
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    // Cálculos para Carta 1
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / (float)populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidadePopulacional1);

    // Cálculos para Carta 2
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidadePopulacional2);

    // Área para exibição dos dados das cidades
    printf("\n=== EXIBIÇÃO DOS DADOS ===\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);  // Mudança para %lu
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f mil reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);
    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);  // Mudança para %lu
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f mil reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    printf("\n");

    // Área para comparação das cartas
    printf("=== COMPARAÇÃO DE CARTAS ===\n");
    
    // População: maior vence
    printf("População: ");
    if (populacao1 > populacao2) {
        printf("Carta 1 (%s) venceu\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Carta 2 (%s) venceu\n", nomeCidade2);
    } else {
        printf("Empate\n");
    }
    
    // Área: maior vence
    printf("Área: ");
    if (area1 > area2) {
        printf("Carta 1 (%s) venceu\n", nomeCidade1);
    } else if (area2 > area1) {
        printf("Carta 2 (%s) venceu\n", nomeCidade2);
    } else {
        printf("Empate\n");
    }
    
    // PIB: maior vence
    printf("PIB: ");
    if (pib1 > pib2) {
        printf("Carta 1 (%s) venceu\n", nomeCidade1);
    } else if (pib2 > pib1) {
        printf("Carta 2 (%s) venceu\n", nomeCidade2);
    } else {
        printf("Empate\n");
    }
    
    // Pontos Turísticos: maior vence
    printf("Pontos Turísticos: ");
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Carta 1 (%s) venceu\n", nomeCidade1);
    } else if (pontosTuristicos2 > pontosTuristicos1) {
        printf("Carta 2 (%s) venceu\n", nomeCidade2);
    } else {
        printf("Empate\n");
    }
    
    // Densidade Populacional: MENOR vence (inverso dos outros)
    printf("Densidade Populacional: ");
    if (densidadePopulacional1 < densidadePopulacional2) {
        printf("Carta 1 (%s) venceu (menor densidade)\n", nomeCidade1);
    } else if (densidadePopulacional2 < densidadePopulacional1) {
        printf("Carta 2 (%s) venceu (menor densidade)\n", nomeCidade2);
    } else {
        printf("Empate\n");
    }
    
    // PIB per Capita: maior vence
    printf("PIB per Capita: ");
    if (pibPerCapita1 > pibPerCapita2) {
        printf("Carta 1 (%s) venceu\n", nomeCidade1);
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("Carta 2 (%s) venceu\n", nomeCidade2);
    } else {
        printf("Empate\n");
    }
    
    // Super Poder: maior vence
    printf("Super Poder: ");
    if (superPoder1 > superPoder2) {
        printf("Carta 1 (%s) venceu\n", nomeCidade1);
    } else if (superPoder2 > superPoder1) {
        printf("Carta 2 (%s) venceu\n", nomeCidade2);
    } else {
        printf("Empate\n");
    }

    return 0;
}
