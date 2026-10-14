#include <iostream>
#include <vector>
#include <string>

class Vehiculo {
private:
    std::string marca;
    std::string modelo;
    int serie;

public:
    Vehiculo(std::string m, std::string mod, int s) 
        : marca(m), modelo(mod), serie(s) {}

    void mostrarDetalles() const {
        std::cout << "Vehiculo: " << marca << " " << modelo << " (" << serie << ")" << std::endl;
    }
};

int main() {
    std::vector<Vehiculo> ColeccionVehiculos;

    ColeccionVehiculos.push_back(Vehiculo("Toyota", "Corolla", 2022));
    ColeccionVehiculos.push_back(Vehiculo("Honda", "Civic", 2023));
    ColeccionVehiculos.push_back(Vehiculo("Mazda", "CX-5", 2021));
    ColeccionVehiculos.push_back(Vehiculo("Nissan", "Sentra", 2024));

    std::cout << "===== COLECCION =====" << std::endl;

    for (std::vector<Vehiculo>::const_iterator it = ColeccionVehiculos.begin();
     it != ColeccionVehiculos.end(); ++it) {
        it->mostrarDetalles();
    }

    return 0;
}
