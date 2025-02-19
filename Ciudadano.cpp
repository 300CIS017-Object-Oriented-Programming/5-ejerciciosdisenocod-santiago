#include "Ciudadano.h"

Ciudadano::Ciudadano(int id, std::string nombre) : id(id), nombre(nombre), puntos(0) {}

void Ciudadano::sumarPuntos(int puntosObtenidos) {
    puntos += puntosObtenidos;
}

int Ciudadano::consultarPuntos() {
    return puntos;
}

int Ciudadano::getId() {
    return id;
}

std::string Ciudadano::getNombre() {
    return nombre;
}
