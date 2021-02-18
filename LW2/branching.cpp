#include <iostream>

using std::cin, std::cout;

/*      min(a, b - 1, max(c, d, a))
 *      if c or d greater than a they are cut out by min()
 *      otherwise they are cut out by max()
 * */
int main() {
    int a, b, c, d;

    cout << "Введите значения для a, b, c, d\n";
    cin >> a >> b >> c >> d;

    cout << "Результат выражения min(a, b - 1, max(c, d, a)) = "
         << ((b - 1) < a ? b - 1 : a);
}