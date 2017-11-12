#include <stdio.h>

int n100, n50, n10, n1, valor;

int nota100 () {
  n100=valor/100;
  return(n100);
}

int nota50 () {
  n50=(valor%100)/50;
  return(n50);
}

int nota10 () {
  n10=((valor%100)%50)/10;
  return(n10);
}

int nota1() {
  n1=(((valor%100)%50)%10)/1;
  return(n1);
}

int main () {
  scanf("%d", &valor);
  printf("NOTAS DE 100 = %d\nNOTAS DE 50 = %d\nNOTAS DE 10 = %d\nMOEDAS DE 1 = %d", nota100(), nota50(), nota10(), nota1());
}