#include <iostream>

using std::cin, std::cout;

int main() {
    auto input = 0;
    cout << "Введите цифру 1-7, чтобы выбрать печатное издание";
    cin >> input;

    switch (input) {
        case 1: cout << "Ведомости"; break;
        case 2: cout << "Известия"; break;
        case 3: cout << "Коммерсантъ"; break;
        case 4: cout << "Московский Комсомолец"; break;
        case 5: cout << "РБК"; break;
        case 6: cout << "Комсомольская правда"; break;
        case 7: cout << "Российская газета"; break;
        default:cout << "Неверный ввод"; break;
    }
}