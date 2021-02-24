#define N 100

#include <iostream>
#include <ctime>
#include <cstdlib>
//#include <algorithm>

using std::cin, std::cout, std::endl;

int main() {
    srand(time(NULL));
    int some_elems[N];
    cout << "Исходный массив" << endl;
    for (int i = 0; i < N; i++) {
        some_elems[i] = rand() % 2001 - 1000;
        cout << some_elems[i] << endl;
    }

    //std::sort(some_elems, some_elems + sizeof(some_elems) / sizeof(some_elems[0]));
    int header = 0;
    while (header <= N) {
        if (header == 0 || some_elems[header] >= some_elems[header - 1]) {
            header++;
        } else {
            int a = some_elems[header];
            some_elems[header] = some_elems[header - 1];
            some_elems[header - 1] = a;
            header--;
        }
    }

    cout << endl << "Отсортированный массив" << endl;
    for (int x: some_elems) {
        cout << x << endl;
    }

    return 0;
}