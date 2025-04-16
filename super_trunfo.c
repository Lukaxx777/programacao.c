#include <stdio.h>
#include <string.h>

// Função para exibir o menu interativo
void exibirMenu() {
    printf("\n=== Menu de Comparação ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("0 - Sair\n");
    printf("Escolha um atributo para comparar: ");
}

int main() {
    // Declaração de variáveis para as cartas
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Variáveis para cálculos adicionais
    float densidadeDemografica1, densidadeDemografica2;

    // Entrada de dados para a Carta 1
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

    // Entrada de dados para a Carta 2
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

    int opcao;
    do {
        // Exibir o menu interativo
        exibirMenu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: // População
                printf("\nComparação de População:\n");
                printf("%s: %lu habitantes\n", nomeCidade1, populacao1);
                printf("%s: %lu habitantes\n", nomeCidade2, populacao2);
                if (populacao1 > populacao2) {
                    printf("Resultado: %s venceu!\n", nomeCidade1);
                } else if (populacao1 < populacao2) {
                    printf("Resultado: %s venceu!\n", nomeCidade2);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;

            case 2: // Área
                printf("\nComparação de Área:\n");
                printf("%s: %.2f km²\n", nomeCidade1, area1);
                printf("%s: %.2f km²\n", nomeCidade2, area2);
                if (area1 > area2) {
                    printf("Resultado: %s venceu!\n", nomeCidade1);
                } else if (area1 < area2) {
                    printf("Resultado: %s venceu!\n", nomeCidade2);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;

            case 3: // PIB
                printf("\nComparação de PIB:\n");
                printf("%s: %.2f bilhões de reais\n", nomeCidade1, pib1);
                printf("%s: %.2f bilhões de reais\n", nomeCidade2, pib2);
                if (pib1 > pib2) {
                    printf("Resultado: %s venceu!\n", nomeCidade1);
                } else if (pib1 < pib2) {
                    printf("Resultado: %s venceu!\n", nomeCidade2);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;

            case 4: // Pontos Turísticos
                printf("\nComparação de Pontos Turísticos:\n");
                printf("%s: %d pontos\n", nomeCidade1, pontosTuristicos1);
                printf("%s: %d pontos\n", nomeCidade2, pontosTuristicos2);
                if (pontosTuristicos1 > pontosTuristicos2) {
                    printf("Resultado: %s venceu!\n", nomeCidade1);
                } else if (pontosTuristicos1 < pontosTuristicos2) {
                    printf("Resultado: %s venceu!\n", nomeCidade2);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;

            case 5: // Densidade Demográfica
                printf("\nComparação de Densidade Demográfica:\n");
                printf("%s: %.2f hab/km²\n", nomeCidade1, densidadeDemografica1);
                printf("%s: %.2f hab/km²\n", nomeCidade2, densidadeDemografica2);
                if (densidadeDemografica1 < densidadeDemografica2) {
                    printf("Resultado: %s venceu!\n", nomeCidade1);
                } else if (densidadeDemografica1 > densidadeDemografica2) {
                    printf("Resultado: %s venceu!\n", nomeCidade2);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;

            case 0: // Sair
                printf("\nFim de jogo. Até a próxima!\n");
                break;

            default:
                printf("\nOpção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
