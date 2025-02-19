#include "Empleado.h"

Empleado::Empleado(int id, std::string nombre) : id(id), nombre(nombre) {}

int Empleado::getId() {
    return id;
}

std::string Empleado::getNombre() {
    return nombre;
}
