#include <stdio.h>
#include <math.h>

int main(void) {
double A, B, C, TOTAL1, TOTAL2;
printf("Digite primeiro termo: ");
scanf("%lf", &A);
printf("\n Digite segundo termo: ");
scanf("%lf", &B);
printf("\n Digite terceiro termo: ");
scanf("%lf", &C);
TOTAL1 = (-B + sqrt(pow(B, 2) - 4*A*C)) / 2*A;
TOTAL2 = (-B - sqrt(pow(B, 2) - 4*A*C))/ 2*A;
printf("Resultado 1 = %lf\n", TOTAL1);
printf("            = %lf\n", TOTAL2);
return 0;
}