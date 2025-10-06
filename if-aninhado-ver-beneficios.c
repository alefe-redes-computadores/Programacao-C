#include <stdio.h>

int main () {
    int idade, dependentes;
    float renda;

    printf("Digite sua idade: \n");
    scanf("%d",&idade);

    printf("Digite sua renda mensal em R$: \n");
    scanf("%f",&renda);

    printf("Digite o número de dependentes: \n");
    scanf("%d",&dependentes);

    if (idade >= 18 && idade <= 65) {
        if (renda < 3000) {
            if (dependentes > 2) {
                printf("Você está qualificado para os benefícios\n");
            } else {
                printf("Você não está qualificado, devido ao número de dependentes\n");
            }
        } else {
            printf("Você não está qualificado devido à renda\n");
        }
    } else {
        printf("Você não está qualificado devido à idade\n");
    }

    return 0;
}