#include "SistemaReciclaje.h"
#include <iostream>

int main() {
    SistemaReciclaje sistema;

    sistema.registrarCiudadano(1, "Hernan");
    sistema.registrarEmpleado(100,"Carlos");

    sistema.registrarEntrega(100, 1, "plastico", 3);
    sistema.registrarEntrega(100, 1, "vidrio", 2);
    std::cout << " tiene " << sistema.consultarPuntos(1) << " puntos." << std::endl;

    return 0;
}



// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.