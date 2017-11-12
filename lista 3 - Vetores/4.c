#include <stdio.h>

main () {
  int v[5000], i, n;
  scanf("%d", &n);
  for (i=0; i<n; i++) {
    scanf("%d", &v[i]);
  }
  for (i=0; i<n; i++) {
    printf("%d ", v[i]);
  }
}