#include <stdio.h>
#include <math.h>

int main(void) {
double A, B, C, DELTA, TOTAL1, TOTAL2;
printf("Digite primeiro termo: ");
scanf("%lf", &A);
printf("Digite segundo termo: ");
scanf("%lf", &B);
printf("Digite terceiro termo: ");
scanf("%lf", &C);
DELTA = pow(B ,2) - 4*A*C;
TOTAL1 = (-B + sqrt(DELTA)) / 2*A;
TOTAL2 = (-B - sqrt(DELTA)) / 2*A;
if(DELTA > 0) {
printf("Resultado 1 = %lf\n", TOTAL1);
printf("            = %lf\n", TOTAL2);
} else {
	printf("Erro, Delta menor que 0\n");
return 0;
}
}