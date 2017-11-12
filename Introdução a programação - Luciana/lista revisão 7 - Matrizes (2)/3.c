#include <stdio.h>

main () {
	int a[10][20], soma[10];
	int l, c;

	for (l=0; l<10; l++) {
		printf("Digite os valores da %d linha:\n", l+1);
		for (c=0; c<20; c++) {
			scanf("%d", &a[l][c]);
		}
	}

	for (l=0; l<10; l++) {
		soma[l]=0;
	}

	for (l=0; l<10; l++) {
		for (c=0; c<20; c++) {
			soma[l] += a[l][c];
		}
	}

	for (l=0; l<10; l++) {
		for (c=0; c<20; c++) {
			a[l][c]*=soma[l];
		}
	}

	printf("\n\nMatriz resultante:\n\n");

	for (l=0; l<10; l++) {
		for (c=0; c<20; c++) {
			printf("%d  ", a[l][c]);;
		}
		printf("\n");
	}

}