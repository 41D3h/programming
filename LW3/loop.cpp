#include <iostream>

using std::cout, std::cin;

int main() {

    int sum = 0, comp  = 1;

    int k;
    for (k = 2; k <= 11; k++) {
        comp *= (k + 1);
        sum += (k + 1);
    }
    sum += k + 1;

    cout << "Результат вычисления = " << sum + comp;

    return 0;
}
