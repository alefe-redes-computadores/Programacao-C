#include <stdio.h>
int main () {
    int nota;
    printf("Digite sua Nota: \n");
    scanf("%d", &nota);
    if (nota >= 90) {
      printf("Sua nota é A!\n");
    } else if (nota < 90 && nota >= 80) {
      printf("Sua nota é B!\n");
    } else if (nota < 80 && nota >= 70) {
      printf("Sua nota é C!\n");
    } else if (nota < 70 && nota >= 60) {
      printf("Sua nota é D!\n");
    } else {
      printf("Sua nota é E!\n");
    }
   return 0;
} 