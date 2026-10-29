#include <stdio.h>
#define SIZE 8

int main(void){
    double arr[SIZE];
    double sum = 0.0;
    double f = 1.0;
    int i;
    // индексация с нуля, потому что индекс - это сдвиг от начала массива,
    // у первого элемента сдвиг равен 0
    // arr[i] - это то же самое, что *(arr + i), то есть доступ
    // через указатель на начало массива со сдвигом на i
    for (i = 0; i < SIZE; i++){
        f *= (i + 1);
        arr[i] = f;
    }
    for (i = 0; i < SIZE; i++){
        printf("%.2f ", arr[i]);
        sum += arr[i];
    }
    printf("\n");
    printf("Сумма: %.2f\n", sum);
    return 0;
}
