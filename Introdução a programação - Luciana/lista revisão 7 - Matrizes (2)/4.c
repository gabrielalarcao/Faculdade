#include <stdio.h>

main () {
	float a[4][7], menor, maior;
	int l, c, ml, mc;

	for (l=0; l<4; l++) {
		printf("Digite os termos da linha %d:\n", l+1);
		for (c=0; c<7; c++) {
			scanf("%f", &a[l][c]);
		}
	}

	menor=a[0][0];
	ml=0;

	for (l=0; l<4; l++) {
		for (c=0; c<7; c++) {
			if (menor>a[l][c]) {
				menor=a[l][c];
				ml=l;
			}
		}
	}

	maior=a[ml][0];
	mc=0;

	for (c=0; c<7; c++) {
		if (maior<a[ml][c]) {
			maior=a[ml][c];
			mc=c;
		}
	}

	printf("\n\nMINMAX se encontra na posicao %dx%d e tem valor de %.2f.\n", ml+1, mc+1, maior);

}