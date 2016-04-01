#include <stdio.h>
#include <math.h>

int main(void) {
int A, B, C;
double DELTA, TOTAL1, TOTAL2;
printf("Digite primeiro termo: ");
scanf("%d", &A);
if(A == 0){
	A=1;
}
printf("Digite segundo termo: ");
scanf("%d", &B);
printf("Digite terceiro termo: ");
scanf("%d", &C);
DELTA = pow(B ,2) - 4*A*C;
TOTAL1 = (-B + sqrt(DELTA)) / 2*A;
TOTAL2 = (-B - sqrt(DELTA)) / 2*A;
if(DELTA > 0) {
printf("X1 = %.2f\n", TOTAL1);
printf("X2 = %.2f\n", TOTAL2);
} else {
	printf("Erro, Delta menor que ZERO\n");
return 0;
}
}