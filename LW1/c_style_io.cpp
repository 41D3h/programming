#include <cstdio>
#include <cmath>

using std::abs, std::sqrt;

int main() {
    const float x = -2.6;
    int a;
    float c;

    printf("Введите значение а ");
    scanf("%d", &a);
    printf("Введите значение с ");
    scanf("%f", &c);

    printf("Значение функции  = %.2f", sqrt(abs(-a * c + c)) / log(abs(x + pow(c, 2))));

    return 0;
}
