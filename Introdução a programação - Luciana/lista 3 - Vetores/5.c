#include <stdio.h>

main () {
  int v[10000], i, n=1, maior, k;
  while (n!=0) {
    scanf("%d", &n);
    if (n!=0) {
    for (i=0 ; i<n; i++) {
      scanf("%d", &v[i]);
    }
    maior=v[0];
    for (i=0; i<n; i++) {
      if (v[i]>=maior) {
        maior=v[i];
        k=i;
      }
    }
    printf("%d %d\n", k, maior);
    }
  }
}