
#include <stdio.h>

int main() {

float n1;
float n2;

printf("escolha um numero para ser usado na equaçao a segui:\n");
scanf("%f", &n1);

printf("agora escolha o outro numero:\n");
scanf("%f", &n2);

float soma = (float)n1+n2;
float subtracao = (float)n1-n2;
float divisao = (float)n1/n2;
float multiplicacao = (float)n1*n2;


printf("agora vamos calcular\n");
printf("a soma dos valores e:%.2f\n",soma);
printf("a subtraçao dos valores e:%.2f\n",subtracao);
printf("a divisao dos valores e:%.2f\n",divisao);
printf("a multiplicaçao dos valores e:%.2f\n",multiplicacao);


return 0;











 }