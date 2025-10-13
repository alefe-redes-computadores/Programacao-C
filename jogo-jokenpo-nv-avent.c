#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhaJogador, escolhaComputador;

    srand(time(0));  // inicializa o gerador de números aleatórios

    printf("## Jogo de Jokenpô ##\n");
    printf("Escolha uma opção:\n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");
    printf("Escolha: ");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand() % 3 + 1;

    // Mostra a escolha do jogador
    switch (escolhaJogador) {
        case 1:
            printf("Jogador: Pedra\n");
            break;
        case 2:
            printf("Jogador: Papel\n");
            break;
        case 3:
            printf("Jogador: Tesoura\n");
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    // Mostra a escolha do computador
    switch (escolhaComputador) {
        case 1:
            printf("Computador: Pedra\n");
            break;
        case 2:
            printf("Computador: Papel\n");
            break;
        case 3:
            printf("Computador: Tesoura\n");
            break;
    }

    // Resultado do jogo
    if (escolhaJogador == escolhaComputador) {
        printf("### Jogo empatou! ###\n");
    } 
    else if (
        ((escolhaJogador == 1) && (escolhaComputador == 3)) ||
        ((escolhaJogador == 2) && (escolhaComputador == 1)) ||
        ((escolhaJogador == 3) && (escolhaComputador == 2))
    ) {
        printf("### Parabéns, você ganhou! ###\n");
    } 
    else {
        printf("### Você perdeu! ###\n");
    }

    return 0;
}