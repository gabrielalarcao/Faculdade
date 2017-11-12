#include <stdio.h>

main () {
  int v[1000], n=0, i, k=0, m;
  while (n<1 || n>1000) {
    scanf("%d", &n);
  }
  for (i=0; i<n; i++) {
    scanf("%d", &v[i]);
  }
  scanf("%d", &m);
  for (i=0; i<n; i++) {
    if (v[i]>=m) {
      k++;
    }
  }
  printf("%d", k);
}