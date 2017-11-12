#include <stdio.h>

int inverte(int n) {
	int n1, n2, n3, num;
	n1=n/100;
	n2=(n/10)%10;
	n3=n%100;
	num=(n1*100)+(n2*10)+n3;
	return(num);
}

main () {
	int n, a, b, a1, b1, i;
	scanf("%d", &n);
	for (i=0; i<n; i++) {
		scanf("%d %d", &a, &b);
		a1=inverte(a);
		b1=inverte(b);
		if (a1>b1) {
			printf("%d\n", a1);
		}else {
			printf("%d\n", b1);
		}
	}
}