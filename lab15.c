#include <stdio.h>
#include <math.h>
#include <locale.h>

void PowerA3(float A, float *B){ // Функция к 1 заданию
	*B = A * A * A;
}

int Sign(float X) { // Функция ко 2 заданию
	if (X > 0) return 1;
	if (X == 0) return 0;
	if (X < 0) return -1;
}

float RingS(float R1, float R2) { // Функция к 3 заданию
	return 3.14 * (R1 * R1 - R2 * R2);
}

int Quartet(float x, float y) { // Функция к 4 заданию
	if ((x > 0) && (y > 0)) return 1;
	if ((x < 0) && (y > 0)) return 2;
	if ((x < 0) && (y < 0)) return 3;
	if ((x > 0) && (y < 0)) return 4;
}

float Fact2(int N) { // Функция к 5 заданию
	int sum,i;
	if ((N % 2) == 0) {
		i = 2;
		sum = 2;
		while (i < N) {
			i = i + 2;
			sum = sum * i;
		}
		return sum;
	}
	else {
		i = 1;
		sum = 1;
		while (i < N) {
			i = i + 2;
			sum = sum * i;
		}
		return sum;
	}
}

int main(void) {
	/////////////////////////////////////////// Задание 1
	setlocale(LC_ALL, "Rus");
	printf("Задание 1\n");
	float A, B;
	int i;
	for (i = 0; i < 5;i++) {
		printf("Введите А - ");
		scanf_s("%f", &A);
		PowerA3(A, &B);
		printf("Степень Тройки - %f\n", B);
	}

	/////////////////////////////////////////// Задание 2
	printf("Задание 2\n");
	printf("Введите А - ");
	scanf_s("%f", &A);
	printf("Введите B - ");
	scanf_s("%f", &B);
	i = Sign(A) + Sign(B);
	printf("Ответ: %d\n",i);

	/////////////////////////////////////////// Задание 3
	printf("Задание 3\n");
	float R1, R2, t;
	for (i = 0;i < 3;i++) {
		printf("Введите R1 - ");
		scanf_s("%f", &R1);
		do {
			printf("Введите R2 - ");
			scanf_s("%f", &R2);
		} while (R2 >= R1);
		t = RingS(R1, R2);
		printf("Кольцо = %f\n", t);
	}

	/////////////////////////////////////////// Задание 4
	printf("Задание 4\n");
	float x, y;
	int tmp;
	for (i = 0;i < 3;i++) {
		do {
			printf("Введите x - ");
			scanf_s("%f", &x);
			printf("Введите y - ");
			scanf_s("%f", &y);
		} while ((x==0)||(y==0));
		tmp = Quartet(x,y);
		printf("В %d Четверти\n", tmp);
	}

	////////////////////////////////////////// Задание 5
	printf("Задание 5\n");
	int N;
	printf("Введите N ");
	do {
		scanf_s("%d", &N);
	} while (N < 1);
	tmp = Fact2(N);
	printf("Факториал N = %d", tmp);

}