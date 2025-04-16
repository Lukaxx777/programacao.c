#include <stdio.h>
#include <string.h>

// Função para exibir o menu de seleção de atributos
void exibirMenuAtributos() {
    printf("\n=== Atributos Disponíveis ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha um atributo: ");
}

// Função para obter o nome do atributo baseado na escolha do menu
const char* obterNomeAtributo(int opcao) {
    switch (opcao) {
        case 1: return "População";
        case 2: return "Área";
        case 3: return "PIB";
        case 4: return "Número de Pontos Turísticos";
        case 5: return "Densidade Demográfica";
        default: return "Atributo Inválido";
    }
}

int main() {
    // Declaração de variáveis para as cartas
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidadeDemografica1, densidadeDemografica2;
    int pontosTuristicos1, pontosTuristicos2;

    // Entrada de dados para as cartas
    printf("Cadastro da Carta 1:\n");
    printf("Nome da Cidade: ");
    getchar(); // Consome o '\n' residual
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0; // Remove o '\n'
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nCadastro da Carta 2:\n");
    printf("Nome da Cidade: ");
    getchar(); // Consome o '\n' residual
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0; // Remove o '\n'
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos adicionais
    densidadeDemografica1 = populacao1 / area1;
    densidadeDemografica2 = populacao2 / area2;

    int atributo1, atributo2;

    // Seleção do primeiro atributo
    exibirMenuAtributos();
    scanf("%d", &atributo1);

    // Excluir o primeiro atributo da próxima seleção
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    exibirMenuAtributos();
    do {
        scanf("%d", &atributo2);
        if (atributo2 == atributo1) {
            printf("O segundo atributo deve ser diferente do primeiro. Tente novamente.\n");
        }
    } while (atributo2 == atributo1);

    // Obter valores dos atributos selecionados
    float valor1Carta1, valor1Carta2, valor2Carta1, valor2Carta2;
    const char *nomeAtributo1 = obterNomeAtributo(atributo1);
    const char *nomeAtributo2 = obterNomeAtributo(atributo2);

    // Atributo 1
    switch (atributo1) {
        case 1: valor1Carta1 = populacao1; valor1Carta2 = populacao2; break;
        case 2: valor1Carta1 = area1; valor1Carta2 = area2; break;
        case 3: valor1Carta1 = pib1; valor1Carta2 = pib2; break;
        case 4: valor1Carta1 = pontosTuristicos1; valor1Carta2 = pontosTuristicos2; break;
        case 5: valor1Carta1 = densidadeDemografica1; valor1Carta2 = densidadeDemografica2; break;
    }

    // Atributo 2
    switch (atributo2) {
        case 1: valor2Carta1 = populacao1; valor2Carta2 = populacao2; break;
        case 2: valor2Carta1 = area1; valor2Carta2 = area2; break;
        case 3: valor2Carta1 = pib1; valor2Carta2 = pib2; break;
        case 4: valor2Carta1 = pontosTuristicos1; valor2Carta2 = pontosTuristicos2; break;
        case 5: valor2Carta1 = densidadeDemografica1; valor2Carta2 = densidadeDemografica2; break;
    }

    // Comparação dos atributos e soma
    int vencedor1 = (atributo1 == 5) ? (valor1Carta1 < valor1Carta2) : (valor1Carta1 > valor1Carta2);
    int vencedor2 = (atributo2 == 5) ? (valor2Carta1 < valor2Carta2) : (valor2Carta1 > valor2Carta2);
    float somaCarta1 = valor1Carta1 + valor2Carta1;
    float somaCarta2 = valor1Carta2 + valor2Carta2;

    // Exibição dos resultados
    printf("\nComparação dos Atributos:\n");
    printf("%s (Atributo 1): %.2f vs %.2f -> %s venceu\n", 
           nomeAtributo1, valor1Carta1, valor1Carta2, vencedor1 ? nomeCidade1 : nomeCidade2);
    printf("%s (Atributo 2): %.2f vs %.2f -> %s venceu\n", 
           nomeAtributo2, valor2Carta1, valor2Carta2, vencedor2 ? nomeCidade1 : nomeCidade2);
    printf("\nSoma dos Atributos:\n");
    printf("%s: %.2f\n", nomeCidade1, somaCarta1);
    printf("%s: %.2f\n", nomeCidade2, somaCarta2);

    if (somaCarta1 > somaCarta2) {
        printf("\nResultado Final: %s venceu!\n", nomeCidade1);
    } else if (somaCarta1 < somaCarta2) {
        printf("\nResultado Final: %s venceu!\n", nomeCidade2);
    } else {
        printf("\nResultado Final: Empate!\n");
    }

    return 0;
}
