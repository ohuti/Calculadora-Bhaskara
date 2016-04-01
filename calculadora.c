#include <stdio.h>

int main(void) {
double A, B, C, TOTAL1, TOTAL2;
scanf("%lf", &A);
scanf("%lf", &B);
scanf("%lf", &C);
TOTAL1 = (-B + (B^2 - 4*A*C)^0.5) / 2*A;
TOTAL2 = (-B - (B^2 - 4*A*C)^0.5) / 2*A;
printf("Resultado 1 = %lf\n", TOTAL1);
printf("            = %lf\n", TOTAL2);
return 0;
}