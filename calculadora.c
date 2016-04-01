#include <stdio.h>

int main(void) {
double A, B, C, TOTAL1, TOTAL2;
printf("Digite primeiro termo: ");
scanf("%lf", &A);
printf("Digite segundo termo: ");
scanf("%lf", &B);
printf("Digite terceiro termo: ");
scanf("%lf", &C);
TOTAL1 = (-B + (B*B - 4*A*C)^0.5) / 2*A;
TOTAL2 = (-B - (B*B - 4*A*C)^0.5) / 2*A;
printf("Resultado 1 = %lf\n", TOTAL1);
printf("            = %lf\n", TOTAL2);
return 0;
}