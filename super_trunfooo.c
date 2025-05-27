#include <stdio.h>

int main() {
    // Carta 1 - Pato Branco
    char estado1 = 'A';
    char codigo1[] = "A01";
    char nomeCidade1[] = "Pato Branco";
    int populacao1 = 84000;
    float area1 = 539.1;
    float pib1 = 2.75; // PIB em bilhões
    int pontosTuristicos1 = 10;

    // Carta 2 - Francisco Beltrão
    char estado2 = 'B';
    char codigo2[] = "B02";
    char nomeCidade2[] = "Francisco Beltrão";
    int populacao2 = 95000;
    float area2 = 734.5;
    float pib2 = 3.10; // PIB em bilhões
    int pontosTuristicos2 = 12;

    // Exibindo as informações das cartas
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
