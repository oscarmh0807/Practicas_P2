#include <iostream>
#include <string>

class Vehiculo {
protected:
    std::string marca;
    std::string modelo;
    int velocidadMax;

public:
    Vehiculo(std::string m, std::string mod, int vel) 
        : marca(m), modelo(mod), velocidadMax(vel) {}

    virtual void mostrarInfo() const {
        std::cout << "Marca: " << marca << ", Modelo: " << modelo 
                  << ", Vel. Max: " << velocidadMax << " km/h";
    }

    virtual ~Vehiculo() {}
};

class Auto : public Vehiculo {
private:
    int numeroPuertas;

public:
    Auto(std::string m, std::string mod, int vel, int puertas)
        : Vehiculo(m, mod, vel), numeroPuertas(puertas) {}

    void mostrarInfo() const override {
        Vehiculo::mostrarInfo();
        std::cout << ", Puertas: " << numeroPuertas << std::endl;
    }
};

class Motocicleta : public Vehiculo {
private:
    std::string tipoManillar;

public:
    Motocicleta(std::string m, std::string mod, int vel, std::string manillar)
        : Vehiculo(m, mod, vel), tipoManillar(manillar) {}

    void mostrarInfo() const override {
        Vehiculo::mostrarInfo();
        std::cout << ", Tipo de Manillar: " << tipoManillar << std::endl;
    }
};

int main() {
    Auto NuevoAuto("Toyota", "Corolla", 180, 4);
    Motocicleta NuevaMoto("Yamaha", "MT-07", 210, "Deportivo");

    NuevoAuto.mostrarInfo();
    NuevaMoto.mostrarInfo();

    return 0;
}