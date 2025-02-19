#include "SistemaReciclaje.h"
#include <iostream>

void SistemaReciclaje::registrarCiudadano(int id, std::string nombre) {
    ciudadanos.emplace_back(id, nombre);
}

void SistemaReciclaje::registrarEmpleado(int id, std::string nombre) {
    empleados.emplace_back(id, nombre);
}

void SistemaReciclaje::registrarEntrega(int idEmpleado, int idCiudadano, std::string material, int peso) {
    // Verificar si el empleado existe
    bool empleadoExiste = false;
    for (auto &empleado : empleados) {
        if (empleado.getId() == idEmpleado) {
            empleadoExiste = true;
            break;
        }
    }
    if (!empleadoExiste) {
        std::cout << "Empleado no encontrado.\n";
        return;
    }

    // Buscar ciudadano y calcular puntos
    for (auto &ciudadano : ciudadanos) {
        if (ciudadano.getId() == idCiudadano) {
            int puntosPorKg = 0;
            if (material == "plastico") puntosPorKg = 5;
            else if (material == "vidrio") puntosPorKg = 2;
            else if (material == "metal") puntosPorKg = 4;

            int puntosObtenidos = peso * puntosPorKg;
            ciudadano.sumarPuntos(puntosObtenidos);

            std::cout << "Empleado ha registrado la entrega.\n";
            std::cout << ciudadano.getNombre() << " ha obtenido " << puntosObtenidos << " puntos por " << peso << " kg de " << material << ".\n";
            return;
        }
    }
    std::cout << "Ciudadano no encontrado.\n";
}

int SistemaReciclaje::consultarPuntos(int idCiudadano) {
    for (auto &ciudadano : ciudadanos) {
        if (ciudadano.getId() == idCiudadano) {
            return ciudadano.consultarPuntos();
        }
    }
    std::cout << "Ciudadano no encontrado.\n";
    return 0;
}
