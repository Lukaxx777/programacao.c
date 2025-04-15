#include <stdio.h>

void limparBuffer() { //serve para limpar o buffer e evitar erros
    while (getchar() != '\n');
}

int main() {
    // Declaração de variáveis para armazenar os dados das cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Entrada de dados para a Carta 1
    printf("Cadastro da Carta 1:\n");
 
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
 
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    limparBuffer(); // Limpa o buffer do teclado

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); // Permite entrada com espaços
   
    printf("População: ");
    scanf(" %d", &populacao1);
    
    limparBuffer(); // Limpa o buffer do teclado 

    printf("Área (em km²): ");
    scanf(" %f", &area1);
   
    limparBuffer(); // Limpa o buffer do teclado

    printf("PIB (em bilhões de reais):");
    scanf(" %f", &pib1);
   
    printf("Número de Pontos Turísticos:");
    scanf(" %d", &pontosTuristicos1);
   
    // Entrada de dados para a Carta 2
    printf("\nCadastro da Carta 2:\n");
 
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
  
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
  
    limparBuffer(); // Limpa o buffer do teclado
   
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2); // Permite entrada com espaços
   
    printf("População: ");
    scanf("%d", &populacao2);
   
    limparBuffer(); // Limpa o buffer do teclado

    printf("Área (em km²): ");
    scanf("%f", &area2);
   
    limparBuffer(); // Limpa o buffer do teclado

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
   
    limparBuffer(); // Limpa o buffer do teclado

    // Exibição dos dados da Carta 1
    printf("\n=== Dados da Carta 1 ===\n");
    printf("Código: %s\n", codigo1);
    printf("Estado: %c\n", estado1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da Carta 2
    printf("\n=== Dados da Carta 2 ===\n");
    printf("Código: %s\n", codigo2);
    printf("Estado: %c\n", estado2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}