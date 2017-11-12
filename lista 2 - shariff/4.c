#include <stdio.h>

int perf (int n) {
	int i, soma=0;
	for (i=1; i<n; i++) {
		if (n%i==0) {
			soma=soma+i;
		}
	}
	return (soma);
}

int last (int n) {
	int i, x;
	for (i=1; i<n; i++) {
		if (n%i==0){
			x=i;
		}
	}
	return (x);
}

main () {
	int n, div, i;
	scanf("%d", &n);
	printf("%d = ", n);
	for (i=1; i<n; i++) {
		if (n%i==0){
			printf("%d ", i);
			if (i<last(n)) {
                printf("+ ");
			}
		}
	}
	printf("= %d ", perf(n));
	if (perf(n)==n) {
		printf("(NUMERO PERFEITO)");
	}else {
		printf("(NUMERO NAO E PERFEITO)");
	}
}
