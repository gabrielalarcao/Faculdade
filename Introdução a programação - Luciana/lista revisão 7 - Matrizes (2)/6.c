#include <stdio.h>

main () {
	int a[10][10], aux[10], dp[10], ds[10], aux1[10];
	int l, c;

	for (l=0; l<10; l++) {
		printf("Digite os numeros da %d linha da matriz:\n", l+1);
		for (c=0; c<10; c++) {
			scanf("%d", &a[l][c]);
		}
	}

	for (c=0; c<10; c++) {
		aux[c]=a[1][c];
		a[1][c]=a[7][c];
		a[7][c]=aux[c];
	}

	for (l=0; l<10; l++) {
		aux[l]=a[l][3];
		a[l][3]=a[l][9];
		a[l][9]=aux[l];
	}

	for (l=0; l<10; l++) {
		for (c=0; c<10; c++) {
			if (l=c) {
				dp[l]=a[l][c];
			}
		}
	}

	for (l=0; l<10; l++) {
		for (c=0; c<10; c++) {
			if (l+c==9) {
				ds[l]=a[l][c];
			}
		}
	}

	for (l=0; l<10; l++) {
		for (c=0; c<10; c++) {
			if (l==c) {
				a[l][c]=ds[l];
			}
		}
	}

	for (l=0; l<10; l++) {
		for (c=0; c<10; c++) {
			if (l+c==9) {
				a[l][c]=dp[l];
			}
		}
	}

	for (c=0; c<10; c++) {
		aux[c]=a[4][c];
	}

	for (l=0; l<10; l++) {
		aux1[l]=a[l][9];
	}

	for (l=0; l<10; l++) {
		for (c=0; c<10; c++) {
			if (l==4) {
				a[l][c]=aux1[c];
			}
		}
	}

	for (l=0; l<10; l++) {
		for (c=0; c<10; c++) {
			if (c==9) {
				a[l][c]=aux[l];
			}
		}
	}

	printf("\n\n");

	for (l=0; l<10; l++) {
		for (c=0; c<10; c++) {
			printf("%d  ", a[l][c]);
		}
		printf("\n");
	}

}