#include <iostream>
#include <vector>
#include <string>

class Vehiculo {
protected:
    std::string marca;
    std::string modelo;
    int velocidadMax;

public:
    Vehiculo(std::string m, std::string mod, int vel) 
        : marca(m), modelo(mod), velocidadMax(vel) {}

    virtual void mostrarInfo() const = 0; 
    virtual ~Vehiculo() {}
};

class Auto : public Vehiculo {
private:
    int puertas;

public:
    Auto(std::string m, std::string mod, int vel, int p)
        : Vehiculo(m, mod, vel), puertas(p) {}

    void mostrarInfo() const override {
        std::cout << "[Auto] " << marca << " " << modelo 
                  << " | VelMax: " << velocidadMax << " km/h | Puertas: " << puertas << std::endl;
    }
};

class Motocicleta : public Vehiculo {
private:
    bool tieneSidecar;

public:
    Motocicleta(std::string m, std::string mod, int vel, bool sidecar)
        : Vehiculo(m, mod, vel), tieneSidecar(sidecar) {}

    void mostrarInfo() const override {
        std::cout << "[Motocicleta] " << marca << " " << modelo 
                  << " | VelMax: " << velocidadMax << " km/h | Sidecar: " 
                  << (tieneSidecar ? "Si" : "No") << std::endl;
    }
};

int main() {
    std::vector<Vehiculo*> garaje;

    garaje.push_back(new Auto("Ford", "Mustang", 250, 2));
    garaje.push_back(new Motocicleta("BMW", "R1250", 200, true));
    garaje.push_back(new Auto("Honda", "Civic", 190, 4));

    std::cout << "\n" << std::endl;
    for (const auto* v : garaje) {
        v->mostrarInfo();
    }

    for (auto* v : garaje) {
        delete v;
    }

    return 0;
}