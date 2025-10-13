#include <stdio.h>

int main() {
    int opcao;

    // Dados da carta 1 (São Paulo)
    char estado1[] = "São Paulo";
    char codigo1[] = "A01";
    char cidade1[] = "São Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.0;
    float pib1 = 699000.0;
    int pontosTuristicos1 = 15;

    // Dados da carta 2 (Rio de Janeiro)
    char estado2[] = "Rio de Janeiro";
    char codigo2[] = "A02";
    char cidade2[] = "Rio de Janeiro";
    int populacao2 = 6000000;
    float area2 = 1200.0;
    float pib2 = 400000.0;
    int pontosTuristicos2 = 10;

    // Atributos derivados
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    do {
        printf("\n=== DESAFIO NÍVEL AVENTUREIRO ===\n");
        printf("Escolha o atributo para comparar:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Densidade Populacional\n");
        printf("5 - PIB per Capita\n");
        printf("6 - Pontos Turísticos\n");
        printf("7 - Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nComparação de População:\n");
                printf("%s: %d habitantes\n", cidade1, populacao1);
                printf("%s: %d habitantes\n", cidade2, populacao2);

                if (populacao1 > populacao2)
                    printf("Resultado: %s venceu!\n", cidade1);
                else if (populacao2 > populacao1)
                    printf("Resultado: %s venceu!\n", cidade2);
                else
                    printf("Empate!\n");
                break;

            case 2:
                printf("\nComparação de Área:\n");
                printf("%s: %.2f km²\n", cidade1, area1);
                printf("%s: %.2f km²\n", cidade2, area2);

                if (area1 > area2)
                    printf("Resultado: %s venceu!\n", cidade1);
                else if (area2 > area1)
                    printf("Resultado: %s venceu!\n", cidade2);
                else
                    printf("Empate!\n");
                break;

            case 3:
                printf("\nComparação de PIB:\n");
                printf("%s: %.2f milhões\n", cidade1, pib1);
                printf("%s: %.2f milhões\n", cidade2, pib2);

                if (pib1 > pib2)
                    printf("Resultado: %s venceu!\n", cidade1);
                else if (pib2 > pib1)
                    printf("Resultado: %s venceu!\n", cidade2);
                else
                    printf("Empate!\n");
                break;

            case 4:
                printf("\nComparação de Densidade Populacional:\n");
                printf("%s: %.2f hab/km²\n", cidade1, densidade1);
                printf("%s: %.2f hab/km²\n", cidade2, densidade2);

                if (densidade1 < densidade2)
                    printf("Resultado: %s venceu! (menor densidade)\n", cidade1);
                else if (densidade2 < densidade1)
                    printf("Resultado: %s venceu! (menor densidade)\n", cidade2);
                else
                    printf("Empate!\n");
                break;

            case 5:
                printf("\nComparação de PIB per Capita:\n");
                printf("%s: %.2f\n", cidade1, pibPerCapita1);
                printf("%s: %.2f\n", cidade2, pibPerCapita2);

                if (pibPerCapita1 > pibPerCapita2)
                    printf("Resultado: %s venceu!\n", cidade1);
                else if (pibPerCapita2 > pibPerCapita1)
                    printf("Resultado: %s venceu!\n", cidade2);
                else
                    printf("Empate!\n");
                break;

            case 6:
                printf("\nComparação de Pontos Turísticos:\n");
                printf("%s: %d pontos turísticos\n", cidade1, pontosTuristicos1);
                printf("%s: %d pontos turísticos\n", cidade2, pontosTuristicos2);

                if (pontosTuristicos1 > pontosTuristicos2)
                    printf("Resultado: %s venceu!\n", cidade1);
                else if (pontosTuristicos2 > pontosTuristicos1)
                    printf("Resultado: %s venceu!\n", cidade2);
                else
                    printf("Empate!\n");
                break;

            case 7:
                printf("\nEncerrando o programa...\n");
                break;

            default:
                printf("\nOpção inválida! Tente novamente.\n");
        }

    } while (opcao != 7);

    return 0;
}