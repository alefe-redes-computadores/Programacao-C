#include <stdio.h>

int main() {
    // Dados da primeira carta (São Paulo)
    char estado1[] = "São Paulo";
    char codigo1[] = "A01";
    char cidade1[] = "São Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.0;
    float pib1 = 699000.0;
    int pontosTuristicos1 = 15;

    // Dados da segunda carta (Rio de Janeiro)
    char estado2[] = "Rio de Janeiro";
    char codigo2[] = "A02";
    char cidade2[] = "Rio de Janeiro";
    int populacao2 = 6000000;
    float area2 = 1200.0;
    float pib2 = 400000.0;
    int pontosTuristicos2 = 10;

    // Cálculo dos atributos derivados
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    // Comparação de um atributo específico (exemplo: População)
    printf("### Comparação de Cartas (Atributo: População) ###\n\n");

    printf("%s: %d habitantes\n", cidade1, populacao1);
    printf("%s: %d habitantes\n\n", cidade2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: %s venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: %s venceu!\n", cidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}