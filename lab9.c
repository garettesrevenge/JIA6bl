#include <stdio.h>
int main() {
	int N, a, b, c, K, x, y;
	printf("Zadanie 1\n"); // ������� 1
	printf("Vvesti N ");
	scanf_s("%d", &N);
	a = N % 60;
	printf("Otvet - ");
	printf("%d\n", a);
	printf("Zadanie 2\n"); // ������� 2
	K = 7; // �������� ����� ���
	a = K % 7;
	printf("Otvet - ");
	printf("%d\n", a); // ��������: 0
	printf("Zadanie 3\n"); // ������� 3
	N = 4; // ���� ������ 1 ������
	K = 4; // ����� ��� ����
	a = (K + N - 1) % 7;
	if (a == 0) {
		a = a + 7;
	}
	printf("Otvet - ");
	printf("%d\n", a); // ��������: 7
	printf("Zadanie 4\n"); // ������� 4
	a = 5; // �������� � �������  �������������� 
	b = 5; // �������� b ������� ��������������
	c = 2; // �������� ������� ���������
	x = (a * b) / (c * c);
	y = (a * b) - x * (c * c);
	printf("Kolvo kvadratov - ");
	printf("%d\n", x);
	printf("Nezanyataya Ploshad' - ");
	printf("%d\n", y);
	printf("Zadanie 5\n"); // ������� 5
	printf("Vvedite nomer goda ");
	scanf_s("%d", &a);
	x = (a - 1) / 100 + 1;
	printf("Stoletie - ");
	printf("%d", x);
}