#include <stdio.h>

main () {
	int a[7][7], maior[7], menor[7];
	int l, c;

	for (l=0; l<7; l++) {
		printf("Digite os numeros da %d linha da matriz:\n", l+1);
		for (c=0; c<7; c++) {
			scanf("%d", &a[l][c]);
		}
	}

	for (l=0; l<7; l++) {
		maior[l]=a[l][0];
	}

	for (c=0; c<7; c++) {
		menor[c]=a[0][c];
	}

	for (l=0; l<7; l++) {
		for (c=0; c<7; c++){
			if (maior[l]<a[l][c]) {
				maior[l]=a[l][c];
			}
		}
	}

	for (c=0; c<7; c++) {
		for (l=0; l<7; l++){
			if (menor[c]>a[l][c]) {
				menor[c]=a[l][c];
			}
		}
	}

	printf("\n\n");

	for (l=0; l<7; l++) {
		for (c=0; c<7; c++) {
			printf("%d  ", a[l][c]);
		}
		printf("\n");
	}

	printf("\n\n");
	printf("Os maiores valores das linhas sao:\n");

	for (l=0; l<7; l++) {
		printf("%d ", maior[l]);
	}

	printf("\nE os menores valores das colunas sao:\n");

	for (l=0; l<7; l++) {
		printf("%d ", menor[l]);
	}

}