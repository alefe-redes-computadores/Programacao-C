#include <stdio.h>

int main() {
    int opcao;
    float nota1, nota2, media;

    // Exibição do MENU
    printf("### MENU DE GERENCIAMENTO DE ESTUDANTES ###\n");
    printf("1. Calcular média\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite a primeira nota: ");
            scanf("%f", &nota1);
            printf("Digite a segunda nota: ");
            scanf("%f", &nota2);
            media = (nota1 + nota2) / 2;
            printf("A média do estudante é: %.2f\n", media);
            break;

        case 2:
            printf("Digite a média do estudante: ");
            scanf("%f", &media);

            if (media >= 7) {
                printf("Status: Aprovado\n");
            } else if (media >= 5) {
                printf("Status: Recuperação\n");
            } else {
                printf("Status: Reprovado\n");
            }
            break;

        case 3:
            printf("Saindo...\n");
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    return 0;
}