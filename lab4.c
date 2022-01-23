#include <stdio.h>
int main() {
	float a, b, d, L, P, S, sm, rz, pr, ch, Pi = 3.14, Sr;
	printf("Zadanie 1\n"); // задание 1
	printf("Vvedite a - ");
	scanf_s("%f", &a);
	printf("Vvedite b - ");
	scanf_s("%f", &b);
	P = (a + b) / 2;
	S = a * b;
	printf("Ploshad' = ");
	printf("%f\n", S);
	printf("Perimetr = ");
	printf("%f\n", P);
	printf("Zadanie 2\n");  // задание 2
	printf("Vvedite d - ");
	scanf_s("%f", &d);
	L = d * Pi;
	printf("Dlina = ");
	printf("%f\n", L);
	printf("Zadanie 3\n");    // задание 3
	printf("Vvedite a - ");
	scanf_s("%f", &a);
	printf("Vvedite b - ");
	scanf_s("%f", &b);
	Sr = (a + b) / 2;
	printf("Srednie = ");
	printf("%f\n", Sr);
	printf("Zadanie 4\n");    // задание 4
	printf("Vvedite a - ");
	scanf_s("%f", &a);
	printf("Vvedite b - ");
	scanf_s("%f", &b);
	sm = a + b;
	if (a >= b) {
		rz = a - b;
	}
	else rz = b - a;
	pr = a * b;
	if (a >= b) {
		ch = a / b;
	}
	else ch = b / a;
	printf("Summa = ");
	printf("%f\n", sm);
	printf("Raznost' = ");
	printf("%f\n", rz);
	printf("Proizvedenie = ");
	printf("%f\n", pr);
	printf("Chastnoe = ");
	printf("%f\n", ch);
	printf("Zadanie 5\n");    // задание 5
	printf("Vvedite a - ");
	scanf_s("%f", &a);
	if (a < 0) {
		a = -a;
	}
	printf("Vvedite b - ");
	scanf_s("%f", &b);
	if (b < 0) {
		b = -b;
	}
	sm = a + b;
	if (a >= b) {
		rz = a - b;
	}
	else rz = b - a;
	pr = a * b;
	if (a >= b) {
		ch = a / b;
	}
	else ch = b / a;
	printf("Summa = ");
	printf("%f\n", sm);
	printf("Raznost' = ");
	printf("%f\n", rz);
	printf("Proizvedenie = ");
	printf("%f\n", pr);
	printf("Chastnoe = ");
	printf("%f\n", ch);
}