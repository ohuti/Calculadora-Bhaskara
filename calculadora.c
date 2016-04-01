#include <stdio.h>

int main(void) {
int A, B, C, TOTAL1, TOTAL2;
printf("Adcione o primeiro termo: \n", A);
scanf("%d", &A);
printf("Adcione o segundo termo: \n", B);
scanf("%d", &B);
printf("Adcione o terceiro termo: \n", C);
scanf("%d", &C);
TOTAL1 = (-B + (B^2 - 4*A*C)^0.5) / 2*A;
TOTAL2 = (-B - (B^2 - 4*A*C)^0.5) / 2*A;
printf("Resultado 1 = %d\n", TOTAL1);
printf("            = %d\n", TOTAL2);
return 0;
}