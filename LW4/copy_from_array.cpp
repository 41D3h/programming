#define N 35

#include <iostream>
#include <cstdlib>

using std::cin, std::cout, std::endl;

int main() {
    srand(time(NULL));
    int W[N], *E;

    cout << "Исходный массив" << endl;
    for (int i = 0; i < N; i++) {
        W[i] = rand() % 201 - 100;
        cout << W[i] << endl;
    }

    cout << endl << "Массив Е" << endl;
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (W[i] >= 0) {
            E[count] = W[i];
            cout << E[count++] << endl;
        }
    }

    return 0;
}