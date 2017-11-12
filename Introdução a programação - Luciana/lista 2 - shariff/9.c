#include <stdio.h>

int e_triangulo (float a, float b, float c) {
	int t=0;
	if (a>b && a>c && b>c) {
		if ((b-c)<a && a<(b+c) && (a-c)<b && b<(a+c) && (a-b)<c && c<(a+b)) {
			t++;
		}
	}else if (a>b && a>c && c>b) {
		if ((b-c)<a && a<(b+c) && (a-c)<b && b<(a+c) && (a-b)<c && c<(a+b)) {
			t++;
		}
	}else if (b>a && b>c && a>c) {
		if ((b-c)<a && a<(b+c) && (a-c)<b && b<(a+c) && (a-b)<c && c<(a+b)) {
			t++;
		}
	}else if (b>a && b>c && c>a) {
		if ((b-c)<a && a<(b+c) && (a-c)<b && b<(a+c) && (a-b)<c && c<(a+b)) {
			t++;
		}
	}else if (c>a && c>b && a>b) {
		if ((b-c)<a && a<(b+c) && (a-c)<b && b<(a+c) && (a-b)<c && c<(a+b)) {
			t++;
		}
	}else if (c>a && c>b && b>a) {
		if ((b-c)<a && a<(b+c) && (a-c)<b && b<(a+c) && (a-b)<c && c<(a+b)) {
			t++;
		}
	}
	return(t);
}

main () {
	float a, b, c, peri, area;
	scanf("%f %f %f", &a, &b, &c);
	if (e_triangulo(a, b, c)==1) {
		peri=a+b+c;
		printf("Perimetro = %.2f\n", peri);
	}else {
		area=((a+b)*c)/2;
		printf("Area = %.2f\n", area);
	}
}