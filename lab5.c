#include <stdio.h>
#include <math.h>
int main() {
	float x1, x2, x3, y1, y2, y3, rast, ac, bc, sm, diag, a, b, c, S, P, p;
	printf("Zadanie 1\n"); // Задание 1
	scanf_s("%f", &x1);
	scanf_s("%f", &y1);
	scanf_s("%f", &x2);
	scanf_s("%f", &y2);
	rast = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	printf("Rasstoyanie = ");
	printf("%f\n", rast);
	printf("Zadanie 2\n"); // Задание 2
	scanf_s("%f", &x1);
	scanf_s("%f", &x2);
	scanf_s("%f", &x3);
	ac = x3 - x1;
	bc = x3 - x2;
	sm = ac + bc;
	printf("AC = ");
	printf("%f\n", ac);
	printf("BC = ");
	printf("%f\n", bc);
	printf("Summa = ");
	printf("%f\n", sm);
	printf("Zadanie 3\n"); // Задание 3
	scanf_s("%f", &x1);
	scanf_s("%f", &x2);
	scanf_s("%f", &x3);
	ac = x2 - x1;
	bc = x3 - x2;
	sm = ac + bc;
	printf("AC = ");
	printf("%f\n", ac);
	printf("BC = ");
	printf("%f\n", bc);
	printf("Summa = ");
	printf("%f\n", sm);
	printf("Zadanie 4\n"); // Задание 4
	scanf_s("%f", &x1);
	scanf_s("%f", &y1);
	scanf_s("%f", &x2);
	scanf_s("%f", &y2);
	a = x2 - x1;
	b = y2 - y1;
	S = a * b;
	P = (a + b) * 2;
	printf("Ploshad' = ");
	printf("%f\n", S);
	printf("Perimetr = ");
	printf("%f\n", P);
	printf("Zadanie 5\n"); // Задание 5
	scanf_s("%f", &x1);
	scanf_s("%f", &y1);
	scanf_s("%f", &x2);
	scanf_s("%f", &y2);
	scanf_s("%f", &x3);
	scanf_s("%f", &y3);
	a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	P = a + b + c;
	p = P / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("Ploshad' = ");
	printf("%f\n", S);
	printf("Perimetr = ");
	printf("%f\n", P);
}