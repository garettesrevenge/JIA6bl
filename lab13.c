#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Rus");
	float x, y, z;
	int N,a,b,c,d;

	printf("������� 1\n"); //

	printf("������� ���� ");
	scanf_s("%f", &x);
	y = 1;
	printf("�����:\n");
	do{
		printf("���� ������� �� %f �� - %f ������\n", y, (x * y));
		y = y - 0.1;
	} while (y >0);

	printf("������� 2\n"); //

	printf("������� N (>0) ");
	scanf_s("%d", &N);
	N = N - 1;
	x = 1.1;
	for (N ;N > 0;N--) {
		y = x * (x + 0.1);
		x = x + 0.1;
	}
	printf("����� - %f\n", y);

	printf("������� 3\n"); //

	printf("������� N (>0) ");
	scanf_s("%d", &N);
	a = 2 * N - 1;
	b = 1;
	c = 1;
	printf("���������� �����:\n");
	while (N>1.1) {
		b = b + 2;
		c = c + b;
		N--;
		printf("%d\n", c);
	} 

	printf("������� 4\n"); //

	printf("������� A ");
	scanf_s("%f", &x);
	printf("������� N (>0) ");
	scanf_s("%d", &N);
	y = 1;
	while (N > 0) {
		y = y + x;
		x = x * x;
		N--;
	}
	printf("�����: %f\n", y);

	printf("������� 5\n"); //

	printf("������� A ");
	scanf_s("%f", &x);
	printf("������� N (>0) ");
	scanf_s("%d", &N);
	y = 1;
	while (N > 0) {
		y = y - x;
		x = -(x * x);
		N--;
	}
	printf("�����: %f\n", y);
}