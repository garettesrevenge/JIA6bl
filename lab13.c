#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
	float x, y, z;
	int N,a,b,c,d;

	printf("Задание 1\n"); //

	printf("Введите Цену ");
	scanf_s("%f", &x);
	y = 1;
	printf("Ответ:\n");
	do{
		printf("Цена конфент за %f кг - %f Рублей\n", y, (x * y));
		y = y - 0.1;
	} while (y >0);

	printf("Задание 2\n"); //

	printf("Введите N (>0) ");
	scanf_s("%d", &N);
	N = N - 1;
	x = 1.1;
	for (N ;N > 0;N--) {
		y = x * (x + 0.1);
		x = x + 0.1;
	}
	printf("Ответ - %f\n", y);

	printf("Задание 3\n"); //

	printf("Введите N (>0) ");
	scanf_s("%d", &N);
	a = 2 * N - 1;
	b = 1;
	c = 1;
	printf("Полученные суммы:\n");
	while (N>1.1) {
		b = b + 2;
		c = c + b;
		N--;
		printf("%d\n", c);
	} 

	printf("Задание 4\n"); //

	printf("Введите A ");
	scanf_s("%f", &x);
	printf("Введите N (>0) ");
	scanf_s("%d", &N);
	y = 1;
	while (N > 0) {
		y = y + x;
		x = x * x;
		N--;
	}
	printf("Ответ: %f\n", y);

	printf("Задание 5\n"); //

	printf("Введите A ");
	scanf_s("%f", &x);
	printf("Введите N (>0) ");
	scanf_s("%d", &N);
	y = 1;
	while (N > 0) {
		y = y - x;
		x = -(x * x);
		N--;
	}
	printf("Ответ: %f\n", y);
}