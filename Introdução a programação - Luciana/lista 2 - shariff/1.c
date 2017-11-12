#include <stdio.h>

float soma=0;

double le_numero () {
  float n;
  scanf("%f", &n);
  soma=soma+n;
  return(soma);
}

int main () {
  int i, cont=0;
  float media;
  scanf("%d", &i);
  while (cont<i) {
    le_numero();
    cont++;
  }
  
  media=soma/i;
  printf("%.2f", media);
}