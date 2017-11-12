#include <stdio.h>

int winner=0;

int test (int i, int ing) {
  scanf("%d", &ing);
  if (ing==i) {
    winner=ing;
  }
  return(winner);
}

main () {
  int n=1, i, ing, cont=1;
  while (n!=0){
    scanf("%d", &n);
    for (i=1; i<=n; i++) {
      test(i, ing);
    }
    if (n!=0){
    printf("Teste %d\n%d\n", cont, winner);
    }
    cont++;
  }
}