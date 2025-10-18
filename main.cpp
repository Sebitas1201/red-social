#include <iostream>
#include "Usuario.h"

int main() {
    // Crear dos usuarios
    Usuario u1("Sebastian");
    Usuario u2("Valeria");

    Publicacion& pub1 = u1.crearPublicacion("foto.png", "Aqui en programacion");

    u2.comentar(pub1, "Uy, buena suerte");

    u2.darLike(pub1 );

    std::cout << std::endl << "Informacion de la publicacion" << std::endl;
    pub1.mostrarInfo();

    return 0;
}
