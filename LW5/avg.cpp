#define N 4

#include <iostream>
#include <cstdlib>
#include <iomanip>

using std::cin, std::cout, std::endl;

int main() {
    srand(time(NULL));
    float D[N + 1][N + 1];
    cout << std::fixed << std::setw(6) << std::setprecision(2);

    cout << "Матрица D" << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N + 1; ++j) {
            D[i][j] = (float)(rand() % 20001 - 10000) / 100;
            cout << D[i][j] << '\t';
        }
        cout << endl;
    }

    for (int i = 0; i <= N; ++i) {
        float negative_avg = 0;
        int count = 0;
        for (int j = 0; j < N; ++j) {
            D[j][i] < 0 ? negative_avg += D[j][i], count++ : 0;
        }
        D[N][i] = negative_avg / (float)count;
    }

    cout << endl << "Дополненная матрица D" << endl;
    for (int i = 0; i <= N; ++i) {
        for (int j = 0; j <= N; ++j) {
            cout << D[i][j] << '\t';
        }
        cout << endl;
    }

    return 0;
}

