#define AMOUNT_OF_PEOPLE 10
#include <iostream>
#include <iomanip>

using std::cout, std::cin, std::endl, std::setw;

struct sportsman {
    std::string last_name, fst_name, patro, sex;
    int age, weight, height;
};

void display_person_data(const sportsman item);

void display_header();

int main() {
    sportsman competitors[AMOUNT_OF_PEOPLE];
    competitors[0] = {"Сенькина", "Марина", "Василиевна", "Женский", 27, 55, 175};
    competitors[1] = {"Чичваркина", "Анна", "Павеловна", "Женский", 23, 50, 180};
    competitors[2] = {"Зубков", "Сергей", "Анатолиевич", "Мужской", 26, 80, 183};
    competitors[3] = {"Щавлева", "Регина", "Святославовна", "Женский", 24, 48, 170};
    competitors[4] = {"Богомазов", "Эдуард", "Валериевич", "Мужской", 23, 73, 175};
    competitors[5] = {"Александрова", "Елизавета", "Данииловна", "Женский", 22, 45, 160};
    competitors[6] = {"Загряжский", "Иван", "Игоревич", "Мужской", 28, 85, 185};
    competitors[7] = {"Кравчук", "Виталий", "Измаилович", "Мужской", 23, 79, 182};
    competitors[8] = {"Катасонов", "Филипп", "Егорович", "Мужской", 27, 75, 165};
    competitors[9] = {"Шевцова", "Алла", "Захаровна", "Женский", 26, 65, 172};

    display_header();
    for (int i = 0; i < AMOUNT_OF_PEOPLE; i++) {
        display_person_data(competitors[i]);
    }

    display_header();
    for (int i = 0; i < AMOUNT_OF_PEOPLE; i++) {
        if (competitors[i].age < 25 && competitors[i].weight > 70) {
            display_person_data(competitors[i]);
        }
    }

    std::string pre_man = " ";
    std::string pre_woman = " ";
    int *women;
    int w_count = 0;
    display_header();
    for (int i = 0; i < AMOUNT_OF_PEOPLE; i++) {
        std::string man = "ЯЯЯ";
        std::string woman = "ЯЯЯ";
        int m_indx = -1, w_indx = -1;
        for (int j = 0; j < AMOUNT_OF_PEOPLE; j++) {
            if (competitors[j].sex == "Мужской" &&
                competitors[j].last_name < man) {
                if (competitors[j].last_name > pre_man) {
                    man = competitors[j].last_name;
                    m_indx = j;
                    continue;
                }
            }
            if (competitors[j].sex == "Женский" &&
                competitors[j].last_name < woman) {
                if (competitors[j].last_name > pre_woman) {
                    woman = competitors[j].last_name;
                    w_indx = j;
                }
            }
        }

        if (m_indx >= 0) {
            display_person_data(competitors[m_indx]);
            pre_man = man;
        }
        if (w_indx >= 0) {
            women[i] = w_indx;
            pre_woman = woman;
            w_count++;
        }
    }

    display_header();
    for (auto i = women; i < women + w_count; i++) {
        display_person_data(competitors[*i]);
    }
    return 0;
}

void display_person_data(const sportsman item) {
    cout << item.last_name << setw(27) << item.fst_name << setw(23)
         << item.patro << setw(10) << item.sex << setw(5) << item.age << setw(5)
         << item.weight << setw(5) << item.height << endl;
}

void display_header() {
    cout << endl << setw(10) << "Фамилия" << setw(10) << "Имя" << setw(17)
         << "Отчество" << setw(10) << "Пол" << setw(5) << "Возраст" << setw(5)
         << "Вес" << setw(5) << "Рост" << endl;
}