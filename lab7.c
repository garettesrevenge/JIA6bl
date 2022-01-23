#include <stdio.h>
int main() {
	float a, Pi = 3.14, x, y, A1, B1, C1, A2, B2, C2, rad, A,B, Y, X, kgodin, kgy, V1,V2,T,S,ST;
	printf("Zadanie 1\n"); // Задание 1
	a = 88;
	rad = a / 180 * Pi;
	printf("Ugol = ");
	printf("%f", rad);
	printf(" Radianov\n");
	printf("Zadanie 2\n"); // Задание 2
	rad = 1.5*Pi;
	a = rad * 180 / Pi;
	printf("Ugol = ");
	printf("%f", a);
	printf(" Gradusov\n");
	printf("Zadanie 3\n"); // Задание 3
	X = 0.7;
	A = 180;
	Y = 2.2;
	kgodin = A / X;
	kgy = kgodin * Y;
	printf("Cena Odin KG = ");
	printf("%f\n", kgodin);
	printf("Cena Y KG =");
	printf("%f\n", kgy);
	printf("Zadanie 4\n"); // Задание 4
	V1 = 60;
	V2 = 80;
	T = 3.5;
	S = 100;
	ST = S + (V1 + V2) * T;
	printf("Rasstoyanie = ");
	printf("%f\n", ST);
	printf("Zadanie 5\n"); // Задание 5
	printf("Vvesti koef A(ne 0) ");
	scanf_s("%f", &A);
	printf("Vvesti koef B ");
	scanf_s("%f", &B);
	x = -B / A;
	printf("X = ");
	printf("%f\n", x);
	printf("Zadanie 6\n"); // Задание 6
	scanf_s("%f", &A1);
	scanf_s("%f", &A2);
	scanf_s("%f", &B1);
	scanf_s("%f", &B2);
	scanf_s("%f", &C1);
	scanf_s("%f", &C2);
	if ((A2 * B1 - A1 * B2) != 0) {
		x = (B1 * C2 - B2 * C1) / (A2 * B1 - A1 * B2);
		y = (A2 * C1 - A1 * C2) / (A2 * B1 - A1 * B2);
		printf("X = ");
		printf("%f\n", x);
		printf("Y = ");
		printf("%f\n", y);
	}
	else printf("Net Resheniya");
}