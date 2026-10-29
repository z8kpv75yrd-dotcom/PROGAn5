#include <stdio.h>
#include <math.h>

// double, а не float, потому что он точнее и ошибка округления меньше
// return завершает функцию, передает в main вычисленное значение
// и возвращает управление туда, откуда функцию вызвали
double calc(double a, double b){
    return a * b / sqrt(a * a + b * b);
}
int main(void){
    double a, b;
    printf("Введи a и b: ");
    while (scanf("%lf %lf", &a, &b)==2){
        printf("Результат: %.4f\n", calc(a, b));
        printf("Введи a и b: ");
    }
    return 0;
}