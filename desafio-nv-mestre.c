#include <stdio.h>

int main() {
    // Declaração das variáveis das duas cartas
    char pais1[] = "Brasil";
    char pais2[] = "Argentina";

    int populacao1 = 214000000, populacao2 = 46000000;
    float area1 = 8516000.0, area2 = 2780000.0;
    float pib1 = 22000.0, pib2 = 6400.0;
    int pontos1 = 30, pontos2 = 20;
    float dens1 = populacao1 / area1;
    float dens2 = populacao2 / area2;

    int opcao1, opcao2;
    float valor1_carta1, valor1_carta2;
    float valor2_carta1, valor2_carta2;
    float soma1, soma2;

    printf("### SUPER TRUNFO – DESAFIO NÍVEL MESTRE ###\n\n");
    printf("Cartas:\n1. %s\n2. %s\n\n", pais1, pais2);

    // Menu de atributos disponíveis
    printf("Atributos disponíveis:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");

    // Escolha do primeiro atributo
    printf("\nEscolha o 1º atributo para comparação: ");
    scanf("%d", &opcao1);

    // Escolha do segundo atributo (sem repetir o primeiro)
    do {
        printf("Escolha o 2º atributo (diferente do primeiro): ");
        scanf("%d", &opcao2);
        if (opcao2 == opcao1)
            printf("⚠️ Você já escolheu esse atributo. Escolha outro!\n");
    } while (opcao2 == opcao1);

    // Função auxiliar: atribui valores conforme opção
    switch (opcao1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = pontos1; valor1_carta2 = pontos2; break;
        case 5: valor1_carta1 = dens1; valor1_carta2 = dens2; break;
        default: printf("Opção inválida!\n"); return 0;
    }

    switch (opcao2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = pontos1; valor2_carta2 = pontos2; break;
        case 5: valor2_carta1 = dens1; valor2_carta2 = dens2; break;
        default: printf("Opção inválida!\n"); return 0;
    }

    // Soma dos atributos selecionados
    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    // Exibição de resultados
    printf("\n--- RESULTADO ---\n");
    printf("%s -> Soma total: %.2f\n", pais1, soma1);
    printf("%s -> Soma total: %.2f\n", pais2, soma2);

    // Determina o vencedor (usando operador ternário)
    (soma1 > soma2) ? printf("\n🏆 %s venceu!\n", pais1) :
    (soma1 < soma2) ? printf("\n🏆 %s venceu!\n", pais2) :
                      printf("\n🤝 Empate!\n");

    return 0;
}