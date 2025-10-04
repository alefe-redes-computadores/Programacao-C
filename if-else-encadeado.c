#include <stdio.h>
int main () {
    int idade;
    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    if (idade > 60) {
       printf("Você é idoso!\n");
    } else if (idade >= 18 && idade < 60) {
       printf("Você é adulto!\n");
    }  else if (idade < 18 && idade >= 12) {
       printf("Você é Adolescente!\n");
    }  else {
       printf("Você é Criança!\n");
    }
   return 0;
} 