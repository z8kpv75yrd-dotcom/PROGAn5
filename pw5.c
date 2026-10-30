#include <stdio.h>

// корень считаем сами
// метод Ньютона: каждый раз r = (r + v / r) / 2, и r подходит все ближе к корню
double my_sqrt(double v){
    double r = v + 1;
    int k;
    for (k = 1; k <= 100; k++){
        r = (r + v / r) / 2;
    }
    return r;
}

// double, а не float, потому что он точнее и ошибка округления меньше
// return завершает функцию, передает в main вычисленное значение
// и возвращает управление туда, откуда функцию вызвали
double calc(double a, double b){
    return a * b / my_sqrt(a * a + b * b);
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
