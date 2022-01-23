#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int a, b, c, K, N;
	float x, y, z, S, P;

	printf("Задание 1\n"); //
	//
	printf("Введите А ");
	scanf_s("%d", &a);
	printf("Введите B (>A) ");
	do {
		scanf_s("%d", &b);
	} while (b <= a);
	printf("Числа в промежутке:\n");
	while (b >= a) {
		c = b;
		while (c > 0) {
			printf("%d ", b);
			c--;
		}
		b--;
		printf("\n");
	}

	printf("Задание 2\n"); //
	//
	printf("Введите А ");
	do {
		scanf_s("%f", &x);
	} while (x <= 0);
	printf("Введите B (<A) ");
	do {
		scanf_s("%f", &y);
	} while ((y >= x) || (y <= 0));
	z = x - y;
	while (z >= y) {
		z = z - y;
	}
	printf("Ответ: %f\n", z);

	printf("Задание 3\n"); //
	//
	printf("Введите N (>1) ");
	do {
		scanf_s("%d", &N);
	} while (N < 2);
	K = 1;
	b = 1;
	while (b < N) {
		K++;
		b = b + K;
	}
	printf("Ответ:\n Число - %d\n Сумма - %d\n", K, b);

	printf("Задание 4\n"); //
	//
	printf("Введите P (0 < P < 25) ");
	do {
		scanf_s("%f", &P);
	} while ((P <= 0) || (P >= 25));
	S = 1000;
	K = 0;
	P = P / 100;
	while (S <= 1100) {
		K++;
		S = S + (S * P);
	}
	printf("Ответ:\n Месяцев - %d\n Итоговый размер - %f\n", K, S);

	printf("Задание 5\n");//
	//
	printf("Введите А ");
	do {
		scanf_s("%d", &a);
	} while (a < 1);
	printf("Введите B ");
	do {
		scanf_s("%d", &b);
	} while (a < 1);
	while ((a != 0) && (b != 0)) {
		if (a > b) {
			a = a % b;
		}
		else b = b % a;
	}
	printf("Ответ: %d\n", (a + b));

	printf("Задание 6\n");//
	//
	printf("Введите N (>1) ");
	do {
		scanf_s("%d", &N);
	} while (N < 2);
	a = 0;
	b = 1;
	c = 1;
	K = 2;
	while (a < N) {
		a = c + b;
		c = b;
		b = a;
		K++;
	}
	if (a == N) {
		printf("Порядковый номер - %d", K);
	}
	else printf("N не является числом Фибоначчи");

}