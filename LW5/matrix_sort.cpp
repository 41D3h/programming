#include <iostream>
#include <cstdlib>

using std::cin, std::cout, std::endl;

int main() {
    srand(time(NULL));
    int n, m;

    cout << "Введите количество строк матрицы 1..100 ";
    cin >> n;
    cout << "Введите количество столбцов матрицы 1..50 ";
    cin >> m;

    int arr[n][m];
    cout << "Исходная матрица" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << (arr[i][j] = rand() % 201 - 100);
            cout << '\t';
        }
        cout << endl;
    }
    cout << endl;

    int header = 0;
    while (header < m) {
        if (header == 0 || arr[n -1][header] > arr[n - 1][header - 1]) {
            header++;
        } else {
            for (int i = 0; i < n; ++i) {
                int a = arr[i][header];
                arr[i][header] = arr[i][header - 1];
                arr[i][header - 1] = a;
            }
            header--;
        }
    }

    cout << "Отсортированная по последнему в столбце элементу матрица" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << '\t';
        }
        cout << endl;
    }

    return 0;
}
