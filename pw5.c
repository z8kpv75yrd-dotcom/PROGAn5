#include <stdio.h>

#define A 0.0
#define B 5.0
#define H 1.0

// ln считаем сами по формуле
// формула: ln(z) = 2 * (t + t^3/3 + t^5/5 + ...), где t = (z - 1) / (z + 1)
double my_ln(double z){
    double t = (z - 1) / (z + 1);
    double t2 = t * t;
    double term = t;
    double sum = 0.0;
    int k;
    for (k = 1; k <= 400; k += 2){
        sum += term / k;
        term *= t2;
    }
    return 2 * sum;
}

int main(void){
    double x, y;
    int n = 1;
    // при x += H копится ошибка округления, потому что числа вроде 0.1
    // хранятся в двоичном виде неточно, из-за этого x может не дойти до B,
    // например получится 5.0000001 и последняя точка пропадет
    // у нас H = 1.0 хранится точно, поэтому все точки выведутся
    printf(" N        X         Y\n");
    for (x = A; x <= B; x += H){
        y = my_ln(x + 1);
        printf("%2d   %8.4f  %8.4f\n", n, x, y);
        n++;
    }
    return 0;
}
