#include <stdio.h>

int main(void) {

  float num=0, i=0, soma=0,media;

  while (num>=0){
 printf("Digite alguns números  (obs: digite um número negativo para parar) :  ");
   scanf("%f",&num);
  
    soma=soma +num;
    i++;
  }
  media = soma/i;
  printf("Media = %f", media);
  
}
