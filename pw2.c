#include <stdio.h>
#define HEIGHT 5

int main(void){
    int i, j;
    // внешний цикл - это номер строки i от 1 до HEIGHT
    // первый внутренний цикл печатает пробелы, их HEIGHT - i,
    // то есть с каждой строкой на 1 меньше
    // второй внутренний цикл печатает #, их i штук,
    // то есть с каждой строкой на 1 больше
    for (i = 1; i <= HEIGHT; i++){
        for (j = 1; j <= HEIGHT - i; j++){
            printf(" ");
        }
        for (j = 1; j <= i; j++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
