#include <stdio.h>
#include <locale.h> 
#include <math.h>
int main() {
	int a, b, c, d, x, y, N,C;
	setlocale(LC_ALL, "Rus");
	printf("Zadanie 1 1\n"); // Задание 1
	printf("Vvedite Den' ");
	scanf_s("%d", &x);
	printf("Vvedite Mesyac ");
	scanf_s("%d", &y);
	printf("Otvet: ");
	if ((x > 0) && (x < 32) && (y > 0) && (y < 13)) {
		b = x / 10;
		c = x % 100;
		d = x % 10;
		if ((b == 2) && (d != 0)) printf("Двадцать ");
		if ((b == 2) && (d == 0)) printf("Двадцатое ");
		if ((b == 3) && (d != 0)) printf("Тридцать ");
		if ((b == 3) && (d == 0)) printf("Тридцатое ");
		if (c == 10) printf("Десятое ");
		if (c == 11) printf("Одиннадцатое ");
		if (c == 12) printf("Двенадцатое ");
		if (c == 13) printf("Тринадцатое ");
		if (c == 14) printf("Четырнадцатое ");
		if (c == 15) printf("Пятнадцатое ");
		if (c == 16) printf("Шестнадцатое ");
		if (c == 17) printf("Семнадцатое ");
		if (c == 18) printf("Восемнадцатое ");
		if (c == 19) printf("Девятнадцатое ");
		if (d == 1) printf("Первое ");
		if (d == 2) printf("Второе ");
		if (d == 3) printf("Третье ");
		if (d == 4) printf("Четвертое ");
		if (d == 5) printf("Пятое ");
		if (d == 6) printf("Шестое ");
		if (d == 7) printf("Седьмое ");
		if (d == 8) printf("Восьмое ");
		if (d == 9) printf("Девятое ");
		if (y == 1) printf("Января\n");
		if (y == 2) printf("Февраля\n");
		if (y == 3) printf("Марта\n");
		if (y == 4) printf("Апреля\n");
		if (y == 5) printf("Мая\n");
		if (y == 6) printf("Июня\n");
		if (y == 7) printf("Июля\n");
		if (y == 8) printf("Августа\n");
		if (y == 9) printf("Сентября\n");
		if (y == 10) printf("Октября\n");
		if (y == 11) printf("Ноября\n");
		if (y == 12) printf("Декабря\n");
	}
	else printf("Nekorrektnaya data\n");
	printf("Zadanie 2\n"); // Задание 2
	printf("Введите N (0 - продолжать движение, 1 - поворот налево, -1 - поворот направо) ");
	scanf_s("%d", &N);
	printf("Введите C (С - 1, В - 2, Ю - 3, З - 4) ");
	scanf_s("%d", &C);
	printf("Otvet: ");
	if (((C == 3) || (C == 1) || (C == 2) || (C == 4)) && (N > -2) && (N < 2)); {
		if (C == 3) {
			if (N == 1) printf("На Восток\n");
			if (N == 0)printf("На Юг\n");
			if (N == -1)printf("На Запад\n");
		}
		if (C == 4) {
			if (N == 1) printf("На Юг\n");
			if (N == 0)printf("На запад\n");
			if (N == -1)printf("На Север\n");
		}
		if (C == 1) {
			if (N == 1) printf("На Запад\n");
			if (N == 0)printf("На Север\n");
			if (N == -1)printf("На Восток\n");
		}
		if (C == 2) {
			if (N == 1) printf("На Север\n");
			if (N == 0)printf("На Восток\n");
			if (N == -1)printf("На Юг\n");
		}
	else printf("Некорректные данные\n");
	}
	printf("Zadanie 3\n"); // Задание 3
	printf("Vvedite 4islo v diapazone 10-40 ");
	do {
		scanf_s("%d", &x);
	} while ((x < 10) || (x > 40));
	b = x / 10;
	c = x % 100;
	d = x % 10;
	printf("Otvet - ");
	if ((b == 2)&&(d!=0)) printf("Двадцать ");
	if (b == 3) printf("Тридцать ");
	if (b == 4) printf("Сорок ");
	if ((d == 0) && (b != 1)) printf("Учебных Заданий\n");
	if ((d == 1) && (b != 1)) printf("Одно Учебное Задание\n");
	if ((d == 2) && (b != 1)) printf("Два Учебных Заданий\n");
	if ((d == 3) && (b != 1)) printf("Три Учебных Заданий\n");
	if ((d == 4) && (b != 1)) printf("Четыре Учебных Заданий\n");
	if ((d == 5) && (b != 1)) printf("Пять Учебных Заданий\n");
	if ((d == 6) && (b != 1)) printf("Шесть Учебных Заданий\n");
	if ((d == 7) && (b != 1)) printf("Семь Учебных Заданий\n");
	if ((d == 8) && (b != 1)) printf("Восемь Учебных Заданий\n");
	if ((d == 9) && (b != 1)) printf("Девять Учебных Заданий\n");
	if (c == 10) printf("Десять Учебных Заданий\n");
	if (c == 11) printf("Одиннадцать Учебных Заданий\n");
	if (c == 12) printf("Двенадцать Учебных Заданий\n");
	if (c == 13) printf("Тринадцать Учебных Заданий\n");
	if (c == 14) printf("Четырнадцать Учебных Заданий\n");
	if (c == 15) printf("Пятнадцать Учебных Заданий\n");
	if (c == 16) printf("Шестнадцать Учебных Заданий\n");
	if (c == 17) printf("Семнадцать Учебных Заданий\n");
	if (c == 18) printf("Восемнадцать Учебных Заданий\n");
	if (c == 19) printf("Девятнадцать Учебных Заданий\n");
	printf("Zadanie 4\n"); // Задание 4
	printf("Vvedite 4islo v diapazone 100-999 ");
	do {
		scanf_s("%d", &x);
	} while ((x < 100) || (x > 999));
	a = x / 100;
	b = x / 10 % 10;
	c = x % 100;
	d = x % 10;
	printf("Otvet - ");
	if (a == 1) printf("Сто ");
	if (a == 2) printf("Двести ");
	if (a == 3) printf("Триста ");
	if (a == 4) printf("Четыреста ");
	if (a == 5) printf("Пятьсот ");
	if (a == 6) printf("Шестьсот ");
	if (a == 7) printf("Семьсот ");
	if (a == 8) printf("Восемьсот ");
	if (a == 9) printf("Девятьсот ");
	if (c == 11) printf("Одиннадцать\n");
	if (c == 12) printf("Двенадцать\n");
	if (c == 13) printf("Тринадцать\n");
	if (c == 14) printf("Четырнадцать\n");
	if (c == 15) printf("Пятнадцать\n");
	if (c == 16) printf("Шестнадцать\n");
	if (c == 17) printf("Семнадцать\n");
	if (c == 18) printf("Восемнадцать\n");
	if (c == 19) printf("Девятнадцать\n");
	if ((b == 1) && (d == 0)) printf("десять\n");
	if (b == 2) printf("Двадцать ");
	if (b == 3) printf("Тридцать ");
	if (b == 4) printf("Сорок ");
	if (b == 5) printf("Пятьдесят ");
	if (b == 6) printf("Шестьдесят ");
	if (b == 7) printf("Семьдесят ");
	if (b == 8) printf("Восемьдесят ");
	if (b == 9) printf("Девяноста ");
	if ((d == 1) && (b != 1)) printf("Один\n");
	if ((d == 2) && (b != 1)) printf("Два\n");
	if ((d == 3) && (b != 1)) printf("Три\n");
	if ((d == 4) && (b != 1)) printf("Четыре\n");
	if ((d == 5) && (b != 1)) printf("Пять\n");
	if ((d == 6) && (b != 1)) printf("Шесть\n");
	if ((d == 7) && (b != 1)) printf("Семь\n");
	if ((d == 8) && (b != 1)) printf("Восемь\n");
	if ((d == 9) && (b != 1)) printf("Девять\n");
	printf("\nZadanie 5\n"); // Задание 5
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
	if (b == 0) printf(" - Год Зелёной/ого ");
	if (b == 1) printf(" - Год Красной/ого ");
	if (b == 2) printf(" - Год Жёлтой/ого ");
	if (b == 3) printf(" - Год Белой/ого ");
	if (b == 4) printf(" - Год Чёрный/ого ");
	if (c == 0) printf("Крысы");
	if (c == 1) printf("Коровы");
	if (c == 2) printf("Тигра");
	if (c == 3) printf("Зайца");
	if (c == 4) printf("Дракона");
	if (c == 5) printf("Змеи");
	if (c == 6) printf("Лошади");
	if (c == 7) printf("Овцы");
	if (c == 8) printf("Обезьяны");
	if (c == 9) printf("Курицы");
	if (c == 10) printf("Собаки");
	if (c == 11) printf("Свиньи");
}