#include <stdio.h>

main () {
  int v[5000], i, n, soma=0;
  scanf("%d", &n);
  for (i=0; i<n; i++) {
    scanf("%d", &v[i]);
  }
  for (i=0; i<n; i++) {
    soma=soma+v[i];
  }
  printf("%d", soma);
}