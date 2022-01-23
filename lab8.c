#include <stdio.h>
int main() {
	int x, a, b, c;
	printf("Zadanie 1\n"); // Задание 1
	printf("Vvedite razmer v bytah ");
	scanf_s("%d", &a);
	x = a / 1024;
	printf("Otvet - ");
	printf("%d\n", x);
	printf("Zadanie 2\n"); // Задание 2
	printf("Vvedite A (> B) ");
	scanf_s("%d", &a);
	printf("Vvedite B ");
	scanf_s("%d", &b);
	if (a <= b) {
		printf("Net resheniya\n");
	}
	else {
		x = a / b;
		printf("Otvet - ");
		printf("%d\n", x);
	}
	printf("Zadanie 3\n"); // Задание 3
	printf("Vvedite A (> B) ");
	scanf_s("%d", &a);
	printf("Vvedite B ");
	scanf_s("%d", &b);
	if (a <= b) {
		printf("Net resheniya\n");
	}
	else {
		x = a % b;
		printf("Otvet - ");
		printf("%d\n", x);
	}
	printf("Zadanie 4\n"); // Задание 4
	printf("Vvedite 2-zna4noe 4islo ");
	scanf_s("%d", &a);
	if (10 <= a && a < 100) {
		b = a / 10;
		c = a % 10;
		x = c * 10 + b;
		printf("Otvet - ");
		printf("%d\n", x);
	}
	else printf("Nevernoe 4islo\n");
	printf("Zadanie 5\n"); // Задание 5
	printf("Vvedite 3-zna4noe 4islo ");
	scanf_s("%d", &a);
	if (100 <= a && a < 1000) {
		b = a / 100;
		c = a % 100;
		x = c * 10 + b;
		printf("Otvet - ");
		printf("%d\n", x);
	}
	else printf("Nevernoe 4islo\n");
}