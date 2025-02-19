#ifndef SISTEMARECICLAJE_H
#define SISTEMARECICLAJE_H

#include <list>
#include "Ciudadano.h"
#include "Empleado.h"

class SistemaReciclaje {
private:
    std::list<Ciudadano> ciudadanos;
    std::list<Empleado> empleados;

public:
    void registrarCiudadano(int id, std::string nombre);
    void registrarEmpleado(int id, std::string nombre);
    void registrarEntrega(int idEmpleado, int idCiudadano, std::string material, int peso);
    int consultarPuntos(int idCiudadano);
};

#endif
