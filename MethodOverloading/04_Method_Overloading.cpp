#include <iostream>

class Calculadora {
public:
    int sumar(int a, int b) const {
        return a + b;
    }

    int sumar(int a, int b, int c) const {
        return a + b + c;
    }

    double sumar(double a, double b) const {
        return a + b;
    }
};

int main() {
    Calculadora calc;

    int res2Enteros = calc.sumar(15, 25);
    std::cout << "Suma de 2 enteros (15 + 25): " << res2Enteros << std::endl;

    int res3Enteros = calc.sumar(10, 20, 30);
    std::cout << "Suma de 3 enteros (10 + 20 + 30): " << res3Enteros << std::endl;

    double resDecimales = calc.sumar(12.5, 7.3);
    std::cout << "Suma de 2 decimales (12.5 + 7.3): " << resDecimales << std::endl;

    return 0;
}