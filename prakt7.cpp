#include <iostream>

double power(double x, int n) {
    if (n == 0) return 1.0;
    else if (n > 0) return x * power(x, n - 1);
    else return 1.0 / power(x, -n);
}

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

double f(double x, int n) {
    if (n == 0) return 1.0;
    return power(x, n) / factorial(n);
}

int main() {
    setlocale(LC_ALL, "rus");
    double x;
    int n;

    std::cout << "Введите x ";
    std::cin >> x;

    std::cout << "Введите n ";
    std::cin >> n;

    std::cout << "f(x, n) = " << f(x, n) << std::endl;

    return 0;
}
