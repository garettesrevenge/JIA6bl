#include <stdio.h>
#include<math.h>
#include < locale.h >
int main() {
	setlocale(LC_ALL, "Rus");
	int a, b, c, temp, sum,rast1,rast2;
	float x, y;
	printf("Zadanie 1\n"); // ������� 1 ������� 11 11
	a = 11;
	b = 11;
	if (a != b) {
		if (a > b) {
			b = b + a;
			a = a + a;
			printf("A = %d\n", a);
			printf("B = %d\n", b);
		}
		else {
			a = b + a;
			b = b + b;
			printf("A = %d\n", a);
			printf("B = %d\n", b);
		}
	}
	else {
		printf("A = %d\n", a);
		printf("B = %d\n", b);
	}
	printf("Zadanie 2\n"); // ������� 2 ������� 31
	a = 11;
	b = 10;
	c = 20;
	sum = a + b;
	if (sum < (b + c)) {
		sum = b + c;
	}
	if (sum < (a + c)) {
		sum = a + c;
	}
	printf("Otvet - %d\n", sum);
	printf("Zadanie 3\n"); // ������� 3 ������� B 4
	a = 3;
	b = -1;
	c = 8;
	rast1 = abs(b - a);
	rast2 = abs(c - a);
	if (rast1 < rast2) {
		printf("Otvet - B %d\n", rast1);
	}
	else printf("Otvet - C %d\n", rast2);
	printf("Zadanie 4\n"); // ������� 4
	printf("Vvedite X - ");
	scanf_s("%f", &x);
	printf("Vvedite Y - ");
	scanf_s("%f", &y);
	if ((x > 0) && (y > 0)) printf("Otvet - I\n");
	else if ((x < 0) && (y > 0)) printf("Otvet - II\n");
	else if ((x < 0) && (y < 0)) printf("Otvet - III\n");
	else printf("Otvet - IV\n");
	printf("Zadanie 5\n"); // ������� 5
	printf("Vvedite 4islo ");
	scanf_s("%d", &a);
	printf("Otvet - ");
	if (a > 0) printf("������������� ");
	else if (a == 0) printf("������� ");
	else printf("������������� ");
	if ((a % 2) == 0) printf("׸���� �����\n");
	else printf("�������� �����\n");
	printf("Zadanie 6\n"); // ������� 6
	printf("Vvedite 4islo v diapasone 1-999 ");
	do {
		scanf_s("%d", &a);
	} while ((a < 1) || (a > 999));
	printf("Otvet: %d", a);
	if ((a % 2) == 0) printf(" - ׸���� ");
	else printf(" - �������� ");
	if ((a / 100) != 0) printf("���������� �����");
	else if ((a / 10) != 0) printf("����������� �����");
	else printf("����������� �����");
}