#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

class Empleado {
private:
    int id;
    std::string nombre;

public:
    Empleado(int id, std::string nombre);
    int getId();
    std::string getNombre();
};

#endif
