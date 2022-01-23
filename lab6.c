#include <stdio.h>
int main() {
	float a, b, c, temp, temp2, x, y, A;
	printf("Zadanie 1\n"); // Задание 1
	a = 1;
	b = 2;
	temp = a;
	a = b;
	b = temp;
	printf("A = ");
	printf("%f\n", a);
	printf("B = ");
	printf("%f\n", b);
	printf("Zadanie 2\n"); // Задание 2
	a = 1;
	b = 2;
	c = 3;
	temp = a;
	a = c;
	c = b;
	b = temp;
	printf("A = ");
	printf("%f\n", a);
	printf("B = ");
	printf("%f\n", b);
	printf("C = ");
	printf("%f\n", c);
	printf("Zadanie 3\n"); // Задание 3
	a = 1;
	b = 2;
	c = 3;
	temp = a;
	a = b;
	b = c;
	c = temp;
	printf("A = ");
	printf("%f\n", a);
	printf("B = ");
	printf("%f\n", b);
	printf("C = ");
	printf("%f\n", c);
	printf("Zadanie 4\n"); // Задание 4
	x = 3;
	temp = x * x;
	y = 3 * temp * temp * temp  - 6 * temp - 7;
	printf("y = ");
	printf("%f\n", y);
	printf("Zadanie 5\n"); // Задание 5
	x = 4;
	temp = (x - 3) * (x - 3) * (x - 3);
	y = 4 * temp * temp - 7 * temp + 2;
	printf("y = ");
	printf("%f\n", y);
	printf("Zadanie 6\n"); // Задание 6
	a = 2;
	temp = a * a;
	A = temp * temp * temp * temp;
	printf("A = ");
	printf("%f\n", A);
	printf("Zadanie 7\n");
	a = 2;
	temp = a * a;
	temp2 = a * a * a;
	A = temp2 * temp2 * temp2 * temp * temp * temp;
	printf("A = ");
	printf("%f\n", A);
}