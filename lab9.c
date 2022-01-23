#include <stdio.h>
int main() {
	int N, a, b, c, K, x, y;
	printf("Zadanie 1\n"); // Задание 1
	printf("Vvesti N ");
	scanf_s("%d", &N);
	a = N % 60;
	printf("Otvet - ");
	printf("%d\n", a);
	printf("Zadanie 2\n"); // Задание 2
	K = 7; // Заданный номер дня
	a = K % 7;
	printf("Otvet - ");
	printf("%d\n", a); // Вывелось: 0
	printf("Zadanie 3\n"); // Задание 3
	N = 4; // День недели 1 января
	K = 4; // Номер дня года
	a = (K + N - 1) % 7;
	if (a == 0) {
		a = a + 7;
	}
	printf("Otvet - ");
	printf("%d\n", a); // Вывелось: 7
	printf("Zadanie 4\n"); // Задание 4
	a = 5; // Заданная а сторона  прямоугольника 
	b = 5; // Заданная b сторона прямоугольника
	c = 2; // Заданная сторона квадратом
	x = (a * b) / (c * c);
	y = (a * b) - x * (c * c);
	printf("Kolvo kvadratov - ");
	printf("%d\n", x);
	printf("Nezanyataya Ploshad' - ");
	printf("%d\n", y);
	printf("Zadanie 5\n"); // Задание 5
	printf("Vvedite nomer goda ");
	scanf_s("%d", &a);
	x = (a - 1) / 100 + 1;
	printf("Stoletie - ");
	printf("%d", x);
}