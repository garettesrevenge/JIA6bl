#include <stdio.h>
#include<locale.h>
int main() {
    setlocale(LC_ALL, "Rus");

    printf("Задание 1\n"); // Задание 1
    //
    int arr[64];
    int N, i, el = 1;
    float a, b, d;
    printf("Введите N ");
    do {
        scanf_s("%d", &N);
    } while (N < 1);
    for (i = 0;i < N; i++, el += 2) arr[i] = el;
    printf("Массив: ");
    for (i = 0; i < N; i++) printf("%d ", arr[i]);

    printf("\nЗадание 2\n"); // Задание 2
    //
    printf("Введите N ");
    do {
        scanf_s("%d", &N);
    } while (N < 2);
    printf("Введите А ");
    scanf_s("%f", &a);
    printf("Введите D ");
    scanf_s("%f", &d);
    for (i = 0; i < N; i++, a *= d) arr[i] = a;
    printf("Массив: ");
    for (i = 0; i < N; i++) printf("%d ", arr[i]);

    printf("\nЗадание 3\n"); // Задание 3
    //
    printf("Введите N ");
    do {
        scanf_s("%d", &N);
    } while (N < 3);
    printf("Введите А ");
    scanf_s("%f", &a);
    printf("Введите B ");
    scanf_s("%f", &b);
    arr[0] = a;
    arr[1] = b;
    d = a + b;
    for (i = 2; i < N; i++, d *= 2) arr[i] =d;
    printf("Массив: ");
    for (i = 0; i < N; i++) printf("%d ", arr[i]);

    printf("\nЗадание 4\n"); // Задание 4
    //
    printf("Введите N ");
    do {
        scanf_s("%d", &N);
    } while (N < 1);
    int temp = N-1;
    for (i = 0; i < N; i++) arr[i] = i+1;
    for (i = 0; i < N; i++) {
        if ((i % 2) == 0) {
            printf("%d ", arr[i]);
        }
        else {
            printf("%d ", arr[temp]);
            temp--;
        }
    }
   
    printf("\nЗадание 5\n"); // Задание 5
    //
    printf("Введите N ");
    do {
        scanf_s("%d", &N);
    } while (N < 1);
    printf("Массив: ");
    for (i = 0; i < N; i++) arr[i] = i + 1;
    for (i = 0; i < N; i += 2) printf("%d ", arr[i]);
    if ((N % 2) == 0) {
        for (N -= 1; N > 0; N -= 2) printf("%d ", arr[N]);
    }
    else for (N -= 2; N > 0; N -= 2) printf("%d ", arr[N]);


}