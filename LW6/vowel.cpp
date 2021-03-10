#include <iostream>
#include <string>

using std::cout, std::cin, std::endl;

int main() {
    std::string input;
    cout << "Введите строку" << endl;
    std::getline(cin, input);

    int count = 0;
    const std::string vowels = "aiueoAIUEO";
    for (const auto &item : input) {
        for (const auto &vowel : vowels) {
            item == vowel ? count++ : 0;
        }
    }

    cout << "Найдено " << count << " гласных" << endl;

    return 0;
}