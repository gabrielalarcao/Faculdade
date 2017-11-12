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
	int n;
	scanf("%d", &n);
	printf("\n", inverte(n));
}