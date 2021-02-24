#define N 60

#include <iostream>
#include <ctime>
#include <cstdlib>

using std::cout, std::cin, std::endl;

int main() {
    srand(time(NULL));
    float F[N], average = 0;

    cout << "Исходный массив" << endl;
    for (int i = 0; i < N; i++) {
        F[i] = (float)(rand() % 2010) / 10 - 100;
        average = F[i];
        cout << i + 1 << '\t' << F[i] << endl;
    }

    average /= 60;
    cout << endl << "Измененный массив" << endl;
    for (int i = 0; i < N; i++) {
        // not user friendly variant (0-59)
        // (!i || i % 2 == 0) ? F[i] = average: 0;
        (i % 2 == 1) ? F[i] = average: 0;
        cout << i + 1 << '\t' << F[i] << endl;
    }
}