#include <iostream>
#include <numeric>

class Fraccion {
private:
    int numerador;
    int denominador;

    void simplificar() {
        if (denominador < 0) {
            numerador = -numerador;
            denominador = -denominador;
        }
        int mcd = std::gcd(numerador, denominador);
        if (mcd != 0) {
            numerador /= mcd;
            denominador /= mcd;
        }
    }

public:
    Fraccion(int num = 0, int den = 1) : numerador(num), denominador(den) {
        if (denominador == 0) {
            std::cerr << "Error: El denominador no puede ser 0. Se ajusta a 1 por defecto." << std::endl;
            denominador = 1;
        }
        simplificar();
    }

    Fraccion operator+(const Fraccion& otra) const {
        int num = (this->numerador * otra.denominador) + (otra.numerador * this->denominador);
        int den = this->denominador * otra.denominador;
        return Fraccion(num, den);
    }

    bool operator==(const Fraccion& otra) const {
        return (this->numerador == otra.numerador) && (this->denominador == otra.denominador);
    }

    void mostrar() const {
        std::cout << numerador << "/" << denominador;
    }
};

int main() {
    Fraccion f1(2, 4);
    Fraccion f2(1, 3);
    Fraccion f3(3, 6);

    Fraccion suma = f1 + f2;

    std::cout << "f1: "; f1.mostrar(); std::cout << std::endl;
    std::cout << "f2: "; f2.mostrar(); std::cout << std::endl;
    std::cout << "Suma (f1 + f2): "; suma.mostrar(); std::cout << std::endl;

    if (f1 == f3) {
        std::cout << "f1 (2/4) y f3 (3/6) son EQUIVALENTES." << std::endl;
    } else {
        std::cout << "f1 y f3 NO son equivalentes." << std::endl;
    }

    if (f1 == f2) {
        std::cout << "f1 (2/4) y f2 (1/3) son EQUIVALENTES." << std::endl;
    } else {
        std::cout << "f1 (2/4) y f2 (1/3) NO son equivalentes." << std::endl;
    }

    return 0;
}