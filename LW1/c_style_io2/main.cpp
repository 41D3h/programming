#include <cstdio>
#include <cmath>

using std::abs, std::sqrt;

int main() {
    const int m1 = 800; //grams
    const int m2 = 200;
    const int length = 100;

    printf("Больший шар поднимется на = %.2f", (float)(length * pow(m1 - m2, 2)) / (pow(m1 + m2, 2) * 100));

    return 0;
}
