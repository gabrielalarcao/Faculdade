#include <stdio.h>

main () {
	int a[10][3];
	int l, c, n1=0, n2=0, n3=0;

	for (l=0; l<10; l++) {
		printf("Digite as notas do aluno %d\n", l+1);
		for (c=0; c<3; c++) {
			scanf("%d", &a[l][c]);
		}
	}

	for (l=0; l<10; l++) {
		if (a[l][0]<a[l][1] && a[l][0]<a[l][2])
			n1++;
		else if (a[l][1]<a[l][0] && a[l][1]<a[l][2])
			n2++;
		else if (a[l][2]<a[l][0] && a[l][2]<a[l][1])
			n3++;
	}

	printf("\n\n");
	printf("Quantidade de alunos com a pior nota na prova 1: %d\n", n1);
	printf("Quantidade de alunos com a pior nota na prova 2: %d\n", n2);
	printf("Quantidade de alunos com a pior nota na prova 3: %d\n", n2);

}