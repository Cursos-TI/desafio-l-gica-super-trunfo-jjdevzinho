#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    // Carta 1
    char nomePais[50];
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
    char nomePais2[50];
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
    printf("Digite o nome do país: ");
    scanf(" %49[^\n]", nomePais);
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (formato: A01 a H04): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nomeCidade1);
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");

    // Área para entrada de dados - Carta 2
    printf("=== CADASTRO DA CARTA 2 ===\n");
    printf("Digite o nome do país: ");
    scanf(" %49[^\n]", nomePais2);
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (formato: A01 a H04): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nomeCidade2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
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
    printf("Nome do País: %s\n", nomePais);
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
    printf("Nome do País: %s\n", nomePais2);
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

    // Menu de comparação das cartas
    printf("=== MENU DE COMPARAÇÃO ===\n");
    printf("Escolha qual atributo deseja comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Digite sua escolha (1-5): ");
    
    int escolha;
    scanf("%d", &escolha);
    
    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");
    
    switch (escolha) {
        case 1:
            // População: maior vence
            printf("Atributo: População\n");
            printf("País 1 (%s): %lu habitantes\n", nomePais, populacao1);
            printf("País 2 (%s): %lu habitantes\n", nomePais2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", nomePais);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
            
        case 2:
            // Área: maior vence
            printf("Atributo: Área\n");
            printf("País 1 (%s): %.2f km²\n", nomePais, area1);
            printf("País 2 (%s): %.2f km²\n", nomePais2, area2);
            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", nomePais);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
            
        case 3:
            // PIB: maior vence
            printf("Atributo: PIB\n");
            printf("País 1 (%s): %.2f bilhões de reais\n", nomePais, pib1);
            printf("País 2 (%s): %.2f bilhões de reais\n", nomePais2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", nomePais);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
            
        case 4:
            // Pontos Turísticos: maior vence
            printf("Atributo: Pontos Turísticos\n");
            printf("País 1 (%s): %d pontos turísticos\n", nomePais, pontosTuristicos1);
            printf("País 2 (%s): %d pontos turísticos\n", nomePais2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: %s venceu!\n", nomePais);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: %s venceu!\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
            
        case 5:
            // Densidade Populacional: MENOR vence
            printf("Atributo: Densidade Populacional\n");
            printf("País 1 (%s): %.2f habitantes/km²\n", nomePais, densidadePopulacional1);
            printf("País 2 (%s): %.2f habitantes/km²\n", nomePais2, densidadePopulacional2);
            if (densidadePopulacional1 < densidadePopulacional2) {
                printf("Resultado: %s venceu! (menor densidade)\n", nomePais);
            } else if (densidadePopulacional2 < densidadePopulacional1) {
                printf("Resultado: %s venceu! (menor densidade)\n", nomePais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
            
        default:
            printf("Opção inválida! Por favor, escolha uma opção entre 1 e 5.\n");
            break;
    }

    return 0;
}
