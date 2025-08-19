#include <stdio.h>

// Programa para cadastrar duas cartas do Super Trunfo de Estados Brasileiros e depois exibi-las

    int main() {
     // declaração de variáveis para a primeira carta
     char estado1, codigo1[4], cidade1[50];
     int populacao1, pontos_turisticos1;
     float area1, pib1;

    // declaração de variáveis para a segunda carta
     char estado2, codigo2[4], cidade2[50];
     int populacao2, pontos_turisticos2;
     float area2, pib2;

     //Entrada de dados da primeira carta
     printf("Cadastro da Carta 1 \n");
     printf("Digite a letra inicial do estado (de A a H) ");
     scanf(" %c", &estado1); //Espaço para ignorar quaisquer caracteres em branco 

     printf("Digite o código da carta (ex: A01): ");
     scanf("%s", codigo1);

     printf("Digite o nome da cidade: ");
     scanf(" %[^\n]", cidade1); //Leitura da string com espaço ate a quebra, ignorando caractere em branco

     printf("Digite a população: ");
     scanf("%d", &populacao1);

     printf("Digite a área  (em km²): ");
     scanf("%f", &area1);

     printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    //Entrada de dados da segunda carta
     printf("Cadastro da Carta 2 \n");
     printf("Digite a letra inicial do estado (de A a H) ");
     scanf(" %c", &estado2); //Espaço para ignorar quaisquer caracteres em branco 

     printf("Digite o código da carta (ex: B01): ");
     scanf("%s", codigo2);

     printf("Digite o nome da cidade: ");
     scanf(" %[^\n]", cidade2); //Leitura da string com espaço ate a quebra, ignorando caractere em branco

     printf("Digite a população: ");
     scanf("%d", &populacao2);

     printf("Digite a área  (em km²): ");
     scanf("%f", &area2);

     printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

     // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    
    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

        return 0;
    }
    
    