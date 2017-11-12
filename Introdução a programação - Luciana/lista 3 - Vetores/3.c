#include <stdio.h>

main () {
  int v[5000], n, i;
  scanf("%d", &n);
  for (i=0; i<n; i++) {
    scanf("%d", &v[i]);
  }
  n--;
  for (i=n; i>=0; i--) {
    printf("%d ", v[i]);
  }
}