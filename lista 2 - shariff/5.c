#include <stdio.h>

float interceptox (float a, float b) {
	float y;
	y=b;
	return(y);
}

float interceptoy (float a, float b) {
	float x;
	x=(-b)/a;
	return(x);
}

main () {
	float a, b;
	int i, n;
	scanf("%d", &n);
	for (i=0; i<n; i++) {
		scanf("%f %f", &a, &b);
		printf("Intercepto em x: (%.2f, 0.00)\n", interceptoy(a,b));
		printf("Intercepto em y: (0.00, %.2f)\n", interceptox(a,b));
	}
}