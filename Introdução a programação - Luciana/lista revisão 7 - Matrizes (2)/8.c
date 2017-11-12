#include <stdio.h>

main () {
	float a[4][5], m_vend[5], vend_s[4], total=0;
	int l, c;

	for (l=0; l<4; l++) {
		for (c=0; c<5; c++) {
			printf("Digite o valor das vendas do vendedor %d na semana %d:\n", c+1, l+1);
			scanf("%f", &a[l][c]);
		}
	}

	for (l=0; l<5; l++) {
		m_vend[l]=0;
	}

	for (c=0; c<5; c++) {
		for (l=0; l<4; l++) {
			m_vend[c]+=a[l][c];
		}
	}

	for (c=0; c<4; c++) {
		vend_s[c]=0;
	}

	for (l=0; l<4; l++) {
		for (c=0; c<5; c++) {
			vend_s[l]+=a[l][c];
		}
	}

	for (l=0; l<4; l++) {
		for (c=0; c<5; c++) {
			total+=a[l][c];
		}
	}

	printf("\n\n");

	for (l=0; l<5; l++) {
		printf("O vendedor %d vendeu %.2f no mes.\n", l+1, m_vend[l]);
	}

	printf("\n");

	for (l=0; l<4; l++) {
		printf("Foram vendidos %.2f na semana %d.\n", vend_s[l], l+1);
	}

	printf("\nO total vendido no mes foi de %.2f.\n", total);

}