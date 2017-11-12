#include <stdio.h>

main () {
  int v[100000], n, i, m, procurar, f, k;
  scanf("%d", &n);
  for (i=0; i<n; i++) {
    scanf("%d", &v[i]);
  }
  scanf("%d", &m);
  for (i=0; i<m; i++) {
    scanf("%d", &procurar);
    k=0;
    for (f=0; f<n; f++) {
      if (procurar==v[f]) {
        k++;
      }
    }
    if (k>0) {
      printf("ACHEI\n");
    }else {
      printf("NAO ACHEI\n");
    }
  }
}