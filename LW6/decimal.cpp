#include <iostream>
#include <regex>

using std::cout, std::cin, std::endl;

int main() {
    std::string input;
    cout << "Введите целое число" << endl;
    std::getline(cin, input);

    std::regex pat {R"(\d*)"};
    cout << (std::regex_match(input, pat) ? "Введено целое число" :
            "Введенная строка не является целым числом ") << endl;
    return 0;
}