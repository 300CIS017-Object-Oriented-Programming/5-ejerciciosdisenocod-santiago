#ifndef CIUDADANO_H
#define CIUDADANO_H

#include <string>

class Ciudadano {
private:
    int id;
    std::string nombre;
    int puntos;

public:
    Ciudadano(int id, std::string nombre);
    void sumarPuntos(int puntosObtenidos);
    int consultarPuntos();
    int getId();
    std::string getNombre();
};

#endif
