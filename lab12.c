#include <stdio.h>
#include <locale.h> 
#include <math.h>
int main() {
	int a, b, c, d, x, y, N,C;
	setlocale(LC_ALL, "Rus");
	printf("Zadanie 1 1\n"); // ������� 1
	printf("Vvedite Den' ");
	scanf_s("%d", &x);
	printf("Vvedite Mesyac ");
	scanf_s("%d", &y);
	printf("Otvet: ");
	if ((x > 0) && (x < 32) && (y > 0) && (y < 13)) {
		b = x / 10;
		c = x % 100;
		d = x % 10;
		if ((b == 2) && (d != 0)) printf("�������� ");
		if ((b == 2) && (d == 0)) printf("��������� ");
		if ((b == 3) && (d != 0)) printf("�������� ");
		if ((b == 3) && (d == 0)) printf("��������� ");
		if (c == 10) printf("������� ");
		if (c == 11) printf("������������ ");
		if (c == 12) printf("����������� ");
		if (c == 13) printf("����������� ");
		if (c == 14) printf("������������� ");
		if (c == 15) printf("����������� ");
		if (c == 16) printf("������������ ");
		if (c == 17) printf("����������� ");
		if (c == 18) printf("������������� ");
		if (c == 19) printf("������������� ");
		if (d == 1) printf("������ ");
		if (d == 2) printf("������ ");
		if (d == 3) printf("������ ");
		if (d == 4) printf("��������� ");
		if (d == 5) printf("����� ");
		if (d == 6) printf("������ ");
		if (d == 7) printf("������� ");
		if (d == 8) printf("������� ");
		if (d == 9) printf("������� ");
		if (y == 1) printf("������\n");
		if (y == 2) printf("�������\n");
		if (y == 3) printf("�����\n");
		if (y == 4) printf("������\n");
		if (y == 5) printf("���\n");
		if (y == 6) printf("����\n");
		if (y == 7) printf("����\n");
		if (y == 8) printf("�������\n");
		if (y == 9) printf("��������\n");
		if (y == 10) printf("�������\n");
		if (y == 11) printf("������\n");
		if (y == 12) printf("�������\n");
	}
	else printf("Nekorrektnaya data\n");
	printf("Zadanie 2\n"); // ������� 2
	printf("������� N (0 - ���������� ��������, 1 - ������� ������, -1 - ������� �������) ");
	scanf_s("%d", &N);
	printf("������� C (� - 1, � - 2, � - 3, � - 4) ");
	scanf_s("%d", &C);
	printf("Otvet: ");
	if (((C == 3) || (C == 1) || (C == 2) || (C == 4)) && (N > -2) && (N < 2)); {
		if (C == 3) {
			if (N == 1) printf("�� ������\n");
			if (N == 0)printf("�� ��\n");
			if (N == -1)printf("�� �����\n");
		}
		if (C == 4) {
			if (N == 1) printf("�� ��\n");
			if (N == 0)printf("�� �����\n");
			if (N == -1)printf("�� �����\n");
		}
		if (C == 1) {
			if (N == 1) printf("�� �����\n");
			if (N == 0)printf("�� �����\n");
			if (N == -1)printf("�� ������\n");
		}
		if (C == 2) {
			if (N == 1) printf("�� �����\n");
			if (N == 0)printf("�� ������\n");
			if (N == -1)printf("�� ��\n");
		}
	else printf("������������ ������\n");
	}
	printf("Zadanie 3\n"); // ������� 3
	printf("Vvedite 4islo v diapazone 10-40 ");
	do {
		scanf_s("%d", &x);
	} while ((x < 10) || (x > 40));
	b = x / 10;
	c = x % 100;
	d = x % 10;
	printf("Otvet - ");
	if ((b == 2)&&(d!=0)) printf("�������� ");
	if (b == 3) printf("�������� ");
	if (b == 4) printf("����� ");
	if ((d == 0) && (b != 1)) printf("������� �������\n");
	if ((d == 1) && (b != 1)) printf("���� ������� �������\n");
	if ((d == 2) && (b != 1)) printf("��� ������� �������\n");
	if ((d == 3) && (b != 1)) printf("��� ������� �������\n");
	if ((d == 4) && (b != 1)) printf("������ ������� �������\n");
	if ((d == 5) && (b != 1)) printf("���� ������� �������\n");
	if ((d == 6) && (b != 1)) printf("����� ������� �������\n");
	if ((d == 7) && (b != 1)) printf("���� ������� �������\n");
	if ((d == 8) && (b != 1)) printf("������ ������� �������\n");
	if ((d == 9) && (b != 1)) printf("������ ������� �������\n");
	if (c == 10) printf("������ ������� �������\n");
	if (c == 11) printf("����������� ������� �������\n");
	if (c == 12) printf("���������� ������� �������\n");
	if (c == 13) printf("���������� ������� �������\n");
	if (c == 14) printf("������������ ������� �������\n");
	if (c == 15) printf("���������� ������� �������\n");
	if (c == 16) printf("����������� ������� �������\n");
	if (c == 17) printf("���������� ������� �������\n");
	if (c == 18) printf("������������ ������� �������\n");
	if (c == 19) printf("������������ ������� �������\n");
	printf("Zadanie 4\n"); // ������� 4
	printf("Vvedite 4islo v diapazone 100-999 ");
	do {
		scanf_s("%d", &x);
	} while ((x < 100) || (x > 999));
	a = x / 100;
	b = x / 10 % 10;
	c = x % 100;
	d = x % 10;
	printf("Otvet - ");
	if (a == 1) printf("��� ");
	if (a == 2) printf("������ ");
	if (a == 3) printf("������ ");
	if (a == 4) printf("��������� ");
	if (a == 5) printf("������� ");
	if (a == 6) printf("�������� ");
	if (a == 7) printf("������� ");
	if (a == 8) printf("��������� ");
	if (a == 9) printf("��������� ");
	if (c == 11) printf("�����������\n");
	if (c == 12) printf("����������\n");
	if (c == 13) printf("����������\n");
	if (c == 14) printf("������������\n");
	if (c == 15) printf("����������\n");
	if (c == 16) printf("�����������\n");
	if (c == 17) printf("����������\n");
	if (c == 18) printf("������������\n");
	if (c == 19) printf("������������\n");
	if ((b == 1) && (d == 0)) printf("������\n");
	if (b == 2) printf("�������� ");
	if (b == 3) printf("�������� ");
	if (b == 4) printf("����� ");
	if (b == 5) printf("��������� ");
	if (b == 6) printf("���������� ");
	if (b == 7) printf("��������� ");
	if (b == 8) printf("����������� ");
	if (b == 9) printf("��������� ");
	if ((d == 1) && (b != 1)) printf("����\n");
	if ((d == 2) && (b != 1)) printf("���\n");
	if ((d == 3) && (b != 1)) printf("���\n");
	if ((d == 4) && (b != 1)) printf("������\n");
	if ((d == 5) && (b != 1)) printf("����\n");
	if ((d == 6) && (b != 1)) printf("�����\n");
	if ((d == 7) && (b != 1)) printf("����\n");
	if ((d == 8) && (b != 1)) printf("������\n");
	if ((d == 9) && (b != 1)) printf("������\n");
	printf("\nZadanie 5\n"); // ������� 5
	printf("Vvedite god ");
	scanf_s("%d", &x);
	N = 1984;
	C = N % 60;
	y = x - C;
	if (y < 0) y = y + 60;
	a = y % 60;
	b = a / 12;
	c = a % 12;
	printf("Otvet: %d", x);
	if (b == 0) printf(" - ��� ������/��� ");
	if (b == 1) printf(" - ��� �������/��� ");
	if (b == 2) printf(" - ��� Ƹ����/��� ");
	if (b == 3) printf(" - ��� �����/��� ");
	if (b == 4) printf(" - ��� ׸����/��� ");
	if (c == 0) printf("�����");
	if (c == 1) printf("������");
	if (c == 2) printf("�����");
	if (c == 3) printf("�����");
	if (c == 4) printf("�������");
	if (c == 5) printf("����");
	if (c == 6) printf("������");
	if (c == 7) printf("����");
	if (c == 8) printf("��������");
	if (c == 9) printf("������");
	if (c == 10) printf("������");
	if (c == 11) printf("������");
}