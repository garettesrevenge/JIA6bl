#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
	int a, b, c, K, N;
	float x, y, z, S, P;

	printf("������� 1\n"); //
	//
	printf("������� � ");
	scanf_s("%d", &a);
	printf("������� B (>A) ");
	do {
		scanf_s("%d", &b);
	} while (b <= a);
	printf("����� � ����������:\n");
	while (b >= a) {
		c = b;
		while (c > 0) {
			printf("%d ", b);
			c--;
		}
		b--;
		printf("\n");
	}

	printf("������� 2\n"); //
	//
	printf("������� � ");
	do {
		scanf_s("%f", &x);
	} while (x <= 0);
	printf("������� B (<A) ");
	do {
		scanf_s("%f", &y);
	} while ((y >= x) || (y <= 0));
	z = x - y;
	while (z >= y) {
		z = z - y;
	}
	printf("�����: %f\n", z);

	printf("������� 3\n"); //
	//
	printf("������� N (>1) ");
	do {
		scanf_s("%d", &N);
	} while (N < 2);
	K = 1;
	b = 1;
	while (b < N) {
		K++;
		b = b + K;
	}
	printf("�����:\n ����� - %d\n ����� - %d\n", K, b);

	printf("������� 4\n"); //
	//
	printf("������� P (0 < P < 25) ");
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
	printf("�����:\n ������� - %d\n �������� ������ - %f\n", K, S);

	printf("������� 5\n");//
	//
	printf("������� � ");
	do {
		scanf_s("%d", &a);
	} while (a < 1);
	printf("������� B ");
	do {
		scanf_s("%d", &b);
	} while (a < 1);
	while ((a != 0) && (b != 0)) {
		if (a > b) {
			a = a % b;
		}
		else b = b % a;
	}
	printf("�����: %d\n", (a + b));

	printf("������� 6\n");//
	//
	printf("������� N (>1) ");
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
		printf("���������� ����� - %d", K);
	}
	else printf("N �� �������� ������ ���������");

}