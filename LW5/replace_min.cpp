#define N 7

#include <iostream>
#include <cstdlib>
#include <iomanip>

using std::cout, std::cin, std::endl;

int main() {
    srand(time(NULL));
    float O[N][N], average = 0, min = 101;
    cout.precision(2);
    cout << std::fixed << std::setw(6);
    int imin, jmin;

    cout << "Матрица О" << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << (O[i][j] = (float)(rand() % 20001 - 10000) / 100);
            cout << '\t';
            i < j ? average += O[i][j] : 0;
            O[i][j] < min ? min = O[i][j], imin = i, jmin = j : 0;
        }
        cout << endl;
    }

    average /= ((N * N - N) / 2);
    cout << endl << "Наименьший элемент = " << min << endl;
    O[imin][jmin] = average;
    cout << endl << "Измененная матрица О" << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << O[i][j] << '\t';
        }
        cout << endl;
    }


    return 0;
}