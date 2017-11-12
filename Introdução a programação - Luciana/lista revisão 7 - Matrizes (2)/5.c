#include <stdio.h>

main () {
	int a[6][4];
	int l, c, cont=0;

	for (l=0; l<6; l++) {
		printf("Digite os numeros da %d linha da matriz:\n", l+1);
		for (c=0; c<4; c++) {
			scanf("%d", &a[l][c]);
		}
	}

	for (l=0; l<6; l++) {
		for (c=0; c<4; c++) {
			if (a[l][c]>30)
				cont++;
		}
	}

	printf("\n\nA matriz possui %d numeros maiores que 30.\n", cont);

	for (l=0; l<6; l++) {
		for (c=0; c<4; c++) {
			if (a[l][c]!=30)
				printf("%d  ", a[l][c]);
			else
				printf("0  ");
		}
		printf("\n");
	}

}