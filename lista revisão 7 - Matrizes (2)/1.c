#include <stdio.h>

main () {
	int a[3][3];
	int l, c, maior;

	for (l=0; l<3; l++) {
		printf("Digite a %d linha da matriz:\n", l+1);
		for (c=0; c<3; c++) {
			scanf("%d", &a[l][c]);
		}
	}

	maior=a[0][0];

	for (l=0; l<3; l++) {
		for (c=0; c<3; c++) {
			if (maior<a[l][c])
				maior=a[l][c];
		}
	}

	for (l=0; l<3; l++) {
		for (c=0; c<3; c++) {
			a[l][c]=a[l][c]*maior;
		}
	}

	printf("\n\n");
	printf("Matriz %d x %d:\n", l-1, c-1);

	for (l=0; l<3; l++) {
		for (c=0; c<3; c++) {
			printf("%d  ", a[l][c]);
		}
		printf("\n");
	}

}