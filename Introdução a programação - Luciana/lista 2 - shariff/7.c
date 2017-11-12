#include <stdio.h>
#include <math.h>

float a, b, c;

float delta () {
  float d;
  d=(b*b)-(4*a*c);
  return (d);
}

float raiz1 () {
  float x1;
  x1=-b/2;
  return(x1);
}

float raiz2 (float d) {
  float x1, x2;
  x1=(-b+sqrt(d))/(2*a);
  x2=(-b-sqrt(d))/(2*a);
  return(x1);
  return(x2);
}

main () {
  float d, x1, x2;
  scanf("%f %f %f", &a, &b, &c);
  d=delta();
  if (d<0) {
    printf("RAIZES IMAGINARIAS");
  }else if (d==0) {
    printf("RAIZ UNICA\nX1 = %2.f", raiz1());
  }else
    printf("RAIZES DISTINTAS\nX1 = %.2f\nX2 = %.2f", raiz2(d));
}