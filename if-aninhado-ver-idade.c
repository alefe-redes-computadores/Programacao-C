#include <stdio.h>

int main () {
    int idade;
    float renda;
    printf("Digite Sua Idade: \n");
    scanf("%d",&idade);
    printf("Digite Sua Renda Mensal em R$\n");
    scanf("%f",&renda);
    if (idade > 60 || idade < 18) {
       if (renda < 2000) {
           printf("Sua idade é %d, e renda %.2f, Portanto tem direito ao desconto\n",idade,renda);
       } else {
           printf("Você não está qualificado ao desconto,  devido sua renda ser de %.2f\n",renda);
       }
    } else if (idade > 18 && renda > 2000){
       printf ("Você não está qualificado, devido sua idade ser %d\n, e sua renda %.2f",idade,renda);
    } else if ( idade < 18 && renda > 2000) {
       printf ("Você não está qualificado devido sua renda\n");
    } else if (idade > 18 && renda < 2000) {
       printf("Você não está qualificado, devido sua idade\n");
    }  

  return 0;
}