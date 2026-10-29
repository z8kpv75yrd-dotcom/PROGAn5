#include <stdio.h>

int main(void){
    int N, i;
    double S, sign;
    printf("Введи N: ");
    while (scanf("%d", &N)==1 && N>0){
        // S делаем double и начинаем с 0.0, потому что если сумма
        // будет целой, то дробная часть потеряется и ответ выйдет неверным
        S = 0.0;
        sign = 1.0;
        for (i = 1; i <= N; i++){
            S += sign / (2 * i - 1);
            sign = -sign;
        }
        printf("SUM: %.6f\n", S);
        printf("Введи N: ");
    }
    return 0;
}