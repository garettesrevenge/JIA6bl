#include <stdio.h>
int main() {
	int a, b, c, d, x, y;
	printf("Zadanie 1\n"); // Задание 1
	printf("Vvedite a ");
	scanf_s("%d", &a);
	printf("Vvedite b ");
	scanf_s("%d", &b);
	printf("Otvet - ");
	if (a > 2 && b <= 3) {
		printf("True\n");
	}
	else printf("False\n");
	printf("Zadanie 2\n"); // Задание 2
	printf("Vvedite a ");
	scanf_s("%d", &a);
	printf("Vvedite b ");
	scanf_s("%d", &b);
	printf("Vvedite c ");
	scanf_s("%d", &c);
	printf("Otvet - ");
	if (a < b && b < c) {
		printf("True\n");
	}
	else printf("False\n");
	printf("Zadanie 3\n"); // Задание 3
	printf("Vvedite 2-zna4noe 4islo ");
	scanf_s("%d", &a);
	x = a % 2;
	printf("Otvet - ");
	if (x == 0) {
		printf("True\n");
	}
	else printf("False\n");
	printf("Zadanie 4\n"); // Задание 4
	printf("Vvedite 3-zna4noe 4islo ");
	scanf_s("%d", &x);
	a = x / 100;
	b = x / 10 % 10;
	c = x % 10;
	printf("Otvet - ");
	if (a < b && b < c) {
		printf("True\n");
	}
	else printf("False\n");
	printf("Zadanie 5\n"); // Задание 5
	printf("Vvedite 4-zna4noe 4islo ");
	scanf_s("%d", &x);
	a = x / 1000;
	b = x / 100 % 10;
	c = x / 10 % 10;
	d = x % 10;
	printf("Otvet - ");
	if (a == d && b == c) {
		printf("True\n");
	}
	else printf("False\n");
	printf("Zadanie 6\n"); // Задание 6
	printf("Vvedite a ");
	scanf_s("%d", &a);
	printf("Vvedite b ");
	scanf_s("%d", &b);
	printf("Vvedite c ");
	scanf_s("%d", &c);
	printf("Otvet - ");
	if (((a * a) + (b * b)) == (c * c)) {
		printf("True\n");
	}
	else printf("False\n");
	printf("Zadanie 7\n");
	printf("Vvedite a ");
	scanf_s("%d", &a);
	printf("Vvedite b ");
	scanf_s("%d", &b);
	printf("Vvedite c ");
	scanf_s("%d", &c);
	printf("Otvet - ");
	if ((a+b)>c&&(a+c)>b&&(b+c)>a) {
		printf("True\n");
	}
	else printf("False\n");
}
