#include <iostream>
#include <cmath>

using std::cout, std::cin;

int main() {
    float r, h;

    cout << "Введите радиус цилиндра ";
    cin >> r;
    cout << "Введите высоту цилиндра ";
    cin >> h;
    cout << "Объем этого цилиндра = " << M_PI * r * r * h;

    return 0;
}
