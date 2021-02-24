#include <iostream>
#include <cmath>

using std::cout, std::cin, std::endl;

int main() {
    float* p, min = 100;
    int i = 0, imin = 0;

    for (float x = -3.5; x <= 3; x += 0.25) {
        if (p[i] = 3 * std::sin(x + 5); p[i] < min) {
            min = p[i];
            imin = i;
        }

        cout << i << '\t' << p[i++] << endl;
    }

    int count =  0;
    for (int k = 0; k <= imin; k++) {
        p[k] < 0 ? count++ : 0;
    }

    cout << endl << count << " отрицательных значений встречено до "
         << min << "(минимальное)" << endl;

    return 0;
}