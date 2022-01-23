#include <stdio.h>
#include <math.h>
#include <locale.h>

void PowerA3(float A, float *B){ // ������� � 1 �������
	*B = A * A * A;
}

int Sign(float X) { // ������� �� 2 �������
	if (X > 0) return 1;
	if (X == 0) return 0;
	if (X < 0) return -1;
}

float RingS(float R1, float R2) { // ������� � 3 �������
	return 3.14 * (R1 * R1 - R2 * R2);
}

int Quartet(float x, float y) { // ������� � 4 �������
	if ((x > 0) && (y > 0)) return 1;
	if ((x < 0) && (y > 0)) return 2;
	if ((x < 0) && (y < 0)) return 3;
	if ((x > 0) && (y < 0)) return 4;
}

float Fact2(int N) { // ������� � 5 �������
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
	/////////////////////////////////////////// ������� 1
	setlocale(LC_ALL, "Rus");
	printf("������� 1\n");
	float A, B;
	int i;
	for (i = 0; i < 5;i++) {
		printf("������� � - ");
		scanf_s("%f", &A);
		PowerA3(A, &B);
		printf("������� ������ - %f\n", B);
	}

	/////////////////////////////////////////// ������� 2
	printf("������� 2\n");
	printf("������� � - ");
	scanf_s("%f", &A);
	printf("������� B - ");
	scanf_s("%f", &B);
	i = Sign(A) + Sign(B);
	printf("�����: %d\n",i);

	/////////////////////////////////////////// ������� 3
	printf("������� 3\n");
	float R1, R2, t;
	for (i = 0;i < 3;i++) {
		printf("������� R1 - ");
		scanf_s("%f", &R1);
		do {
			printf("������� R2 - ");
			scanf_s("%f", &R2);
		} while (R2 >= R1);
		t = RingS(R1, R2);
		printf("������ = %f\n", t);
	}

	/////////////////////////////////////////// ������� 4
	printf("������� 4\n");
	float x, y;
	int tmp;
	for (i = 0;i < 3;i++) {
		do {
			printf("������� x - ");
			scanf_s("%f", &x);
			printf("������� y - ");
			scanf_s("%f", &y);
		} while ((x==0)||(y==0));
		tmp = Quartet(x,y);
		printf("� %d ��������\n", tmp);
	}

	////////////////////////////////////////// ������� 5
	printf("������� 5\n");
	int N;
	printf("������� N ");
	do {
		scanf_s("%d", &N);
	} while (N < 1);
	tmp = Fact2(N);
	printf("��������� N = %d", tmp);

}