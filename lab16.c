#include <stdio.h>
#include<locale.h>
int main() {
    setlocale(LC_ALL, "Rus");

    printf("������� 1\n"); // ������� 1
    //
    int arr[64];
    int N, i, el = 1;
    float a, b, d;
    printf("������� N ");
    do {
        scanf_s("%d", &N);
    } while (N < 1);
    for (i = 0;i < N; i++, el += 2) arr[i] = el;
    printf("������: ");
    for (i = 0; i < N; i++) printf("%d ", arr[i]);

    printf("\n������� 2\n"); // ������� 2
    //
    printf("������� N ");
    do {
        scanf_s("%d", &N);
    } while (N < 2);
    printf("������� � ");
    scanf_s("%f", &a);
    printf("������� D ");
    scanf_s("%f", &d);
    for (i = 0; i < N; i++, a *= d) arr[i] = a;
    printf("������: ");
    for (i = 0; i < N; i++) printf("%d ", arr[i]);

    printf("\n������� 3\n"); // ������� 3
    //
    printf("������� N ");
    do {
        scanf_s("%d", &N);
    } while (N < 3);
    printf("������� � ");
    scanf_s("%f", &a);
    printf("������� B ");
    scanf_s("%f", &b);
    arr[0] = a;
    arr[1] = b;
    d = a + b;
    for (i = 2; i < N; i++, d *= 2) arr[i] =d;
    printf("������: ");
    for (i = 0; i < N; i++) printf("%d ", arr[i]);

    printf("\n������� 4\n"); // ������� 4
    //
    printf("������� N ");
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
   
    printf("\n������� 5\n"); // ������� 5
    //
    printf("������� N ");
    do {
        scanf_s("%d", &N);
    } while (N < 1);
    printf("������: ");
    for (i = 0; i < N; i++) arr[i] = i + 1;
    for (i = 0; i < N; i += 2) printf("%d ", arr[i]);
    if ((N % 2) == 0) {
        for (N -= 1; N > 0; N -= 2) printf("%d ", arr[N]);
    }
    else for (N -= 2; N > 0; N -= 2) printf("%d ", arr[N]);


}